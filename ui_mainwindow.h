/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenFile;
    QAction *actionAbout;
    QAction *actionTestData;
    QAction *actionOpenFolder;
    QAction *actionExit;
    QAction *actionReset;
    QWidget *centralWidget;
    QGroupBox *grpbox_settings;
    QLabel *label_input;
    QLabel *label_output;
    QLineEdit *edit_input;
    QLineEdit *edit_output;
    QPushButton *btn_chooseFile;
    QPushButton *btn_chooseFolder;
    QPushButton *btn_font;
    QLabel *label_font;
    QLabel *label_fontColor;
    QLabel *label_backgroundColor;
    QPushButton *btn_fontColor;
    QPushButton *btn_backgroundColor;
    QLabel *label_quality;
    QSlider *slider_quality;
    QCheckBox *chbox_nl;
    QSpinBox *spin_resy;
    QSpinBox *spin_resx;
    QLabel *label_resolution;
    QLabel *label_x;
    QFrame *line;
    QGroupBox *grpbox_preview;
    QLabel *label_preview;
    QLabel *label_psize;
    QFrame *line_2;
    QPushButton *btn_start;
    QPushButton *btn_reset;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuData;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(691, 516);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("folder");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionOpenFile->setIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("info");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout->setIcon(icon1);
        actionTestData = new QAction(MainWindow);
        actionTestData->setObjectName(QString::fromUtf8("actionTestData"));
        actionOpenFolder = new QAction(MainWindow);
        actionOpenFolder->setObjectName(QString::fromUtf8("actionOpenFolder"));
        actionOpenFolder->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExit->setIcon(icon2);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("undo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionReset->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        grpbox_settings = new QGroupBox(centralWidget);
        grpbox_settings->setObjectName(QString::fromUtf8("grpbox_settings"));
        grpbox_settings->setGeometry(QRect(10, 0, 330, 411));
        label_input = new QLabel(grpbox_settings);
        label_input->setObjectName(QString::fromUtf8("label_input"));
        label_input->setGeometry(QRect(10, 40, 241, 19));
        label_output = new QLabel(grpbox_settings);
        label_output->setObjectName(QString::fromUtf8("label_output"));
        label_output->setGeometry(QRect(10, 100, 211, 19));
        edit_input = new QLineEdit(grpbox_settings);
        edit_input->setObjectName(QString::fromUtf8("edit_input"));
        edit_input->setGeometry(QRect(10, 60, 271, 27));
        edit_output = new QLineEdit(grpbox_settings);
        edit_output->setObjectName(QString::fromUtf8("edit_output"));
        edit_output->setGeometry(QRect(10, 120, 271, 27));
        btn_chooseFile = new QPushButton(grpbox_settings);
        btn_chooseFile->setObjectName(QString::fromUtf8("btn_chooseFile"));
        btn_chooseFile->setGeometry(QRect(290, 60, 31, 27));
        btn_chooseFile->setIcon(icon);
        btn_chooseFolder = new QPushButton(grpbox_settings);
        btn_chooseFolder->setObjectName(QString::fromUtf8("btn_chooseFolder"));
        btn_chooseFolder->setGeometry(QRect(290, 120, 31, 27));
        btn_chooseFolder->setIcon(icon);
        btn_font = new QPushButton(grpbox_settings);
        btn_font->setObjectName(QString::fromUtf8("btn_font"));
        btn_font->setGeometry(QRect(10, 170, 100, 31));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("font");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btn_font->setIcon(icon4);
        label_font = new QLabel(grpbox_settings);
        label_font->setObjectName(QString::fromUtf8("label_font"));
        label_font->setGeometry(QRect(120, 180, 201, 19));
        label_fontColor = new QLabel(grpbox_settings);
        label_fontColor->setObjectName(QString::fromUtf8("label_fontColor"));
        label_fontColor->setGeometry(QRect(10, 220, 111, 19));
        label_backgroundColor = new QLabel(grpbox_settings);
        label_backgroundColor->setObjectName(QString::fromUtf8("label_backgroundColor"));
        label_backgroundColor->setGeometry(QRect(190, 220, 131, 19));
        label_backgroundColor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_fontColor = new QPushButton(grpbox_settings);
        btn_fontColor->setObjectName(QString::fromUtf8("btn_fontColor"));
        btn_fontColor->setGeometry(QRect(10, 240, 141, 27));
        btn_backgroundColor = new QPushButton(grpbox_settings);
        btn_backgroundColor->setObjectName(QString::fromUtf8("btn_backgroundColor"));
        btn_backgroundColor->setGeometry(QRect(180, 240, 141, 27));
        label_quality = new QLabel(grpbox_settings);
        label_quality->setObjectName(QString::fromUtf8("label_quality"));
        label_quality->setGeometry(QRect(10, 290, 131, 19));
        slider_quality = new QSlider(grpbox_settings);
        slider_quality->setObjectName(QString::fromUtf8("slider_quality"));
        slider_quality->setGeometry(QRect(180, 290, 141, 21));
        slider_quality->setMinimum(1);
        slider_quality->setMaximum(100);
        slider_quality->setValue(75);
        slider_quality->setOrientation(Qt::Horizontal);
        chbox_nl = new QCheckBox(grpbox_settings);
        chbox_nl->setObjectName(QString::fromUtf8("chbox_nl"));
        chbox_nl->setGeometry(QRect(10, 380, 311, 21));
        chbox_nl->setChecked(true);
        spin_resy = new QSpinBox(grpbox_settings);
        spin_resy->setObjectName(QString::fromUtf8("spin_resy"));
        spin_resy->setGeometry(QRect(260, 330, 61, 31));
        spin_resy->setMinimum(10);
        spin_resy->setMaximum(9999);
        spin_resy->setValue(256);
        spin_resx = new QSpinBox(grpbox_settings);
        spin_resx->setObjectName(QString::fromUtf8("spin_resx"));
        spin_resx->setGeometry(QRect(180, 330, 61, 31));
        spin_resx->setMinimum(10);
        spin_resx->setMaximum(9999);
        spin_resx->setValue(256);
        label_resolution = new QLabel(grpbox_settings);
        label_resolution->setObjectName(QString::fromUtf8("label_resolution"));
        label_resolution->setGeometry(QRect(10, 340, 131, 19));
        label_x = new QLabel(grpbox_settings);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        label_x->setGeometry(QRect(240, 340, 21, 19));
        label_x->setAlignment(Qt::AlignCenter);
        line = new QFrame(grpbox_settings);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 150, 311, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        grpbox_preview = new QGroupBox(centralWidget);
        grpbox_preview->setObjectName(QString::fromUtf8("grpbox_preview"));
        grpbox_preview->setGeometry(QRect(350, 0, 330, 411));
        label_preview = new QLabel(grpbox_preview);
        label_preview->setObjectName(QString::fromUtf8("label_preview"));
        label_preview->setGeometry(QRect(40, 60, 256, 256));
        label_preview->setMinimumSize(QSize(256, 256));
        label_preview->setMaximumSize(QSize(256, 256));
        label_psize = new QLabel(grpbox_preview);
        label_psize->setObjectName(QString::fromUtf8("label_psize"));
        label_psize->setGeometry(QRect(30, 380, 261, 19));
        label_psize->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(grpbox_preview);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 340, 311, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        btn_start = new QPushButton(centralWidget);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        btn_start->setGeometry(QRect(570, 420, 111, 33));
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8("do")));
        btn_start->setIcon(icon5);
        btn_reset = new QPushButton(centralWidget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setGeometry(QRect(450, 420, 107, 33));
        btn_reset->setIcon(icon3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 691, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuData = new QMenu(menuBar);
        menuData->setObjectName(QString::fromUtf8("menuData"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuData->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpenFile);
        menuFile->addAction(actionOpenFolder);
        menuFile->addAction(actionReset);
        menuFile->addAction(actionExit);
        menuData->addAction(actionTestData);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TxtToImg", nullptr));
        actionOpenFile->setText(QApplication::translate("MainWindow", "Open file", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionTestData->setText(QApplication::translate("MainWindow", "Test data", nullptr));
        actionOpenFolder->setText(QApplication::translate("MainWindow", "Open folder", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        grpbox_settings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        label_input->setText(QApplication::translate("MainWindow", "Input file", nullptr));
        label_output->setText(QApplication::translate("MainWindow", "Output directory", nullptr));
        btn_chooseFile->setText(QString());
        btn_chooseFolder->setText(QString());
        btn_font->setText(QApplication::translate("MainWindow", "Font", nullptr));
        label_font->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_fontColor->setText(QApplication::translate("MainWindow", "Font color", nullptr));
        label_backgroundColor->setText(QApplication::translate("MainWindow", "Background color", nullptr));
        btn_fontColor->setText(QString());
        btn_backgroundColor->setText(QString());
        label_quality->setText(QApplication::translate("MainWindow", "Quality", nullptr));
        chbox_nl->setText(QApplication::translate("MainWindow", "Parse new lines", nullptr));
        label_resolution->setText(QApplication::translate("MainWindow", "Image size", nullptr));
        label_x->setText(QApplication::translate("MainWindow", "X", nullptr));
        grpbox_preview->setTitle(QApplication::translate("MainWindow", "Preview", nullptr));
        label_preview->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_psize->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_start->setText(QApplication::translate("MainWindow", "Start", nullptr));
        btn_reset->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuData->setTitle(QApplication::translate("MainWindow", "Data", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
