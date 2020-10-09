#include <QPainter>
#include <QFile>
#include <QFileDialog>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include <QChar>
#include <QDebug>

QChar NL = '|';
QString VERSE = "O Vrba! srečna, draga vas domača, kjer hiša mojega stoji očeta; de b' uka žeja me iz tvojga svéta speljala ne bila, goljfiva kača!\n\n"
               "Ne vedel bi, kako se v strup prebrača vse, kar srce si sladkega obeta; mi ne bila bi vera v sebe vzeta, ne bil viharjov nótranjih b' igrača!\n\n"
               "Zvestó srce in delavno ročico za doto, ki je nima miljonarka, bi bil dobil z izvoljeno devico;\n\n"
               "mi mirno plavala bi moja barka, pred ognjam dom, pred točo mi pšenico bi bližnji sosed vároval - svet' Marka.";

QString getText(QString filename)
{
    QString content;

    QFile d(filename);
    if(!d.open(QIODevice::ReadOnly))
    {
        return "";
    }
    QTextStream txtstr(&d);
    content = txtstr.readAll();
    d.close();

    return content;
}

int convToJpgs(QString content, QString name, QString folder, QFont font, QColor fontColor, QColor bckgColor, int quality, int resx, int resy, bool parseEOL)
{
    if(parseEOL)
    {
        content.replace(QString('\n'),QString(NL));
    }
    content = content.simplified();
    content.remove(QRegExp("[\n\t\r]"));
    if(content.length() <= 0)
    {
        return -2;
    }

    QFontMetrics metrics(font);
    int height = metrics.height();


    int currentLine = 0;
    QVector<QString> lineVector(1, "");

    for(int i = 0; i < content.length()-1; i++)
    {
        if(content[i] == NL)
        {
            if(parseEOL)
            {
                lineVector.push_back("");
                currentLine++;
                continue;
            }
        }
        if((metrics.width(lineVector[currentLine]) + metrics.width(content[i])) >= resx)
        {
            if(content[i] != ' ')
            {
                lineVector.push_back("");
                currentLine++;
                lineVector[currentLine].append(content[i]);
            }
        }
        else
        {
            lineVector[currentLine].append(content[i]);
        }
    }

    int numLines = (resy / height);
    int numImgs = ((currentLine + 1) / numLines) + 1;

    for(int n = 0; n < numImgs; n++)
    {
        QImage image(resx, resy, QImage::Format_ARGB32_Premultiplied);
        QPainter painter(&image);
        QPen pen(fontColor);

        painter.setPen(pen);
        painter.setFont(font);
        painter.fillRect(image.rect(), bckgColor);

        for(int y = 0; y < numLines; y++)
        {
            if(n*numLines + y >= lineVector.size())
            {
                if(!image.save(folder + "/" + name + QString::number(n+1) + ".jpg", "JPG", quality))
                {
                    return -1;
                }
                break;
            }
            painter.drawText(0, y*height, metrics.width(lineVector[n*numLines + y]), height, Qt::AlignLeft, lineVector[n*numLines + y]);
        }
        if(!image.save(folder + "/" + name + QString::number(n+1) + ".jpg", "JPG", quality))
        {
            return -1;
        }
    }
    return 1;
}


int START(QString filename, QString folder, QFont font, QColor fontColor, QColor bckgColor, int quality, int resx, int resy, bool parseEOL)
{
    QString content = getText(filename);
    QStringList path = filename.split("/");
    QString name = path.at(path.size() - 1);

    return convToJpgs(content, name, folder, font, fontColor, bckgColor, quality, resx, resy, parseEOL);
}


int STARTpr(QString folder, QFont font, QColor fontColor, QColor bckgColor, int quality, int resx, int resy, bool parseEOL)
{
    QString content = VERSE;
    return convToJpgs(content, "preview", folder, font, fontColor, bckgColor, quality, resx, resy, parseEOL);
}

QString chooseFile()
{
    return QFileDialog::getOpenFileName(0,"Open file...", "/home", "Text files (*.txt)");
}

QString chooseFolder()
{
    return QFileDialog::getExistingDirectory(0,"Choose folder...", "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
}
