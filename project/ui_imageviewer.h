/********************************************************************************
** Form generated from reading UI file 'imageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QAction *actionOpen;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionRotateLeft;
    QAction *actionRotateRight;
    QAction *actionSave;
    QAction *actionShowToolbar;
    QAction *actionPaintBlack;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionZoomToFit;
    QAction *actionRule_of_third_Grid;
    QAction *actiongoldenratio;
    QAction *actionCrop;
    QAction *actionFullscreen;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *imageLabel;
    QPushButton *btn_make_line;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuEdit;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QFrame *frame_3;
    QPushButton *mouse;
    QPushButton *brush;
    QPushButton *remove;
    QPushButton *line;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *btn_crop;
    QDockWidget *dockWidget_Functions;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *btn_gray;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QWidget *tab;
    QGroupBox *groupBox_4;
    QPushButton *color_little_I;
    QPushButton *color_V;
    QPushButton *color_L;
    QPushButton *color_I;
    QPushButton *color_T;
    QPushButton *color_Y;
    QPushButton *color_X;
    QPushButton *color_N;
    QPushButton *btn_apply;
    QPushButton *btn_no_filter;
    QWidget *tab_4;
    QPushButton *btn_masse_center;
    QGroupBox *groupBox_3;
    QSlider *slide_seamCarving_height;
    QSlider *slide_seamCarving_width;
    QLabel *label;
    QLabel *label_4;
    QPushButton *btn_ok_seam;
    QGroupBox *box_ROT;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_ROT_hori;
    QPushButton *btn_ROT_verti;
    QPushButton *Goldenpoint;
    QGroupBox *box_move;
    QRadioButton *btn_move;
    QPushButton *move_apply;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_golden_ratio;
    QPushButton *btn_format_square;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *btn_fixed_ligne;
    QRadioButton *btn_fixed_point;
    QRadioButton *btn_vanishing_point;
    QGroupBox *box_vanishing;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btn_horizontal;
    QPushButton *btn_vertical;
    QPushButton *btn_parrallel;
    QPushButton *btn_golden_point;
    QPushButton *btn_perspective;
    QWidget *tab_5;
    QGroupBox *Box_line_creation;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QComboBox *Line_creation_input;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QComboBox *Line_creation_output;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QPushButton *SeamCarving_zone;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QPushButton *SeamCarving_remove_zone;
    QComboBox *Line_creation_direction;
    QPushButton *btn_Create_line;
    QWidget *tab_6;
    QPushButton *btn_display_Seam;
    QPushButton *btn_energy;
    QPushButton *btn_Path;
    QPushButton *btn_moreSeam;
    QPushButton *btn_remove_seam;
    QSpinBox *nbseam;
    QPushButton *btn_map_display;
    QPushButton *btn_CompoMap;
    QPushButton *btn_selectobject;
    QPushButton *btn_score_compo;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_7;
    QGroupBox *groupBox_6;
    QPushButton *btn_select_object;
    QPushButton *btn_sel_remove;
    QPushButton *btn_grabcut;
    QGroupBox *groupBox_8;
    QComboBox *sel_grid;
    QPushButton *btn_score;
    QWidget *tab_8;
    QPushButton *btn_input_area;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QPushButton *btn_compute;
    QGroupBox *groupBox;
    QStackedWidget *proprietes_page;
    QWidget *brightnessConstrate;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *contrast_slider;
    QSlider *brightness_slider;
    QLabel *lbl_brightness;
    QLabel *lbl_contraste;
    QSlider *horizontalSlider;
    QLabel *label_11;
    QWidget *page;
    QLabel *lbl_Score;
    QGroupBox *groupBox_7;
    QListWidget *listWidget;
    QLabel *label_2;
    QPushButton *btn_add_layer;
    QDockWidget *undertoolbar;
    QWidget *dockWidgetContents_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSlider *brushSizeSlider;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;

    void setupUi(QMainWindow *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QString::fromUtf8("ImageViewer"));
        ImageViewer->resize(937, 965);
        ImageViewer->setMinimumSize(QSize(0, 30));
        ImageViewer->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icons/photoshop.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImageViewer->setWindowIcon(icon);
        ImageViewer->setAutoFillBackground(false);
        ImageViewer->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 11pt \"Ubuntu\";\n"
"\n"
"background-color: rgb(83, 83, 83);\n"
"border-color: rgb(75, 75, 75);\n"
"\n"
""));
        actionOpen = new QAction(ImageViewer);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icons/open-fileW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionZoomIn = new QAction(ImageViewer);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/icons/zoom-inW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon2);
        actionZoomOut = new QAction(ImageViewer);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/icons/zoom-outW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon3);
        actionRotateLeft = new QAction(ImageViewer);
        actionRotateLeft->setObjectName(QString::fromUtf8("actionRotateLeft"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/icons/rotate-leftW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateLeft->setIcon(icon4);
        actionRotateRight = new QAction(ImageViewer);
        actionRotateRight->setObjectName(QString::fromUtf8("actionRotateRight"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/icons/rotate-rightW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateRight->setIcon(icon5);
        actionSave = new QAction(ImageViewer);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/icons/saveW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionShowToolbar = new QAction(ImageViewer);
        actionShowToolbar->setObjectName(QString::fromUtf8("actionShowToolbar"));
        actionShowToolbar->setCheckable(true);
        actionShowToolbar->setChecked(true);
        actionPaintBlack = new QAction(ImageViewer);
        actionPaintBlack->setObjectName(QString::fromUtf8("actionPaintBlack"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/icons/paint-blackW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaintBlack->setIcon(icon7);
        actionUndo = new QAction(ImageViewer);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/icons/undoW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon8);
        actionRedo = new QAction(ImageViewer);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/icons/redoW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon9);
        actionZoomToFit = new QAction(ImageViewer);
        actionZoomToFit->setObjectName(QString::fromUtf8("actionZoomToFit"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/icons/zoom-to-windowW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomToFit->setIcon(icon10);
        actionRule_of_third_Grid = new QAction(ImageViewer);
        actionRule_of_third_Grid->setObjectName(QString::fromUtf8("actionRule_of_third_Grid"));
        actionRule_of_third_Grid->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("icons/rotW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRule_of_third_Grid->setIcon(icon11);
        actiongoldenratio = new QAction(ImageViewer);
        actiongoldenratio->setObjectName(QString::fromUtf8("actiongoldenratio"));
        actiongoldenratio->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("icons/spiralW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiongoldenratio->setIcon(icon12);
        actionCrop = new QAction(ImageViewer);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1/icons/cropW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrop->setIcon(icon13);
        actionFullscreen = new QAction(ImageViewer);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        centralWidget = new QWidget(ImageViewer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(9, 9, 121, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        scrollArea->setFont(font);
        scrollArea->setAutoFillBackground(false);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 119, 79));
        imageLabel = new QLabel(scrollAreaWidgetContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(9, 9, 67, 17));
        imageLabel->setFrameShape(QFrame::Box);
        scrollArea->setWidget(scrollAreaWidgetContents);
        btn_make_line = new QPushButton(centralWidget);
        btn_make_line->setObjectName(QString::fromUtf8("btn_make_line"));
        btn_make_line->setGeometry(QRect(210, 400, 267, 25));
        ImageViewer->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImageViewer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        ImageViewer->setStatusBar(statusBar);
        menuBar = new QMenuBar(ImageViewer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 937, 22));
        menuBar->setCursor(QCursor(Qt::ArrowCursor));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        ImageViewer->setMenuBar(menuBar);
        dockWidget_3 = new QDockWidget(ImageViewer);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        dockWidget_3->setMinimumSize(QSize(65, 670));
        dockWidget_3->setMaximumSize(QSize(65, 670));
        dockWidget_3->setCursor(QCursor(Qt::ArrowCursor));
        dockWidget_3->setAutoFillBackground(false);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        frame_3 = new QFrame(dockWidgetContents_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 51, 351));
        frame_3->setAutoFillBackground(false);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 98, 98);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        mouse = new QPushButton(frame_3);
        mouse->setObjectName(QString::fromUtf8("mouse"));
        mouse->setGeometry(QRect(10, 18, 31, 30));
        mouse->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix1/icons/whitemouse.png"), QSize(), QIcon::Normal, QIcon::Off);
        mouse->setIcon(icon14);
        mouse->setIconSize(QSize(24, 24));
        brush = new QPushButton(frame_3);
        brush->setObjectName(QString::fromUtf8("brush"));
        brush->setGeometry(QRect(10, 62, 31, 30));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix1/icons/whitebrush.png"), QSize(), QIcon::Normal, QIcon::Off);
        brush->setIcon(icon15);
        brush->setIconSize(QSize(24, 24));
        remove = new QPushButton(frame_3);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(10, 106, 31, 30));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/prefix1/icons/tool_eraser.gif"), QSize(), QIcon::Normal, QIcon::Off);
        remove->setIcon(icon16);
        remove->setIconSize(QSize(24, 24));
        line = new QPushButton(frame_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 150, 31, 30));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/prefix1/icons/traitblanc.png"), QSize(), QIcon::Normal, QIcon::Off);
        line->setIcon(icon17);
        line->setIconSize(QSize(24, 24));
        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 194, 31, 30));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/prefix1/icons/parawhite.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon18);
        pushButton_6->setIconSize(QSize(24, 24));
        pushButton_7 = new QPushButton(frame_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 280, 31, 30));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/new/prefix1/icons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon19);
        pushButton_7->setIconSize(QSize(24, 24));
        btn_crop = new QPushButton(frame_3);
        btn_crop->setObjectName(QString::fromUtf8("btn_crop"));
        btn_crop->setGeometry(QRect(10, 240, 31, 31));
        btn_crop->setIcon(icon13);
        dockWidget_3->setWidget(dockWidgetContents_3);
        ImageViewer->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_3);
        dockWidget_Functions = new QDockWidget(ImageViewer);
        dockWidget_Functions->setObjectName(QString::fromUtf8("dockWidget_Functions"));
        dockWidget_Functions->setMinimumSize(QSize(316, 900));
        dockWidget_Functions->setMaximumSize(QSize(316, 900));
        dockWidget_Functions->setCursor(QCursor(Qt::ArrowCursor));
        dockWidget_Functions->setMouseTracking(true);
        dockWidget_Functions->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 98, 98);"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tabWidget = new QTabWidget(dockWidgetContents_5);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMaximumSize(QSize(311, 400));
        tabWidget->setMouseTracking(true);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setMovable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        btn_gray = new QPushButton(tab_3);
        btn_gray->setObjectName(QString::fromUtf8("btn_gray"));
        btn_gray->setGeometry(QRect(0, 90, 89, 25));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 60, 89, 25));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 150, 89, 25));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 210, 89, 25));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 270, 89, 25));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 291, 181));
        color_little_I = new QPushButton(groupBox_4);
        color_little_I->setObjectName(QString::fromUtf8("color_little_I"));
        color_little_I->setGeometry(QRect(110, 30, 71, 22));
        color_V = new QPushButton(groupBox_4);
        color_V->setObjectName(QString::fromUtf8("color_V"));
        color_V->setGeometry(QRect(200, 30, 71, 22));
        color_L = new QPushButton(groupBox_4);
        color_L->setObjectName(QString::fromUtf8("color_L"));
        color_L->setGeometry(QRect(20, 60, 71, 23));
        color_I = new QPushButton(groupBox_4);
        color_I->setObjectName(QString::fromUtf8("color_I"));
        color_I->setGeometry(QRect(110, 60, 71, 22));
        color_T = new QPushButton(groupBox_4);
        color_T->setObjectName(QString::fromUtf8("color_T"));
        color_T->setGeometry(QRect(200, 60, 71, 22));
        color_Y = new QPushButton(groupBox_4);
        color_Y->setObjectName(QString::fromUtf8("color_Y"));
        color_Y->setGeometry(QRect(20, 90, 71, 23));
        color_X = new QPushButton(groupBox_4);
        color_X->setObjectName(QString::fromUtf8("color_X"));
        color_X->setGeometry(QRect(110, 90, 71, 22));
        color_N = new QPushButton(groupBox_4);
        color_N->setObjectName(QString::fromUtf8("color_N"));
        color_N->setGeometry(QRect(200, 90, 71, 22));
        btn_apply = new QPushButton(groupBox_4);
        btn_apply->setObjectName(QString::fromUtf8("btn_apply"));
        btn_apply->setGeometry(QRect(10, 130, 267, 22));
        btn_no_filter = new QPushButton(groupBox_4);
        btn_no_filter->setObjectName(QString::fromUtf8("btn_no_filter"));
        btn_no_filter->setGeometry(QRect(20, 30, 71, 23));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        btn_masse_center = new QPushButton(tab_4);
        btn_masse_center->setObjectName(QString::fromUtf8("btn_masse_center"));
        btn_masse_center->setEnabled(false);
        btn_masse_center->setGeometry(QRect(80, 20, 111, 25));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 180, 301, 111));
        slide_seamCarving_height = new QSlider(groupBox_3);
        slide_seamCarving_height->setObjectName(QString::fromUtf8("slide_seamCarving_height"));
        slide_seamCarving_height->setGeometry(QRect(79, 30, 201, 20));
        slide_seamCarving_height->setMinimum(-99);
        slide_seamCarving_height->setOrientation(Qt::Horizontal);
        slide_seamCarving_width = new QSlider(groupBox_3);
        slide_seamCarving_width->setObjectName(QString::fromUtf8("slide_seamCarving_width"));
        slide_seamCarving_width->setGeometry(QRect(79, 60, 201, 20));
        slide_seamCarving_width->setMinimum(-99);
        slide_seamCarving_width->setOrientation(Qt::Horizontal);
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 67, 17));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 67, 17));
        btn_ok_seam = new QPushButton(groupBox_3);
        btn_ok_seam->setObjectName(QString::fromUtf8("btn_ok_seam"));
        btn_ok_seam->setGeometry(QRect(120, 80, 51, 25));
        box_ROT = new QGroupBox(tab_4);
        box_ROT->setObjectName(QString::fromUtf8("box_ROT"));
        box_ROT->setEnabled(false);
        box_ROT->setGeometry(QRect(10, 50, 151, 131));
        verticalLayout_3 = new QVBoxLayout(box_ROT);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        btn_ROT_hori = new QPushButton(box_ROT);
        btn_ROT_hori->setObjectName(QString::fromUtf8("btn_ROT_hori"));

        verticalLayout_3->addWidget(btn_ROT_hori);

        btn_ROT_verti = new QPushButton(box_ROT);
        btn_ROT_verti->setObjectName(QString::fromUtf8("btn_ROT_verti"));

        verticalLayout_3->addWidget(btn_ROT_verti);

        Goldenpoint = new QPushButton(box_ROT);
        Goldenpoint->setObjectName(QString::fromUtf8("Goldenpoint"));

        verticalLayout_3->addWidget(Goldenpoint);

        box_move = new QGroupBox(tab_4);
        box_move->setObjectName(QString::fromUtf8("box_move"));
        box_move->setEnabled(false);
        box_move->setGeometry(QRect(10, 290, 261, 80));
        btn_move = new QRadioButton(box_move);
        btn_move->setObjectName(QString::fromUtf8("btn_move"));
        btn_move->setGeometry(QRect(10, 40, 121, 22));
        move_apply = new QPushButton(box_move);
        move_apply->setObjectName(QString::fromUtf8("move_apply"));
        move_apply->setGeometry(QRect(130, 40, 89, 25));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(170, 50, 121, 100));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_golden_ratio = new QPushButton(groupBox_5);
        btn_golden_ratio->setObjectName(QString::fromUtf8("btn_golden_ratio"));

        verticalLayout->addWidget(btn_golden_ratio);

        btn_format_square = new QPushButton(groupBox_5);
        btn_format_square->setObjectName(QString::fromUtf8("btn_format_square"));

        verticalLayout->addWidget(btn_format_square);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btn_fixed_ligne = new QRadioButton(groupBox_2);
        btn_fixed_ligne->setObjectName(QString::fromUtf8("btn_fixed_ligne"));

        verticalLayout_2->addWidget(btn_fixed_ligne);

        btn_fixed_point = new QRadioButton(groupBox_2);
        btn_fixed_point->setObjectName(QString::fromUtf8("btn_fixed_point"));

        verticalLayout_2->addWidget(btn_fixed_point);

        btn_vanishing_point = new QRadioButton(groupBox_2);
        btn_vanishing_point->setObjectName(QString::fromUtf8("btn_vanishing_point"));

        verticalLayout_2->addWidget(btn_vanishing_point);


        verticalLayout_5->addWidget(groupBox_2);

        box_vanishing = new QGroupBox(tab_2);
        box_vanishing->setObjectName(QString::fromUtf8("box_vanishing"));
        box_vanishing->setEnabled(false);
        verticalLayout_4 = new QVBoxLayout(box_vanishing);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        btn_horizontal = new QPushButton(box_vanishing);
        btn_horizontal->setObjectName(QString::fromUtf8("btn_horizontal"));

        verticalLayout_4->addWidget(btn_horizontal);

        btn_vertical = new QPushButton(box_vanishing);
        btn_vertical->setObjectName(QString::fromUtf8("btn_vertical"));

        verticalLayout_4->addWidget(btn_vertical);

        btn_parrallel = new QPushButton(box_vanishing);
        btn_parrallel->setObjectName(QString::fromUtf8("btn_parrallel"));

        verticalLayout_4->addWidget(btn_parrallel);

        btn_golden_point = new QPushButton(box_vanishing);
        btn_golden_point->setObjectName(QString::fromUtf8("btn_golden_point"));

        verticalLayout_4->addWidget(btn_golden_point);


        verticalLayout_5->addWidget(box_vanishing);

        btn_perspective = new QPushButton(tab_2);
        btn_perspective->setObjectName(QString::fromUtf8("btn_perspective"));
        btn_perspective->setEnabled(false);

        verticalLayout_5->addWidget(btn_perspective);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        Box_line_creation = new QGroupBox(tab_5);
        Box_line_creation->setObjectName(QString::fromUtf8("Box_line_creation"));
        Box_line_creation->setGeometry(QRect(0, 20, 291, 311));
        verticalLayout_7 = new QVBoxLayout(Box_line_creation);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget_3 = new QWidget(Box_line_creation);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        Line_creation_input = new QComboBox(widget_3);
        Line_creation_input->addItem(QString());
        Line_creation_input->addItem(QString());
        Line_creation_input->addItem(QString());
        Line_creation_input->setObjectName(QString::fromUtf8("Line_creation_input"));

        horizontalLayout_3->addWidget(Line_creation_input);


        verticalLayout_7->addWidget(widget_3);

        widget_5 = new QWidget(Box_line_creation);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_10 = new QLabel(widget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_5->addWidget(label_10);

        Line_creation_output = new QComboBox(widget_5);
        Line_creation_output->addItem(QString());
        Line_creation_output->addItem(QString());
        Line_creation_output->setObjectName(QString::fromUtf8("Line_creation_output"));

        horizontalLayout_5->addWidget(Line_creation_output);


        verticalLayout_7->addWidget(widget_5);

        widget_6 = new QWidget(Box_line_creation);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_6->addWidget(label_12);

        SeamCarving_zone = new QPushButton(widget_6);
        SeamCarving_zone->setObjectName(QString::fromUtf8("SeamCarving_zone"));

        horizontalLayout_6->addWidget(SeamCarving_zone);


        verticalLayout_7->addWidget(widget_6);

        widget_4 = new QWidget(Box_line_creation);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        SeamCarving_remove_zone = new QPushButton(widget_4);
        SeamCarving_remove_zone->setObjectName(QString::fromUtf8("SeamCarving_remove_zone"));

        horizontalLayout_4->addWidget(SeamCarving_remove_zone);


        verticalLayout_7->addWidget(widget_4);

        Line_creation_direction = new QComboBox(Box_line_creation);
        Line_creation_direction->addItem(QString());
        Line_creation_direction->addItem(QString());
        Line_creation_direction->setObjectName(QString::fromUtf8("Line_creation_direction"));

        verticalLayout_7->addWidget(Line_creation_direction);

        btn_Create_line = new QPushButton(Box_line_creation);
        btn_Create_line->setObjectName(QString::fromUtf8("btn_Create_line"));

        verticalLayout_7->addWidget(btn_Create_line);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        btn_display_Seam = new QPushButton(tab_6);
        btn_display_Seam->setObjectName(QString::fromUtf8("btn_display_Seam"));
        btn_display_Seam->setGeometry(QRect(10, 20, 89, 25));
        btn_energy = new QPushButton(tab_6);
        btn_energy->setObjectName(QString::fromUtf8("btn_energy"));
        btn_energy->setGeometry(QRect(20, 50, 89, 25));
        btn_Path = new QPushButton(tab_6);
        btn_Path->setObjectName(QString::fromUtf8("btn_Path"));
        btn_Path->setGeometry(QRect(20, 90, 89, 25));
        btn_moreSeam = new QPushButton(tab_6);
        btn_moreSeam->setObjectName(QString::fromUtf8("btn_moreSeam"));
        btn_moreSeam->setGeometry(QRect(150, 30, 89, 25));
        btn_remove_seam = new QPushButton(tab_6);
        btn_remove_seam->setObjectName(QString::fromUtf8("btn_remove_seam"));
        btn_remove_seam->setGeometry(QRect(140, 60, 89, 25));
        nbseam = new QSpinBox(tab_6);
        nbseam->setObjectName(QString::fromUtf8("nbseam"));
        nbseam->setGeometry(QRect(250, 30, 42, 26));
        btn_map_display = new QPushButton(tab_6);
        btn_map_display->setObjectName(QString::fromUtf8("btn_map_display"));
        btn_map_display->setGeometry(QRect(140, 100, 89, 25));
        btn_CompoMap = new QPushButton(tab_6);
        btn_CompoMap->setObjectName(QString::fromUtf8("btn_CompoMap"));
        btn_CompoMap->setGeometry(QRect(20, 200, 89, 25));
        btn_selectobject = new QPushButton(tab_6);
        btn_selectobject->setObjectName(QString::fromUtf8("btn_selectobject"));
        btn_selectobject->setGeometry(QRect(20, 250, 111, 25));
        btn_score_compo = new QPushButton(tab_6);
        btn_score_compo->setObjectName(QString::fromUtf8("btn_score_compo"));
        btn_score_compo->setGeometry(QRect(30, 290, 89, 25));
        pushButton_2 = new QPushButton(tab_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 220, 89, 25));
        pushButton_3 = new QPushButton(tab_6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 160, 89, 25));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        groupBox_6 = new QGroupBox(tab_7);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 20, 271, 161));
        btn_select_object = new QPushButton(groupBox_6);
        btn_select_object->setObjectName(QString::fromUtf8("btn_select_object"));
        btn_select_object->setGeometry(QRect(20, 40, 89, 25));
        btn_sel_remove = new QPushButton(groupBox_6);
        btn_sel_remove->setObjectName(QString::fromUtf8("btn_sel_remove"));
        btn_sel_remove->setGeometry(QRect(130, 40, 95, 26));
        btn_grabcut = new QPushButton(groupBox_6);
        btn_grabcut->setObjectName(QString::fromUtf8("btn_grabcut"));
        btn_grabcut->setGeometry(QRect(70, 90, 95, 26));
        groupBox_8 = new QGroupBox(tab_7);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 190, 271, 171));
        sel_grid = new QComboBox(groupBox_8);
        sel_grid->addItem(QString());
        sel_grid->setObjectName(QString::fromUtf8("sel_grid"));
        sel_grid->setGeometry(QRect(0, 40, 151, 25));
        btn_score = new QPushButton(groupBox_8);
        btn_score->setObjectName(QString::fromUtf8("btn_score"));
        btn_score->setGeometry(QRect(10, 80, 89, 25));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        btn_input_area = new QPushButton(tab_8);
        btn_input_area->setObjectName(QString::fromUtf8("btn_input_area"));
        btn_input_area->setGeometry(QRect(20, 30, 95, 26));
        comboBox_2 = new QComboBox(tab_8);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(120, 80, 93, 26));
        label_7 = new QLabel(tab_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 80, 74, 18));
        btn_compute = new QPushButton(tab_8);
        btn_compute->setObjectName(QString::fromUtf8("btn_compute"));
        btn_compute->setGeometry(QRect(90, 130, 95, 26));
        tabWidget->addTab(tab_8, QString());

        verticalLayout_6->addWidget(tabWidget);

        groupBox = new QGroupBox(dockWidgetContents_5);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        proprietes_page = new QStackedWidget(groupBox);
        proprietes_page->setObjectName(QString::fromUtf8("proprietes_page"));
        proprietes_page->setGeometry(QRect(12, 32, 274, 331));
        brightnessConstrate = new QWidget();
        brightnessConstrate->setObjectName(QString::fromUtf8("brightnessConstrate"));
        label_5 = new QLabel(brightnessConstrate);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 30, 91, 17));
        label_6 = new QLabel(brightnessConstrate);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 100, 91, 17));
        contrast_slider = new QSlider(brightnessConstrate);
        contrast_slider->setObjectName(QString::fromUtf8("contrast_slider"));
        contrast_slider->setGeometry(QRect(50, 130, 160, 16));
        contrast_slider->setMinimum(0);
        contrast_slider->setMaximum(30);
        contrast_slider->setValue(15);
        contrast_slider->setOrientation(Qt::Horizontal);
        brightness_slider = new QSlider(brightnessConstrate);
        brightness_slider->setObjectName(QString::fromUtf8("brightness_slider"));
        brightness_slider->setGeometry(QRect(50, 60, 160, 16));
        brightness_slider->setMinimum(-50);
        brightness_slider->setMaximum(50);
        brightness_slider->setOrientation(Qt::Horizontal);
        lbl_brightness = new QLabel(brightnessConstrate);
        lbl_brightness->setObjectName(QString::fromUtf8("lbl_brightness"));
        lbl_brightness->setGeometry(QRect(220, 50, 67, 17));
        lbl_contraste = new QLabel(brightnessConstrate);
        lbl_contraste->setObjectName(QString::fromUtf8("lbl_contraste"));
        lbl_contraste->setGeometry(QRect(220, 120, 67, 17));
        horizontalSlider = new QSlider(brightnessConstrate);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 170, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(brightnessConstrate);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 150, 67, 17));
        proprietes_page->addWidget(brightnessConstrate);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lbl_Score = new QLabel(page);
        lbl_Score->setObjectName(QString::fromUtf8("lbl_Score"));
        lbl_Score->setGeometry(QRect(10, 60, 201, 71));
        proprietes_page->addWidget(page);

        verticalLayout_6->addWidget(groupBox);

        groupBox_7 = new QGroupBox(dockWidgetContents_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 100));
        listWidget = new QListWidget(groupBox_7);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 271, 151));
        listWidget->setMouseTracking(true);
        listWidget->setSelectionRectVisible(false);
        label_2 = new QLabel(groupBox_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 30, 81, 17));
        btn_add_layer = new QPushButton(groupBox_7);
        btn_add_layer->setObjectName(QString::fromUtf8("btn_add_layer"));
        btn_add_layer->setGeometry(QRect(260, 30, 31, 25));

        verticalLayout_6->addWidget(groupBox_7);

        dockWidget_Functions->setWidget(dockWidgetContents_5);
        ImageViewer->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_Functions);
        undertoolbar = new QDockWidget(ImageViewer);
        undertoolbar->setObjectName(QString::fromUtf8("undertoolbar"));
        undertoolbar->setMinimumSize(QSize(58, 48));
        undertoolbar->setMaximumSize(QSize(524287, 48));
        undertoolbar->setCursor(QCursor(Qt::ArrowCursor));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        widget = new QWidget(dockWidgetContents_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, -10, 197, 43));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        brushSizeSlider = new QSlider(widget);
        brushSizeSlider->setObjectName(QString::fromUtf8("brushSizeSlider"));
        brushSizeSlider->setMaximum(50);
        brushSizeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(brushSizeSlider);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        widget_2 = new QWidget(dockWidgetContents_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(80, -10, 197, 43));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox = new QComboBox(widget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        undertoolbar->setWidget(dockWidgetContents_2);
        ImageViewer->addDockWidget(static_cast<Qt::DockWidgetArea>(4), undertoolbar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuView->addAction(actionZoomToFit);
        menuView->addSeparator();
        menuView->addAction(actionShowToolbar);
        menuView->addAction(actionFullscreen);
        menuView->addSeparator();
        menuView->addAction(actionRule_of_third_Grid);
        menuView->addAction(actiongoldenratio);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionRotateLeft);
        menuEdit->addAction(actionRotateRight);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCrop);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPaintBlack);

        retranslateUi(ImageViewer);

        tabWidget->setCurrentIndex(7);
        proprietes_page->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer)
    {
        ImageViewer->setWindowTitle(QApplication::translate("ImageViewer", "ImageViewer", nullptr));
        actionOpen->setText(QApplication::translate("ImageViewer", "&Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("ImageViewer", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoomIn->setText(QApplication::translate("ImageViewer", "Zoom &In (25%)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomIn->setShortcut(QApplication::translate("ImageViewer", "Ctrl++", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoomOut->setText(QApplication::translate("ImageViewer", "Zoom Out (25%)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomOut->setShortcut(QApplication::translate("ImageViewer", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        actionRotateLeft->setText(QApplication::translate("ImageViewer", "Rotate Left", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRotateLeft->setShortcut(QApplication::translate("ImageViewer", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionRotateRight->setText(QApplication::translate("ImageViewer", "Rotate Right", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRotateRight->setShortcut(QApplication::translate("ImageViewer", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("ImageViewer", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("ImageViewer", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowToolbar->setText(QApplication::translate("ImageViewer", "Show Toolbar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShowToolbar->setShortcut(QApplication::translate("ImageViewer", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaintBlack->setText(QApplication::translate("ImageViewer", "Paint Black", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaintBlack->setShortcut(QApplication::translate("ImageViewer", "Ctrl+Shift+B", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("ImageViewer", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("ImageViewer", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("ImageViewer", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("ImageViewer", "Ctrl+Shift+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoomToFit->setText(QApplication::translate("ImageViewer", "Zoom To Fit", nullptr));
        actionRule_of_third_Grid->setText(QApplication::translate("ImageViewer", "Rule of third Grid", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRule_of_third_Grid->setShortcut(QApplication::translate("ImageViewer", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actiongoldenratio->setText(QApplication::translate("ImageViewer", "Golden Ratio Grid", nullptr));
#ifndef QT_NO_SHORTCUT
        actiongoldenratio->setShortcut(QApplication::translate("ImageViewer", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        actionCrop->setText(QApplication::translate("ImageViewer", "Crop", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCrop->setShortcut(QApplication::translate("ImageViewer", "Ctrl+K", nullptr));
#endif // QT_NO_SHORTCUT
        actionFullscreen->setText(QApplication::translate("ImageViewer", "Toggle Fullscreen", nullptr));
        imageLabel->setText(QApplication::translate("ImageViewer", "TextLabel", nullptr));
        btn_make_line->setText(QApplication::translate("ImageViewer", "Make line", nullptr));
        menuFile->setTitle(QApplication::translate("ImageViewer", "File", nullptr));
        menuView->setTitle(QApplication::translate("ImageViewer", "View", nullptr));
        menuEdit->setTitle(QApplication::translate("ImageViewer", "Edit", nullptr));
        mouse->setText(QString());
        brush->setText(QString());
        remove->setText(QString());
        line->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        btn_crop->setText(QString());
        btn_gray->setText(QApplication::translate("ImageViewer", "Gray", nullptr));
        pushButton->setText(QApplication::translate("ImageViewer", "Luminosite", nullptr));
        pushButton_4->setText(QApplication::translate("ImageViewer", "testfillin", nullptr));
        pushButton_5->setText(QApplication::translate("ImageViewer", "testFDII", nullptr));
        pushButton_8->setText(QApplication::translate("ImageViewer", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ImageViewer", "General", nullptr));
        groupBox_4->setTitle(QApplication::translate("ImageViewer", "Templates", nullptr));
        color_little_I->setText(QApplication::translate("ImageViewer", "Little I", nullptr));
        color_V->setText(QApplication::translate("ImageViewer", "V", nullptr));
        color_L->setText(QApplication::translate("ImageViewer", "L", nullptr));
        color_I->setText(QApplication::translate("ImageViewer", "I", nullptr));
        color_T->setText(QApplication::translate("ImageViewer", "T", nullptr));
        color_Y->setText(QApplication::translate("ImageViewer", "Y", nullptr));
        color_X->setText(QApplication::translate("ImageViewer", "X", nullptr));
        color_N->setText(QApplication::translate("ImageViewer", "N", nullptr));
        btn_apply->setText(QApplication::translate("ImageViewer", "Apply", nullptr));
        btn_no_filter->setText(QApplication::translate("ImageViewer", "No filter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ImageViewer", "Color", nullptr));
        btn_masse_center->setText(QApplication::translate("ImageViewer", "Masse center", nullptr));
        groupBox_3->setTitle(QApplication::translate("ImageViewer", "SeamCarving", nullptr));
        label->setText(QApplication::translate("ImageViewer", "Height", nullptr));
        label_4->setText(QApplication::translate("ImageViewer", "Width", nullptr));
        btn_ok_seam->setText(QApplication::translate("ImageViewer", "apply", nullptr));
        box_ROT->setTitle(QApplication::translate("ImageViewer", "ROT", nullptr));
        btn_ROT_hori->setText(QApplication::translate("ImageViewer", "ROT Horizontal", nullptr));
        btn_ROT_verti->setText(QApplication::translate("ImageViewer", "ROT vertical", nullptr));
        Goldenpoint->setText(QApplication::translate("ImageViewer", "Golden point", nullptr));
        box_move->setTitle(QApplication::translate("ImageViewer", "Move", nullptr));
        btn_move->setText(QApplication::translate("ImageViewer", "Move", nullptr));
        move_apply->setText(QApplication::translate("ImageViewer", "Apply", nullptr));
        groupBox_5->setTitle(QApplication::translate("ImageViewer", "Format", nullptr));
        btn_golden_ratio->setText(QApplication::translate("ImageViewer", "Golden Ratio", nullptr));
        btn_format_square->setText(QApplication::translate("ImageViewer", "Square", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ImageViewer", "RoT", nullptr));
        groupBox_2->setTitle(QApplication::translate("ImageViewer", "Draw", nullptr));
        btn_fixed_ligne->setText(QApplication::translate("ImageViewer", "Fixed ligne", nullptr));
        btn_fixed_point->setText(QApplication::translate("ImageViewer", "Fixed point", nullptr));
        btn_vanishing_point->setText(QApplication::translate("ImageViewer", "Vanishing Point", nullptr));
        box_vanishing->setTitle(QApplication::translate("ImageViewer", "Modifications", nullptr));
        btn_horizontal->setText(QApplication::translate("ImageViewer", "horizontal", nullptr));
        btn_vertical->setText(QApplication::translate("ImageViewer", "vertical", nullptr));
        btn_parrallel->setText(QApplication::translate("ImageViewer", "parallel", nullptr));
        btn_golden_point->setText(QApplication::translate("ImageViewer", "Golden point", nullptr));
        btn_perspective->setText(QApplication::translate("ImageViewer", "Calcul", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ImageViewer", "Perspective", nullptr));
        Box_line_creation->setTitle(QApplication::translate("ImageViewer", "Line Creation", nullptr));
        label_8->setText(QApplication::translate("ImageViewer", "Input line", nullptr));
        Line_creation_input->setItemText(0, QApplication::translate("ImageViewer", "Hand line", nullptr));
        Line_creation_input->setItemText(1, QApplication::translate("ImageViewer", "straight Line", nullptr));
        Line_creation_input->setItemText(2, QApplication::translate("ImageViewer", "Contour Line", nullptr));

        label_10->setText(QApplication::translate("ImageViewer", "Output line", nullptr));
        Line_creation_output->setItemText(0, QApplication::translate("ImageViewer", "Hand line", nullptr));
        Line_creation_output->setItemText(1, QApplication::translate("ImageViewer", "Straight line", nullptr));

        label_12->setText(QApplication::translate("ImageViewer", "Seam carving zone", nullptr));
        SeamCarving_zone->setText(QApplication::translate("ImageViewer", "Selection", nullptr));
        label_9->setText(QApplication::translate("ImageViewer", "Seam remove zone", nullptr));
        SeamCarving_remove_zone->setText(QApplication::translate("ImageViewer", "Selection", nullptr));
        Line_creation_direction->setItemText(0, QApplication::translate("ImageViewer", "Horizontal", nullptr));
        Line_creation_direction->setItemText(1, QApplication::translate("ImageViewer", "Vertical", nullptr));

        btn_Create_line->setText(QApplication::translate("ImageViewer", "Make Line", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ImageViewer", "Line ", nullptr));
        btn_display_Seam->setText(QApplication::translate("ImageViewer", "Displayseam", nullptr));
        btn_energy->setText(QApplication::translate("ImageViewer", "ENERGY", nullptr));
        btn_Path->setText(QApplication::translate("ImageViewer", "Path", nullptr));
        btn_moreSeam->setText(QApplication::translate("ImageViewer", "More Seam", nullptr));
        btn_remove_seam->setText(QApplication::translate("ImageViewer", "removeSeam", nullptr));
        btn_map_display->setText(QApplication::translate("ImageViewer", "mapsDisplay", nullptr));
        btn_CompoMap->setText(QApplication::translate("ImageViewer", "CompoMap", nullptr));
        btn_selectobject->setText(QApplication::translate("ImageViewer", "Select object", nullptr));
        btn_score_compo->setText(QApplication::translate("ImageViewer", "Score Compo", nullptr));
        pushButton_2->setText(QApplication::translate("ImageViewer", "o", nullptr));
        pushButton_3->setText(QApplication::translate("ImageViewer", "gradient", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ImageViewer", "SeamCarving", nullptr));
        groupBox_6->setTitle(QApplication::translate("ImageViewer", "Grabcut ", nullptr));
        btn_select_object->setText(QApplication::translate("ImageViewer", "sel Object", nullptr));
        btn_sel_remove->setText(QApplication::translate("ImageViewer", "remove", nullptr));
        btn_grabcut->setText(QApplication::translate("ImageViewer", "grabcut", nullptr));
        groupBox_8->setTitle(QApplication::translate("ImageViewer", "GroupBox", nullptr));
        sel_grid->setItemText(0, QApplication::translate("ImageViewer", "ROT", nullptr));

        btn_score->setText(QApplication::translate("ImageViewer", "Score compo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("ImageViewer", "score", nullptr));
        btn_input_area->setText(QApplication::translate("ImageViewer", "Input Area", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("ImageViewer", "hand", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("ImageViewer", "Line", nullptr));

        label_7->setText(QApplication::translate("ImageViewer", "output", nullptr));
        btn_compute->setText(QApplication::translate("ImageViewer", "Compute", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("ImageViewer", "selline", nullptr));
        groupBox->setTitle(QApplication::translate("ImageViewer", "Proprietes", nullptr));
        label_5->setText(QApplication::translate("ImageViewer", "Brightness", nullptr));
        label_6->setText(QApplication::translate("ImageViewer", "Constrate", nullptr));
        lbl_brightness->setText(QApplication::translate("ImageViewer", "0", nullptr));
        lbl_contraste->setText(QApplication::translate("ImageViewer", "0", nullptr));
        label_11->setText(QApplication::translate("ImageViewer", "alpha", nullptr));
        lbl_Score->setText(QApplication::translate("ImageViewer", "Score=", nullptr));
        groupBox_7->setTitle(QApplication::translate("ImageViewer", "Layers", nullptr));
        label_2->setText(QApplication::translate("ImageViewer", "Add Layer", nullptr));
        btn_add_layer->setText(QApplication::translate("ImageViewer", "+", nullptr));
        label_3->setText(QApplication::translate("ImageViewer", "Brush size", nullptr));
        comboBox->setItemText(0, QApplication::translate("ImageViewer", "Ligne", nullptr));
        comboBox->setItemText(1, QApplication::translate("ImageViewer", "Fixed Ligne", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
