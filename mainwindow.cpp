#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "txttoimg.h"
#include <QFontDialog>
#include <QFontInfo>
#include <QColorDialog>
#include <QMessageBox>
#include <QFile>
#include <QDir>

QFont currentFont("Liberation Sans", 8, QFont::Bold);
QColor fontColor = Qt::white, bckgColor = Qt::black;
QPalette palette_bckg, palette_font;

QString wdir = "./";
int quality = 75;
int resolution_x = 256;
int resolution_y = 256;
bool parseEOL = true;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    updatePreview();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_chooseFile_clicked()
{
    QString filename = chooseFile();
    ui->edit_input->setText(filename);
}

void MainWindow::on_btn_chooseFolder_clicked()
{
    QString folder = chooseFolder();
    ui->edit_output->setText(folder);
}

void MainWindow::on_btn_font_clicked()
{
    bool dialog_ok = false;
    QFont newFont = QFontDialog::getFont(&dialog_ok, currentFont);
    if(dialog_ok)
    {
        currentFont = newFont;
        updatePreview();
    }
}

void MainWindow::on_btn_fontColor_clicked()
{
    QColor newFontColor = QColorDialog::getColor(fontColor, 0, "Choose font color");
    if(newFontColor.isValid())
    {
        fontColor = newFontColor;
        updatePreview();
    }
}

void MainWindow::on_btn_backgroundColor_clicked()
{
    QColor newBckgColor = QColorDialog::getColor(bckgColor, 0, "Choose background color");
    if(newBckgColor.isValid())
    {
        bckgColor = newBckgColor;
        updatePreview();
    }
}

void MainWindow::on_slider_quality_valueChanged(int value)
{
    quality = value;
    updatePreview();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::warning(0,"About", "Version 1.0");
}

void MainWindow::on_btn_reset_clicked()
{
    quality = 75;
    ui->slider_quality->setValue(75);
    bckgColor = Qt::black;
    fontColor = Qt::white;
    currentFont = QFont("Liberation Sans", 8, QFont::Bold);
    ui->edit_output->setText("");
    ui->edit_input->setText("");
    updatePreview();
}

void MainWindow::updatePreview()
{
    palette_bckg.setColor(QPalette::Button, bckgColor);
    palette_font.setColor(QPalette::Button, fontColor);

    ui->btn_backgroundColor->setPalette(palette_bckg);
    ui->btn_fontColor->setPalette(palette_font);

    ui->label_quality->setText("Quality: " + QString::number(quality) + " %");

    QFontInfo fontInfo = QFontInfo(currentFont);
    QString strFontInfo = fontInfo.family() + " " + fontInfo.styleName() + ", " + QString::number(fontInfo.pointSize());
    ui->label_font->setText(strFontInfo);

    int r = STARTpr(wdir, currentFont, fontColor, bckgColor, quality, 256, 256, parseEOL);
    switch(r)
    {
        case -1:
            QMessageBox::critical(0,"TxtToImg", "Error -1: Save file error.");
            break;
        case -2:
            QMessageBox::critical(0,"TxtToImg", "Error -2: Text file is empty.");
            break;
        default:
            break;
    }

    QPixmap previewImg(wdir + "preview1.jpg");
    ui->label_preview->setPixmap(previewImg);
    QFile d(wdir + "preview1.jpg");
    if(d.open(QIODevice::ReadOnly))
    {
        ui->label_psize->setText("Approx. size of 1 image: ~" + QString::number((d.size() + 1000)/1000) + " KB");
        d.close();
    }
}

void MainWindow::on_btn_start_clicked()
{
    int r = START(ui->edit_input->text(), ui->edit_output->text(), currentFont, fontColor, bckgColor, quality, resolution_x, resolution_y, parseEOL);
    switch(r)
        {
        case 1:
            QMessageBox::information(0, "TxtToImg", "Success.");
            break;

        case -1:
            QMessageBox::critical(0, "TxtToImg", "Error -1: Save file error.");
            break;

        case -2:
            QMessageBox::critical(0, "TxtToImg", "Error -2: Text file is empty.");
            break;

        case -3:
            QMessageBox::critical(0, "TxtToImg", "Error -3: Input file does not exist.");
            break;

        default:
            QMessageBox::critical(0, "TxtToImg", "Error ?: Error ?");
            break;
        }
}

void MainWindow::on_actionTestData_triggered()
{
    if(!QDir(wdir + "/test").exists())
        {
            QDir().mkdir(wdir + "/test");
        }
        QFile::copy("./files/fpreseren_krst_uvod.txt", wdir + "/test" + "/fpreseren_krst_uvod.txt");
        int r = START(wdir + "/test" + "/fpreseren_krst_uvod.txt", wdir + "/test", currentFont, fontColor, bckgColor, quality, resolution_x, resolution_y, parseEOL);
        switch(r)
            {
            case 1:
                QMessageBox::information(0, "TxtToImg", "Success.");
                break;

            case -1:
                QMessageBox::critical(0, "TxtToImg", "Error -1: Save file error.");
                break;

            case -2:
                QMessageBox::critical(0, "TxtToImg", "Error -2: Text file is empty.");
                break;

            case -3:
                QMessageBox::critical(0, "TxtToImg", "Error -3: Input file does not exist.");
                break;

            default:
                QMessageBox::critical(0, "TxtToImg", "Error ?: Error ?");
                break;
            }
}

void MainWindow::on_spin_resx_valueChanged(int arg1)
{
    resolution_x = arg1;
}

void MainWindow::on_spin_resy_valueChanged(int arg1)
{
    resolution_y = arg1;
}

void MainWindow::on_actionOpenFile_triggered()
{
    on_btn_chooseFile_clicked();
}

void MainWindow::on_actionOpenFolder_triggered()
{
    on_btn_chooseFolder_clicked();
}

void MainWindow::on_chbox_nl_stateChanged(int arg1)
{
    parseEOL = arg1;
    updatePreview();
}

void MainWindow::on_actionReset_triggered()
{
    on_btn_reset_clicked();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}
