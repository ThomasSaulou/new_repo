/********************************************************************************
** Form generated from reading UI file 'painter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER_H
#define UI_PAINTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorbox.h"
#include "paintarea.h"

QT_BEGIN_NAMESPACE

class Ui_Painter
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionRecover;
    QAction *actionRedo;
    QAction *actionAbout;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionAbout_Qt;
    QAction *actionResize;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_12;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    PaintArea *paint_area;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *toolbox;
    QVBoxLayout *settings;
    QVBoxLayout *tools;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *tool_Cursor;
    QPushButton *tool_pencil;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *tool_eraser;
    QPushButton *tool_line;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *tool_rectangle;
    QPushButton *tool_eclipse;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *tool_RoundRect;
    QPushButton *tool_word;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *tool_Bucket;
    QPushButton *tool_Select;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *tool_spray;
    QPushButton *tool_glass;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *width_string;
    QPushButton *setwidth;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *spray_string;
    QPushButton *setSpray;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_8;
    QFrame *color_pen_frame;
    ColorBox *color_pen;
    QFrame *color_back_frame;
    ColorBox *color_back;
    QLabel *label_3;
    QLabel *label_Font;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *set_Font;
    QWidget *tab_4;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Painter)
    {
        if (Painter->objectName().isEmpty())
            Painter->setObjectName(QString::fromUtf8("Painter"));
        Painter->resize(800, 800);
        Painter->setMinimumSize(QSize(800, 640));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Painter->setWindowIcon(icon);
        actionNew = new QAction(Painter);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(Painter);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Painter);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(Painter);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionExit = new QAction(Painter);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionRecover = new QAction(Painter);
        actionRecover->setObjectName(QString::fromUtf8("actionRecover"));
        actionRecover->setEnabled(false);
        actionRedo = new QAction(Painter);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(false);
        actionAbout = new QAction(Painter);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCut = new QAction(Painter);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setEnabled(false);
        actionCopy = new QAction(Painter);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setEnabled(false);
        actionPaste = new QAction(Painter);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setEnabled(false);
        actionAbout_Qt = new QAction(Painter);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionResize = new QAction(Painter);
        actionResize->setObjectName(QString::fromUtf8("actionResize"));
        centralWidget = new QWidget(Painter);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_12 = new QHBoxLayout(centralWidget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 524, 736));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        paint_area = new PaintArea(scrollAreaWidgetContents);
        paint_area->setObjectName(QString::fromUtf8("paint_area"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(paint_area->sizePolicy().hasHeightForWidth());
        paint_area->setSizePolicy(sizePolicy);
        paint_area->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, paint_area);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_12->addWidget(scrollArea);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(250, 16777215));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        frame = new QFrame(tab_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 130, 560));
        frame->setMinimumSize(QSize(125, 0));
        frame->setMaximumSize(QSize(130, 16777215));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolbox = new QVBoxLayout();
        toolbox->setSpacing(6);
        toolbox->setObjectName(QString::fromUtf8("toolbox"));
        settings = new QVBoxLayout();
        settings->setSpacing(6);
        settings->setObjectName(QString::fromUtf8("settings"));
        tools = new QVBoxLayout();
        tools->setSpacing(6);
        tools->setObjectName(QString::fromUtf8("tools"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tool_Cursor = new QPushButton(frame);
        tool_Cursor->setObjectName(QString::fromUtf8("tool_Cursor"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(35);
        sizePolicy1.setHeightForWidth(tool_Cursor->sizePolicy().hasHeightForWidth());
        tool_Cursor->setSizePolicy(sizePolicy1);
        tool_Cursor->setMinimumSize(QSize(50, 40));
        tool_Cursor->setMaximumSize(QSize(50, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/tool_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_Cursor->setIcon(icon1);
        tool_Cursor->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(tool_Cursor);

        tool_pencil = new QPushButton(frame);
        tool_pencil->setObjectName(QString::fromUtf8("tool_pencil"));
        sizePolicy1.setHeightForWidth(tool_pencil->sizePolicy().hasHeightForWidth());
        tool_pencil->setSizePolicy(sizePolicy1);
        tool_pencil->setMinimumSize(QSize(50, 40));
        tool_pencil->setMaximumSize(QSize(50, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/tool_pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_pencil->setIcon(icon2);
        tool_pencil->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(tool_pencil);


        tools->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tool_eraser = new QPushButton(frame);
        tool_eraser->setObjectName(QString::fromUtf8("tool_eraser"));
        sizePolicy1.setHeightForWidth(tool_eraser->sizePolicy().hasHeightForWidth());
        tool_eraser->setSizePolicy(sizePolicy1);
        tool_eraser->setMinimumSize(QSize(50, 40));
        tool_eraser->setMaximumSize(QSize(50, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/tool_eraser.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tool_eraser->setIcon(icon3);
        tool_eraser->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(tool_eraser);

        tool_line = new QPushButton(frame);
        tool_line->setObjectName(QString::fromUtf8("tool_line"));
        sizePolicy1.setHeightForWidth(tool_line->sizePolicy().hasHeightForWidth());
        tool_line->setSizePolicy(sizePolicy1);
        tool_line->setMinimumSize(QSize(50, 40));
        tool_line->setMaximumSize(QSize(50, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/tool_line.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tool_line->setIcon(icon4);
        tool_line->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(tool_line);


        tools->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tool_rectangle = new QPushButton(frame);
        tool_rectangle->setObjectName(QString::fromUtf8("tool_rectangle"));
        sizePolicy1.setHeightForWidth(tool_rectangle->sizePolicy().hasHeightForWidth());
        tool_rectangle->setSizePolicy(sizePolicy1);
        tool_rectangle->setMinimumSize(QSize(50, 35));
        tool_rectangle->setMaximumSize(QSize(50, 40));
        tool_rectangle->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/tool_rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_rectangle->setIcon(icon5);
        tool_rectangle->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(tool_rectangle);

        tool_eclipse = new QPushButton(frame);
        tool_eclipse->setObjectName(QString::fromUtf8("tool_eclipse"));
        sizePolicy1.setHeightForWidth(tool_eclipse->sizePolicy().hasHeightForWidth());
        tool_eclipse->setSizePolicy(sizePolicy1);
        tool_eclipse->setMinimumSize(QSize(50, 40));
        tool_eclipse->setMaximumSize(QSize(50, 40));
        tool_eclipse->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/tool_eclipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_eclipse->setIcon(icon6);
        tool_eclipse->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(tool_eclipse);


        tools->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        tool_RoundRect = new QPushButton(frame);
        tool_RoundRect->setObjectName(QString::fromUtf8("tool_RoundRect"));
        sizePolicy1.setHeightForWidth(tool_RoundRect->sizePolicy().hasHeightForWidth());
        tool_RoundRect->setSizePolicy(sizePolicy1);
        tool_RoundRect->setMinimumSize(QSize(50, 40));
        tool_RoundRect->setMaximumSize(QSize(50, 40));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/tool_rectangle2.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_RoundRect->setIcon(icon7);
        tool_RoundRect->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(tool_RoundRect);

        tool_word = new QPushButton(frame);
        tool_word->setObjectName(QString::fromUtf8("tool_word"));
        tool_word->setMinimumSize(QSize(50, 40));
        tool_word->setMaximumSize(QSize(50, 40));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/tool_word.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tool_word->setIcon(icon8);
        tool_word->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(tool_word);


        tools->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tool_Bucket = new QPushButton(frame);
        tool_Bucket->setObjectName(QString::fromUtf8("tool_Bucket"));
        sizePolicy1.setHeightForWidth(tool_Bucket->sizePolicy().hasHeightForWidth());
        tool_Bucket->setSizePolicy(sizePolicy1);
        tool_Bucket->setMinimumSize(QSize(50, 40));
        tool_Bucket->setMaximumSize(QSize(50, 40));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/tool_bucket.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_Bucket->setIcon(icon9);
        tool_Bucket->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(tool_Bucket);

        tool_Select = new QPushButton(frame);
        tool_Select->setObjectName(QString::fromUtf8("tool_Select"));
        sizePolicy1.setHeightForWidth(tool_Select->sizePolicy().hasHeightForWidth());
        tool_Select->setSizePolicy(sizePolicy1);
        tool_Select->setMinimumSize(QSize(50, 40));
        tool_Select->setMaximumSize(QSize(50, 40));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/tool_select.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tool_Select->setIcon(icon10);
        tool_Select->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(tool_Select);


        tools->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        tool_spray = new QPushButton(frame);
        tool_spray->setObjectName(QString::fromUtf8("tool_spray"));
        sizePolicy1.setHeightForWidth(tool_spray->sizePolicy().hasHeightForWidth());
        tool_spray->setSizePolicy(sizePolicy1);
        tool_spray->setMinimumSize(QSize(50, 40));
        tool_spray->setMaximumSize(QSize(50, 40));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/cursor_spray.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_spray->setIcon(icon11);
        tool_spray->setIconSize(QSize(32, 32));

        horizontalLayout_10->addWidget(tool_spray);

        tool_glass = new QPushButton(frame);
        tool_glass->setObjectName(QString::fromUtf8("tool_glass"));
        tool_glass->setMinimumSize(QSize(50, 40));
        tool_glass->setMaximumSize(QSize(50, 40));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/cursor_glass.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_glass->setIcon(icon12);
        tool_glass->setIconSize(QSize(32, 32));

        horizontalLayout_10->addWidget(tool_glass);


        tools->addLayout(horizontalLayout_10);


        settings->addLayout(tools);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        settings->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        width_string = new QLineEdit(frame);
        width_string->setObjectName(QString::fromUtf8("width_string"));

        horizontalLayout->addWidget(width_string);

        setwidth = new QPushButton(frame);
        setwidth->setObjectName(QString::fromUtf8("setwidth"));
        setwidth->setMinimumSize(QSize(50, 25));
        setwidth->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(setwidth);


        settings->addLayout(horizontalLayout);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        settings->addWidget(label_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        spray_string = new QLineEdit(frame);
        spray_string->setObjectName(QString::fromUtf8("spray_string"));

        horizontalLayout_11->addWidget(spray_string);

        setSpray = new QPushButton(frame);
        setSpray->setObjectName(QString::fromUtf8("setSpray"));
        setSpray->setMinimumSize(QSize(50, 25));
        setSpray->setMaximumSize(QSize(50, 30));

        horizontalLayout_11->addWidget(setSpray);


        settings->addLayout(horizontalLayout_11);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        settings->addWidget(label_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        color_pen_frame = new QFrame(frame);
        color_pen_frame->setObjectName(QString::fromUtf8("color_pen_frame"));
        color_pen_frame->setMinimumSize(QSize(50, 30));
        color_pen_frame->setLayoutDirection(Qt::RightToLeft);
        color_pen_frame->setAutoFillBackground(true);
        color_pen_frame->setFrameShape(QFrame::Box);
        color_pen_frame->setFrameShadow(QFrame::Raised);
        color_pen = new ColorBox(color_pen_frame);
        color_pen->setObjectName(QString::fromUtf8("color_pen"));
        color_pen->setGeometry(QRect(0, 0, 50, 30));
        color_pen->setMinimumSize(QSize(50, 30));
        color_pen->setMaximumSize(QSize(50, 30));
        color_pen->setLayoutDirection(Qt::LeftToRight);
        color_pen->setAutoFillBackground(true);

        horizontalLayout_8->addWidget(color_pen_frame);

        color_back_frame = new QFrame(frame);
        color_back_frame->setObjectName(QString::fromUtf8("color_back_frame"));
        color_back_frame->setMinimumSize(QSize(50, 30));
        color_back_frame->setLayoutDirection(Qt::RightToLeft);
        color_back_frame->setAutoFillBackground(true);
        color_back_frame->setFrameShape(QFrame::Box);
        color_back_frame->setFrameShadow(QFrame::Raised);
        color_back = new ColorBox(color_back_frame);
        color_back->setObjectName(QString::fromUtf8("color_back"));
        color_back->setGeometry(QRect(0, 0, 50, 30));
        color_back->setMinimumSize(QSize(50, 30));
        color_back->setMaximumSize(QSize(50, 30));
        color_back->setLayoutDirection(Qt::LeftToRight);
        color_back->setAutoFillBackground(true);

        horizontalLayout_8->addWidget(color_back_frame);


        settings->addLayout(horizontalLayout_8);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        settings->addWidget(label_3);

        label_Font = new QLabel(frame);
        label_Font->setObjectName(QString::fromUtf8("label_Font"));
        sizePolicy.setHeightForWidth(label_Font->sizePolicy().hasHeightForWidth());
        label_Font->setSizePolicy(sizePolicy);

        settings->addWidget(label_Font);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        set_Font = new QPushButton(frame);
        set_Font->setObjectName(QString::fromUtf8("set_Font"));
        sizePolicy.setHeightForWidth(set_Font->sizePolicy().hasHeightForWidth());
        set_Font->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(set_Font);


        settings->addLayout(horizontalLayout_9);


        toolbox->addLayout(settings);


        verticalLayout->addLayout(toolbox);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());

        horizontalLayout_12->addWidget(tabWidget);

        Painter->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Painter);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Painter->setMenuBar(menuBar);
        statusBar = new QStatusBar(Painter);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Painter->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuEdit->addAction(actionRecover);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionResize);
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionAbout_Qt);

        retranslateUi(Painter);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Painter);
    } // setupUi

    void retranslateUi(QMainWindow *Painter)
    {
        Painter->setWindowTitle(QApplication::translate("Painter", "Painter", nullptr));
        actionNew->setText(QApplication::translate("Painter", "New", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("Painter", "Create a new image.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("Painter", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("Painter", "Open", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("Painter", "Open a image file.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("Painter", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("Painter", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("Painter", "Save the image.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("Painter", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("Painter", "Save As...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_As->setToolTip(QApplication::translate("Painter", "Save the image as a new file.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("Painter", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("Painter", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("Painter", "Exit the application.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("Painter", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionRecover->setText(QApplication::translate("Painter", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRecover->setShortcut(QApplication::translate("Painter", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("Painter", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("Painter", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("Painter", "About", nullptr));
        actionCut->setText(QApplication::translate("Painter", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("Painter", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("Painter", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("Painter", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("Painter", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("Painter", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout_Qt->setText(QApplication::translate("Painter", "About Qt", nullptr));
        actionResize->setText(QApplication::translate("Painter", "Resize", nullptr));
        tool_Cursor->setText(QString());
        tool_pencil->setText(QString());
        tool_eraser->setText(QString());
        tool_line->setText(QString());
        tool_rectangle->setText(QString());
        tool_eclipse->setText(QString());
        tool_RoundRect->setText(QString());
        tool_word->setText(QString());
        tool_Bucket->setText(QString());
        tool_Select->setText(QString());
        tool_spray->setText(QString());
        tool_glass->setText(QString());
        label->setText(QApplication::translate("Painter", "Pen Width", nullptr));
        width_string->setText(QApplication::translate("Painter", "1", nullptr));
        setwidth->setText(QApplication::translate("Painter", "Ok", nullptr));
        label_4->setText(QApplication::translate("Painter", "Spray Width", nullptr));
        spray_string->setText(QApplication::translate("Painter", "10", nullptr));
        setSpray->setText(QApplication::translate("Painter", "Ok", nullptr));
        label_2->setText(QApplication::translate("Painter", "Color", nullptr));
        label_3->setText(QApplication::translate("Painter", "Font", nullptr));
        label_Font->setText(QApplication::translate("Painter", "Font 123456789", nullptr));
        set_Font->setText(QApplication::translate("Painter", "Change Font", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Painter", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Painter", "Tab 2", nullptr));
        menuFile->setTitle(QApplication::translate("Painter", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("Painter", "Edit", nullptr));
        menuAbout->setTitle(QApplication::translate("Painter", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Painter: public Ui_Painter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_H
