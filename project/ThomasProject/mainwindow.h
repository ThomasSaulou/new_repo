#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "improcessing.h"
#include "linePerso.h"
#include  <QtMath>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void display1(QImage Image);
    void display2(QImage image);
    bool existe(std::string name);

    void handle_shortcut(char key_code);
    string getFileName();


private slots:


    void on_btn_import_clicked();

    void on_btn_gray_clicked();

    void on_btn_sobel_clicked();
    void on_btn_hough_clicked();
    void on_slider_sobelThreshold_valueChanged(int value);
    void on_slider_sizeThreshold_valueChanged(int value);
    void Mouse_current_pos();
    void Mouse_Pressed();
    void Mouse_left();
    void Mouse_Released();
    void on_btn_lineModification_clicked();

    void on_btn_reset_clicked();

    void on_btn_display1_clicked();
    void display(void );

    void on_btn_display2_clicked();

    void on_btn_display3_clicked();

    void on_btn_display4_clicked();

    void on_btn_display5_clicked();

    void on_btn_display6_clicked();

    void on_btn_display7_clicked();

    void on_btn_display8_clicked();

    void on_btn_display9_clicked();

    void on_btn_display10_clicked();



    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btn_Map_clicked();

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);


    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_slider_size_selecte_valueChanged(int value);

    void on_btn_MapVerticale_clicked();


    void on_btn_lineModificationVertical_clicked();

    void on_btn_Perspective_clicked();



    void on_btn_seam_clicked();

    void on_btn_harmonization_clicked();

private:
    int Px1=0,Px2=0,Py1=0,Py2=0;
    int s=0;
    Ui::MainWindow *ui;
    QImage image;
    QImage sobel;
    QImage hough;
    QImage gray;
    QImage Map;
    QImage imLineModified;
    ImProcessing Processing;
    int m_sobelThreshold=80;
    int m_sizeThreshold=40;
    int m_w=1;
    int m_h=1;
    int m_display1=0;
    int m_display2=0;
    int m_lineOn=0;
    int m_lineOn2=0;
    int m_currentLine=0;
    int m_nbLine=2;
    int m_lineDrawOn=0;
    int m_lineDrawOn2=0;
    int m_mouseVal=1;
    int m_mouseClick=0;
    int m_SelectSize=25;
    const char *imName;
    string fileN;
    int a=1;



};
#endif // MAINWINDOW_H
