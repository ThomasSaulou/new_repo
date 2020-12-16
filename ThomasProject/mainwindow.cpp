#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "improcessing.h"
#include "my_qlabel.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <iostream>
#include <QMessageBox>
#include <qmath.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lbl_image, SIGNAL(Mouse_Pos()),this, SLOT(Mouse_current_pos()));
    connect(ui->lbl_image, SIGNAL(Mouse_Pressed()),this, SLOT(Mouse_Pressed()));
    connect(ui->lbl_image, SIGNAL(Mouse_Left()),this, SLOT(Mouse_left()));
    connect(ui->lbl_image, SIGNAL(Mouse_Released()),this, SLOT(Mouse_Released()));

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::Mouse_current_pos()
{
    int y =ui->lbl_image->y;
    int w = ui->lbl_image->width();
    int h = ui->lbl_image->height();
    int imh=m_h*w/m_w;
    int yim=y-(h-imh)/2;
    if(y<(h+imh)/2 && y>(h-imh)/2){
        int yim=y-(h-imh)/2;
        ui->lblMouse_Current_Pos->setText(QString("X= %1, Y = %2").arg(ui->lbl_image->x).arg(yim));
        ui->lblMouse_Current_Event->setText("Mouse mouving!");}


    if (m_mouseVal==2){
        if (m_mouseClick==1){
            if(y<(h+imh)/2 && y>(h-imh)/2){
                for (int xblue=-int(qSqrt(m_SelectSize));xblue<int(sqrt(m_SelectSize));xblue++){
                    for (int yblue=-int(sqrt(m_SelectSize));yblue<int(sqrt(m_SelectSize));yblue++){
                        if(xblue*xblue+yblue*yblue<m_SelectSize)
                        Map.setPixel(ui->lbl_image->x+xblue,yim+yblue,qRgb(0,0,255));
                    }
                    }
                }

                display();
            }
        }


}

void MainWindow::Mouse_Pressed()
{
    ui->lblMouse_Current_Event->setText("Mouse Pressed!");
    m_mouseClick=1;

    int y =ui->lbl_image->y;
    int w = ui->lbl_image->width();
    int h = ui->lbl_image->height();
    int imh=image.height()*w/image.width();
    int yim=y-(h-imh)/2;

if(m_mouseVal==1){
    if(y<(h+imh)/2 && y>(h-imh)/2){

        QColor color( Map.pixel( ui->lbl_image->x,yim ) );
        ui->lbl_Color->setText(QString("Color:\n red=%1 \n green=%2").arg(color.red()).arg(color.green()));
        if(s==0){
            Px1=ui->lbl_image->x;
            Py1=yim;
            s=1;
        }
        else if(s==1){
            Px2=ui->lbl_image->x;
            Py2=yim;
            s=0;
            hough=Processing.drawLineRed(hough,Px1,Py1,Px2,Py2);

            m_lineOn2=1;
            m_display2=3;
            m_display1=1;
            display();


        }
    }
    }



}

void MainWindow::Mouse_left()
{
    ui->lblMouse_Current_Event->setText("Mouse Left!");
}

void MainWindow::Mouse_Released()
{
    m_mouseClick=0;
}




void MainWindow::display1(QImage image){
    ui->lbl_image->setPixmap(QPixmap::fromImage(image));
}
void MainWindow::display2(QImage image){
    ui->lbl_processing->setPixmap(QPixmap::fromImage(image));
}

void MainWindow::on_btn_import_clicked()
{
    Processing.clearAll();
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"),"",tr("Images(*.png *.jpg *.jpeg *.bmp *.gif)"));
    if (QString::compare(filename,QString()) !=0)
    {

        bool valid = image.load(filename);

        if(valid)
        {
            image = image.scaledToWidth(ui->lbl_image->width(),Qt::SmoothTransformation);
            m_h=image.height();
            m_w=image.width();
            display1(image);
            m_sobelThreshold=80;
            m_sizeThreshold=30;
            sobel=Processing.sobel(image);
            hough =Processing.hough(sobel,m_sobelThreshold,m_sizeThreshold);
            display2(hough);

        }

    }
}

void MainWindow::on_btn_gray_clicked()
{
    gray=Processing.gray(image);
    display2(gray);


}




void MainWindow::on_btn_sobel_clicked()
{
    sobel=Processing.sobel(image);
    display2(sobel);

}

void MainWindow::on_btn_hough_clicked()
{
    m_sobelThreshold=80;
    m_sizeThreshold=30;
    sobel=Processing.sobel(image);
    hough =Processing.hough(sobel,m_sobelThreshold,m_sizeThreshold);
    m_lineOn2=1;
    m_display2=2;
    m_display1=1;
    display();


}




void MainWindow::on_slider_sobelThreshold_valueChanged(int value)
{
    m_sobelThreshold=30+2*value;
    hough =Processing.hough(sobel,m_sobelThreshold,m_sizeThreshold);

    m_lineOn2=1;
    m_display2=2;
    m_display1=1;
    display();

}

void MainWindow::on_slider_sizeThreshold_valueChanged(int value)
{
    m_sizeThreshold=10+2*value;
    hough =Processing.hough(sobel,m_sobelThreshold,m_sizeThreshold);
    m_lineOn2=1;
    m_display2=2;
    m_display1=1;
    display();


}



void MainWindow::on_btn_lineModification_clicked()
{



    if ( Map.height()>0){
        imLineModified=Processing.ImageModification3(image,Map,sobel);

        display2(imLineModified);
        display1(hough);
        m_lineOn=1;
        m_display2=5;
        m_display1=2;
        display();
}
    else{
        QMessageBox::information(this,tr("Error Map"),tr("Warning no Modification Map !"));
    }

}

void MainWindow::on_btn_reset_clicked()
{

    m_lineOn2=1;
    m_display2=2;
    m_display1=1;
    display();

}

void MainWindow::on_btn_display1_clicked()
{
    m_display1=1;
    display();
}

void MainWindow::display()
{


    if(m_lineOn==0 &&     m_lineDrawOn==0){
    switch(m_display1) {
    case 1 : display1(image); // prints "1"
        break;       // and exits the switch
    case 2 : display1(sobel);
        break;
    case 3 : display1(hough);
        break;
    case 4 : display1(Map);
        break;
    case 5 : display1(imLineModified);
        break;
    }
    }
    else if (m_lineOn==2 &&     m_lineDrawOn==0){
        switch(m_display1) {
        case 1 : display1(Processing.drawOn(image)); // prints "1"
            break;       // and exits the switch
        case 2 : display1(Processing.drawOn(sobel));
            break;
        case 3 : display1(Processing.drawOn(hough));
            break;
        case 4 : display1(Processing.drawOn(Map));
            break;
        case 5 : display1(Processing.drawOn(imLineModified));
            break;
        }

    }
    else if (m_lineOn==2 &&     m_lineDrawOn==2){
        switch(m_display1) {
        case 1 : display1(Processing.drawOn2(Processing.drawOn(image))); // prints "1"
            break;       // and exits the switch
        case 2 : display1(Processing.drawOn2(Processing.drawOn(sobel)));
            break;
        case 3 : display1(Processing.drawOn2(Processing.drawOn(hough)));
            break;
        case 4 : display1(Processing.drawOn2(Processing.drawOn(Map)));
            break;
        case 5 : display1(Processing.drawOn2(Processing.drawOn(imLineModified)));
            break;
        }

    }
    else{
        switch(m_display1) {
        case 1 : display1(Processing.drawOn2(image)); // prints "1"
            break;       // and exits the switch
        case 2 : display1(Processing.drawOn2(sobel));
            break;
        case 3 : display1(Processing.drawOn2(hough));
            break;
        case 4 : display1(Processing.drawOn2(Map));
            break;
        case 5 : display1(Processing.drawOn2(imLineModified));
            break;
        }

    }

 if(m_lineOn2==0 && m_lineDrawOn2==0){
    switch(m_display2) {
    case 1 : display2(image); // prints "1"
        break;       // and exits the switch
    case 2 : display2(sobel);
        break;
    case 3 : display2(hough);
        break;
    case 4 : display2(Map);
        break;
    case 5 : display2(imLineModified);
        break;
    }
 }

    else if (m_lineOn2==2 && m_lineDrawOn2==0){
        switch(m_display2) {
        case 1 : display2(Processing.drawOn(image)); // prints "1"
            break;       // and exits the switch
        case 2 : display2(Processing.drawOn(sobel));
            break;
        case 3 : display2(Processing.drawOn(hough));
            break;
        case 4 : display2(Processing.drawOn(Map));
            break;
        case 5 : display2(Processing.drawOn(imLineModified));
            break;
        }

    }
 else if (m_lineOn2==2 && m_lineDrawOn2==2){
     switch(m_display2) {
     case 1 : display2(Processing.drawOn2(Processing.drawOn(image))); // prints "1"
         break;       // and exits the switch
     case 2 : display2(Processing.drawOn2(Processing.drawOn(sobel)));
         break;
     case 3 : display2(Processing.drawOn2(Processing.drawOn(hough)));
         break;
     case 4 : display2(Processing.drawOn2(Processing.drawOn(Map)));
         break;
     case 5 : display2(Processing.drawOn2(Processing.drawOn(imLineModified)));
         break;
     }

 }
 else {
     switch(m_display2) {
     case 1 : display2(Processing.drawOn2(image)); // prints "1"
         break;       // and exits the switch
     case 2 : display2(Processing.drawOn2(sobel));
         break;
     case 3 : display2(Processing.drawOn2(hough));
         break;
     case 4 : display2(Processing.drawOn2(Map));
         break;
     case 5 : display2(Processing.drawOn2(imLineModified));
         break;
     }

 }











}

void MainWindow::on_btn_display2_clicked()
{
    m_display1=2;
    display();
}

void MainWindow::on_btn_display3_clicked()
{
    m_display1=3;
    display();
}

void MainWindow::on_btn_display4_clicked()
{
    m_display1=4;
    display();
}

void MainWindow::on_btn_display5_clicked()
{
    m_display1=5;
    display();
}

void MainWindow::on_btn_display6_clicked()
{
    m_display2=1;
    display();
}

void MainWindow::on_btn_display7_clicked()
{
    m_display2=2;
    display();
}

void MainWindow::on_btn_display8_clicked()
{
    m_display2=3;
    display();
}

void MainWindow::on_btn_display9_clicked()
{
    m_display2=4;
    display();
}

void MainWindow::on_btn_display10_clicked()
{
    m_display2=5;
    display();
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    m_lineOn=arg1;
    display();
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    m_lineOn2=arg1;
    display();
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    m_nbLine=arg1;
    Processing.setNbLine(arg1);
    Processing.fillListPointer();
    Processing.fillListLine();
    display();
}

void MainWindow::on_pushButton_4_clicked()
{
    if(m_currentLine<m_nbLine){
        m_currentLine++;
    ui->lbl_line->setText(QString("line:%1 ").arg(m_currentLine));}
    else{
        QMessageBox::information(this,tr("Error out of range"),tr("Add more lines with the spin box!"));
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(m_currentLine>0){
     m_currentLine--;
    ui->lbl_line->setText(QString("line:%1 ").arg(m_currentLine));}
    else{
        QMessageBox::information(this,tr("Error out of range"),tr("Already the first Line!"));
    }
}

void MainWindow::on_pushButton_clicked()
{



    Processing.listPointerChange(m_currentLine,0);
    Processing.fillListLine();
    display();


}

void MainWindow::on_pushButton_2_clicked()
{


if (m_currentLine<Processing.getNbofLines()){
     Processing.listPointerChange(m_currentLine,1);
     Processing.fillListLine();
     display();}

else{
    QMessageBox::information(this,tr("Error out of range"),tr("Warning no more lines !"));
}



}

void MainWindow::on_btn_Map_clicked()
{

    if (Processing.DrawnLineExiste()){
    Map=Processing.MapModification(image);
    m_display2=4;
    display();}
    else{
        QMessageBox::information(this,tr("Error Drawn Line"),tr("Warning no line drawn !"));
    }


}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    m_lineDrawOn=arg1;
    display();
}

void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    m_lineDrawOn2=arg1;
    display();
}


void MainWindow::on_radioButton_clicked()
{
    m_mouseVal=1;
}

void MainWindow::on_radioButton_2_clicked()
{
    m_mouseVal=2;
}

void MainWindow::on_slider_size_selecte_valueChanged(int value)
{
    m_SelectSize=value;
}

void MainWindow::on_btn_MapVerticale_clicked()
{


        if (Processing.DrawnLineExiste()){
        Map=Processing.MapModificationVertical(image);
        m_display2=4;
        display();}
        else{
            QMessageBox::information(this,tr("Error Drawn Line"),tr("Warning no line drawn !"));
        }


    }




void MainWindow::on_btn_lineModificationVertical_clicked()
{

    if ( Map.height()>0){
        imLineModified=Processing.ImageModificationVertical(image,Map,sobel);

        display2(imLineModified);
        display1(hough);
        m_lineOn=1;
        m_display2=5;
        m_display1=2;
        display();
}
    else{
        QMessageBox::information(this,tr("Error Map"),tr("Warning no Modification Map !"));
    }
}
