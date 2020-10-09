#ifndef TXTTOIMG_H
#define TXTTOIMG_H
#include <QColor>
#include <QFont>

int START(QString, QString, QFont, QColor, QColor, int, int, int, bool);
int STARTpr(QString, QFont, QColor, QColor, int, int, int, bool);
int convToJpgs (QString, QFont, QColor, QColor, int, int, int, bool);

QString chooseFile();
QString chooseFolder();

#endif // TXTTOIMG_H
