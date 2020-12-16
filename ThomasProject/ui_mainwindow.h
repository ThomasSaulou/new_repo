/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <my_qlabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    my_qlabel *lbl_image;
    QLabel *lbl_processing;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblMouse_Current_Pos;
    QLabel *lblMouse_Current_Event;
    QLabel *lbl_Color;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_gray;
    QPushButton *btn_sobel;
    QPushButton *btn_hough;
    QSlider *slider_sobelThreshold;
    QSlider *slider_sizeThreshold;
    QPushButton *btn_Map;
    QPushButton *btn_MapVerticale;
    QPushButton *btn_lineModification;
    QPushButton *btn_lineModificationVertical;
    QPushButton *btn_import;
    QPushButton *btn_reset;
    QPushButton *btn_display1;
    QLabel *label;
    QPushButton *btn_display2;
    QPushButton *btn_display3;
    QPushButton *btn_display4;
    QPushButton *btn_display5;
    QPushButton *btn_display10;
    QPushButton *btn_display8;
    QLabel *label_2;
    QPushButton *btn_display6;
    QPushButton *btn_display7;
    QPushButton *btn_display9;
    QLabel *label_4;
    QSpinBox *spinBox;
    QGroupBox *groupBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *lbl_line;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSlider *slider_size_selecte;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1033, 633);
        MainWindow->setMaximumSize(QSize(1033, 633));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 0, 641, 551));
        groupBox->setMinimumSize(QSize(641, 551));
        groupBox->setMaximumSize(QSize(641, 551));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbl_image = new my_qlabel(groupBox);
        lbl_image->setObjectName(QStringLiteral("lbl_image"));
        lbl_image->setMouseTracking(true);
        lbl_image->setFrameShape(QFrame::NoFrame);
        lbl_image->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbl_image);

        lbl_processing = new QLabel(groupBox);
        lbl_processing->setObjectName(QStringLiteral("lbl_processing"));
        lbl_processing->setMouseTracking(true);

        horizontalLayout->addWidget(lbl_processing);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 111, 351));
        groupBox_2->setMinimumSize(QSize(111, 351));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblMouse_Current_Pos = new QLabel(groupBox_2);
        lblMouse_Current_Pos->setObjectName(QStringLiteral("lblMouse_Current_Pos"));

        verticalLayout_2->addWidget(lblMouse_Current_Pos);

        lblMouse_Current_Event = new QLabel(groupBox_2);
        lblMouse_Current_Event->setObjectName(QStringLiteral("lblMouse_Current_Event"));

        verticalLayout_2->addWidget(lblMouse_Current_Event);

        lbl_Color = new QLabel(groupBox_2);
        lbl_Color->setObjectName(QStringLiteral("lbl_Color"));

        verticalLayout_2->addWidget(lbl_Color);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(840, 80, 171, 351));
        groupBox_3->setMinimumSize(QSize(171, 351));
        groupBox_3->setMaximumSize(QSize(171, 351));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_gray = new QPushButton(groupBox_3);
        btn_gray->setObjectName(QStringLiteral("btn_gray"));

        verticalLayout->addWidget(btn_gray);

        btn_sobel = new QPushButton(groupBox_3);
        btn_sobel->setObjectName(QStringLiteral("btn_sobel"));

        verticalLayout->addWidget(btn_sobel);

        btn_hough = new QPushButton(groupBox_3);
        btn_hough->setObjectName(QStringLiteral("btn_hough"));

        verticalLayout->addWidget(btn_hough);

        slider_sobelThreshold = new QSlider(groupBox_3);
        slider_sobelThreshold->setObjectName(QStringLiteral("slider_sobelThreshold"));
        slider_sobelThreshold->setMaximum(100);
        slider_sobelThreshold->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_sobelThreshold);

        slider_sizeThreshold = new QSlider(groupBox_3);
        slider_sizeThreshold->setObjectName(QStringLiteral("slider_sizeThreshold"));
        slider_sizeThreshold->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_sizeThreshold);

        btn_Map = new QPushButton(groupBox_3);
        btn_Map->setObjectName(QStringLiteral("btn_Map"));

        verticalLayout->addWidget(btn_Map);

        btn_MapVerticale = new QPushButton(groupBox_3);
        btn_MapVerticale->setObjectName(QStringLiteral("btn_MapVerticale"));

        verticalLayout->addWidget(btn_MapVerticale);

        btn_lineModification = new QPushButton(groupBox_3);
        btn_lineModification->setObjectName(QStringLiteral("btn_lineModification"));

        verticalLayout->addWidget(btn_lineModification);

        btn_lineModificationVertical = new QPushButton(groupBox_3);
        btn_lineModificationVertical->setObjectName(QStringLiteral("btn_lineModificationVertical"));

        verticalLayout->addWidget(btn_lineModificationVertical);

        btn_import = new QPushButton(centralwidget);
        btn_import->setObjectName(QStringLiteral("btn_import"));
        btn_import->setGeometry(QRect(10, 450, 111, 21));
        btn_import->setMinimumSize(QSize(111, 21));
        btn_import->setMaximumSize(QSize(111, 21));
        btn_reset = new QPushButton(centralwidget);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));
        btn_reset->setGeometry(QRect(10, 480, 111, 21));
        btn_display1 = new QPushButton(centralwidget);
        btn_display1->setObjectName(QStringLiteral("btn_display1"));
        btn_display1->setGeometry(QRect(180, 560, 51, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 550, 47, 13));
        btn_display2 = new QPushButton(centralwidget);
        btn_display2->setObjectName(QStringLiteral("btn_display2"));
        btn_display2->setGeometry(QRect(230, 560, 41, 21));
        btn_display3 = new QPushButton(centralwidget);
        btn_display3->setObjectName(QStringLiteral("btn_display3"));
        btn_display3->setGeometry(QRect(270, 560, 41, 21));
        btn_display4 = new QPushButton(centralwidget);
        btn_display4->setObjectName(QStringLiteral("btn_display4"));
        btn_display4->setGeometry(QRect(310, 560, 41, 21));
        btn_display5 = new QPushButton(centralwidget);
        btn_display5->setObjectName(QStringLiteral("btn_display5"));
        btn_display5->setGeometry(QRect(350, 560, 41, 21));
        btn_display10 = new QPushButton(centralwidget);
        btn_display10->setObjectName(QStringLiteral("btn_display10"));
        btn_display10->setGeometry(QRect(690, 560, 41, 21));
        btn_display8 = new QPushButton(centralwidget);
        btn_display8->setObjectName(QStringLiteral("btn_display8"));
        btn_display8->setGeometry(QRect(610, 560, 41, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 560, 47, 13));
        btn_display6 = new QPushButton(centralwidget);
        btn_display6->setObjectName(QStringLiteral("btn_display6"));
        btn_display6->setGeometry(QRect(520, 560, 51, 21));
        btn_display7 = new QPushButton(centralwidget);
        btn_display7->setObjectName(QStringLiteral("btn_display7"));
        btn_display7->setGeometry(QRect(570, 560, 41, 21));
        btn_display9 = new QPushButton(centralwidget);
        btn_display9->setObjectName(QStringLiteral("btn_display9"));
        btn_display9->setGeometry(QRect(650, 560, 41, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(930, 450, 61, 16));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(870, 450, 42, 22));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(860, 480, 141, 91));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 21, 21));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 30, 21, 21));
        lbl_line = new QLabel(groupBox_4);
        lbl_line->setObjectName(QStringLiteral("lbl_line"));
        lbl_line->setGeometry(QRect(60, 30, 31, 16));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 60, 41, 21));
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(90, 60, 41, 21));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(400, 550, 61, 19));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(740, 550, 61, 20));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(400, 570, 81, 19));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(740, 570, 81, 19));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(880, 20, 84, 19));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(880, 40, 84, 19));
        slider_size_selecte = new QSlider(centralwidget);
        slider_size_selecte->setObjectName(QStringLiteral("slider_size_selecte"));
        slider_size_selecte->setGeometry(QRect(900, 60, 51, 16));
        slider_size_selecte->setMinimum(10);
        slider_size_selecte->setMaximum(200);
        slider_size_selecte->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1033, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        lbl_image->setText(QString());
        lbl_processing->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        lblMouse_Current_Pos->setText(QApplication::translate("MainWindow", "X= , Y= ", Q_NULLPTR));
        lblMouse_Current_Event->setText(QString());
        lbl_Color->setText(QApplication::translate("MainWindow", "Color:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        btn_gray->setText(QApplication::translate("MainWindow", "Gray", Q_NULLPTR));
        btn_sobel->setText(QApplication::translate("MainWindow", "Sobel", Q_NULLPTR));
        btn_hough->setText(QApplication::translate("MainWindow", "Hough", Q_NULLPTR));
        btn_Map->setText(QApplication::translate("MainWindow", "Map", Q_NULLPTR));
        btn_MapVerticale->setText(QApplication::translate("MainWindow", "Map vertical", Q_NULLPTR));
        btn_lineModification->setText(QApplication::translate("MainWindow", "Line modification", Q_NULLPTR));
        btn_lineModificationVertical->setText(QApplication::translate("MainWindow", "Line modification vertical", Q_NULLPTR));
        btn_import->setText(QApplication::translate("MainWindow", "Import", Q_NULLPTR));
        btn_reset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        btn_display1->setText(QApplication::translate("MainWindow", "Original", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Display 1", Q_NULLPTR));
        btn_display2->setText(QApplication::translate("MainWindow", "Sobel", Q_NULLPTR));
        btn_display3->setText(QApplication::translate("MainWindow", "Hough", Q_NULLPTR));
        btn_display4->setText(QApplication::translate("MainWindow", "Map", Q_NULLPTR));
        btn_display5->setText(QApplication::translate("MainWindow", "Modif", Q_NULLPTR));
        btn_display10->setText(QApplication::translate("MainWindow", "Modif", Q_NULLPTR));
        btn_display8->setText(QApplication::translate("MainWindow", "Hough", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Display 2", Q_NULLPTR));
        btn_display6->setText(QApplication::translate("MainWindow", "Original", Q_NULLPTR));
        btn_display7->setText(QApplication::translate("MainWindow", "Sobel", Q_NULLPTR));
        btn_display9->setText(QApplication::translate("MainWindow", "Map", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "nb of lines", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        pushButton->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        lbl_line->setText(QApplication::translate("MainWindow", "Line:01", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "prev", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Lines", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "Lines", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "Lines Drawn", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "Lines Drawn", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Selection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
