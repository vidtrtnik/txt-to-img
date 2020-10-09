#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_chooseFile_clicked();

    void on_btn_chooseFolder_clicked();

    void on_btn_font_clicked();

    void on_btn_fontColor_clicked();

    void on_btn_backgroundColor_clicked();

    void on_slider_quality_valueChanged(int value);

    void on_actionAbout_triggered();

    void on_btn_reset_clicked();

    // ----------------------------------------------
    void updatePreview();

    void on_btn_start_clicked();

    void on_actionTestData_triggered();

    void on_spin_resx_valueChanged(int arg1);

    void on_spin_resy_valueChanged(int arg1);

    void on_actionOpenFile_triggered();

    void on_actionOpenFolder_triggered();

    void on_chbox_nl_stateChanged(int arg1);

    void on_actionReset_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
