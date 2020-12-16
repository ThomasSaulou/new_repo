/********************************************************************************
** Form generated from reading UI file 'mainwind.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIND_H
#define UI_MAINWIND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwind
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionCrop;
    QAction *actionCopy;
    QAction *actionRotate_Right;
    QAction *actionFlip;
    QAction *actionFilters;
    QAction *actionFilters_2;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCrop_2;
    QAction *actionRotateRight;
    QAction *actionRotateLeft;
    QAction *actionFlip_2;
    QAction *actionNew_2;
    QAction *actionFilters_3;
    QAction *actionTools;
    QAction *actionAbout_Photo_Editor;
    QAction *actionRotate_180;
    QAction *actionRevert;
    QWidget *centralWidget;
    QWidget *sepiaWidget;
    QHBoxLayout *sepia_2;
    QLabel *depthLabel;
    QSlider *depthSlider;
    QLabel *intensityLabel;
    QSlider *intensitySlider;
    QSpacerItem *horizontalSpacer;
    QPushButton *sepiaSave;
    QWidget *brightnessWidget;
    QHBoxLayout *brightLayout;
    QLabel *brightLabel;
    QSlider *brightSlider;
    QPushButton *brightSave;
    QLabel *picture;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *StickerWidget;
    QWidget *StickerWidgetContents;
    QToolButton *flip;
    QToolButton *rotate180;
    QToolButton *undo;
    QToolButton *rotate_left;
    QToolButton *rotate_right;
    QToolButton *revert;
    QDockWidget *FilterWidget;
    QWidget *FilterWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *blackAndWhite;
    QPushButton *grayscale;
    QPushButton *aqua;
    QPushButton *rouge;
    QPushButton *veridian;
    QPushButton *negative;
    QPushButton *sepia;
    QPushButton *brightness;

    void setupUi(QMainWindow *mainwind)
    {
        if (mainwind->objectName().isEmpty())
            mainwind->setObjectName(QString::fromUtf8("mainwind"));
        mainwind->resize(661, 538);
        mainwind->setMinimumSize(QSize(562, 433));
        mainwind->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230)"));
        actionNew = new QAction(mainwind);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images copy/Actions-folder-new-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(mainwind);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images copy/Open-file-icon copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(mainwind);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images copy/save-icon-28.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionQuit = new QAction(mainwind);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images copy/quit-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        actionCrop = new QAction(mainwind);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/images copy/stock_cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrop->setIcon(icon4);
        actionCopy = new QAction(mainwind);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/images copy/qemytmkyvcboqlglolrs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionRotate_Right = new QAction(mainwind);
        actionRotate_Right->setObjectName(QString::fromUtf8("actionRotate_Right"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/images copy/arrow13-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate_Right->setIcon(icon6);
        actionFlip = new QAction(mainwind);
        actionFlip->setObjectName(QString::fromUtf8("actionFlip"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/images copy/flip-horizontally-design-graphic-tool-3bd1aae13ed68d2f-512x512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFlip->setIcon(icon7);
        actionFilters = new QAction(mainwind);
        actionFilters->setObjectName(QString::fromUtf8("actionFilters"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/images copy/291378-language-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilters->setIcon(icon8);
        actionFilters_2 = new QAction(mainwind);
        actionFilters_2->setObjectName(QString::fromUtf8("actionFilters_2"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/images copy/Filter-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilters_2->setIcon(icon9);
        actionPaste = new QAction(mainwind);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/images copy/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon10);
        actionUndo = new QAction(mainwind);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/images copy/button_undo-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon11);
        actionRedo = new QAction(mainwind);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/images copy/button_redo-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon12);
        actionCrop_2 = new QAction(mainwind);
        actionCrop_2->setObjectName(QString::fromUtf8("actionCrop_2"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1/images copy/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrop_2->setIcon(icon13);
        actionRotateRight = new QAction(mainwind);
        actionRotateRight->setObjectName(QString::fromUtf8("actionRotateRight"));
        actionRotateRight->setIcon(icon6);
        actionRotateLeft = new QAction(mainwind);
        actionRotateLeft->setObjectName(QString::fromUtf8("actionRotateLeft"));
        actionRotateLeft->setEnabled(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix1/images copy/arrow13-512-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateLeft->setIcon(icon14);
        actionFlip_2 = new QAction(mainwind);
        actionFlip_2->setObjectName(QString::fromUtf8("actionFlip_2"));
        actionFlip_2->setIcon(icon7);
        actionNew_2 = new QAction(mainwind);
        actionNew_2->setObjectName(QString::fromUtf8("actionNew_2"));
        actionNew_2->setIcon(icon);
        actionFilters_3 = new QAction(mainwind);
        actionFilters_3->setObjectName(QString::fromUtf8("actionFilters_3"));
        actionFilters_3->setIcon(icon9);
        actionTools = new QAction(mainwind);
        actionTools->setObjectName(QString::fromUtf8("actionTools"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix1/images copy/wrench-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTools->setIcon(icon15);
        actionAbout_Photo_Editor = new QAction(mainwind);
        actionAbout_Photo_Editor->setObjectName(QString::fromUtf8("actionAbout_Photo_Editor"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/prefix1/images copy/info-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Photo_Editor->setIcon(icon16);
        actionRotate_180 = new QAction(mainwind);
        actionRotate_180->setObjectName(QString::fromUtf8("actionRotate_180"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/prefix1/images copy/rotation-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate_180->setIcon(icon17);
        actionRevert = new QAction(mainwind);
        actionRevert->setObjectName(QString::fromUtf8("actionRevert"));
        centralWidget = new QWidget(mainwind);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sepiaWidget = new QWidget(centralWidget);
        sepiaWidget->setObjectName(QString::fromUtf8("sepiaWidget"));
        sepiaWidget->setGeometry(QRect(10, 390, 421, 41));
        sepia_2 = new QHBoxLayout(sepiaWidget);
        sepia_2->setSpacing(6);
        sepia_2->setContentsMargins(11, 11, 11, 11);
        sepia_2->setObjectName(QString::fromUtf8("sepia_2"));
        depthLabel = new QLabel(sepiaWidget);
        depthLabel->setObjectName(QString::fromUtf8("depthLabel"));

        sepia_2->addWidget(depthLabel);

        depthSlider = new QSlider(sepiaWidget);
        depthSlider->setObjectName(QString::fromUtf8("depthSlider"));
        depthSlider->setMinimum(0);
        depthSlider->setMaximum(50);
        depthSlider->setValue(25);
        depthSlider->setOrientation(Qt::Horizontal);

        sepia_2->addWidget(depthSlider);

        intensityLabel = new QLabel(sepiaWidget);
        intensityLabel->setObjectName(QString::fromUtf8("intensityLabel"));

        sepia_2->addWidget(intensityLabel);

        intensitySlider = new QSlider(sepiaWidget);
        intensitySlider->setObjectName(QString::fromUtf8("intensitySlider"));
        intensitySlider->setMinimum(0);
        intensitySlider->setMaximum(50);
        intensitySlider->setValue(25);
        intensitySlider->setOrientation(Qt::Horizontal);

        sepia_2->addWidget(intensitySlider);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        sepia_2->addItem(horizontalSpacer);

        sepiaSave = new QPushButton(sepiaWidget);
        sepiaSave->setObjectName(QString::fromUtf8("sepiaSave"));
        sepiaSave->setStyleSheet(QString::fromUtf8("white"));

        sepia_2->addWidget(sepiaSave);

        brightnessWidget = new QWidget(centralWidget);
        brightnessWidget->setObjectName(QString::fromUtf8("brightnessWidget"));
        brightnessWidget->setGeometry(QRect(30, 370, 391, 51));
        brightLayout = new QHBoxLayout(brightnessWidget);
        brightLayout->setSpacing(6);
        brightLayout->setContentsMargins(11, 11, 11, 11);
        brightLayout->setObjectName(QString::fromUtf8("brightLayout"));
        brightLabel = new QLabel(brightnessWidget);
        brightLabel->setObjectName(QString::fromUtf8("brightLabel"));

        brightLayout->addWidget(brightLabel);

        brightSlider = new QSlider(brightnessWidget);
        brightSlider->setObjectName(QString::fromUtf8("brightSlider"));
        brightSlider->setMinimum(-50);
        brightSlider->setMaximum(50);
        brightSlider->setSliderPosition(0);
        brightSlider->setTracking(false);
        brightSlider->setOrientation(Qt::Horizontal);
        brightSlider->setTickPosition(QSlider::NoTicks);
        brightSlider->setTickInterval(0);

        brightLayout->addWidget(brightSlider);

        brightSave = new QPushButton(brightnessWidget);
        brightSave->setObjectName(QString::fromUtf8("brightSave"));
        brightSave->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        brightLayout->addWidget(brightSave);

        picture = new QLabel(centralWidget);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(9, 15, 431, 341));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy);
        picture->setAlignment(Qt::AlignCenter);
        mainwind->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwind);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 661, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        mainwind->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwind);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230)"));
        mainwind->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwind);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mainwind->setStatusBar(statusBar);
        StickerWidget = new QDockWidget(mainwind);
        StickerWidget->setObjectName(QString::fromUtf8("StickerWidget"));
        StickerWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210)"));
        StickerWidgetContents = new QWidget();
        StickerWidgetContents->setObjectName(QString::fromUtf8("StickerWidgetContents"));
        flip = new QToolButton(StickerWidgetContents);
        flip->setObjectName(QString::fromUtf8("flip"));
        flip->setGeometry(QRect(10, 20, 42, 42));
        flip->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        flip->setIcon(icon7);
        flip->setIconSize(QSize(32, 32));
        rotate180 = new QToolButton(StickerWidgetContents);
        rotate180->setObjectName(QString::fromUtf8("rotate180"));
        rotate180->setGeometry(QRect(10, 80, 42, 42));
        rotate180->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        rotate180->setIcon(icon17);
        rotate180->setIconSize(QSize(32, 32));
        undo = new QToolButton(StickerWidgetContents);
        undo->setObjectName(QString::fromUtf8("undo"));
        undo->setGeometry(QRect(10, 260, 42, 42));
        undo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        undo->setIcon(icon11);
        undo->setIconSize(QSize(32, 32));
        rotate_left = new QToolButton(StickerWidgetContents);
        rotate_left->setObjectName(QString::fromUtf8("rotate_left"));
        rotate_left->setGeometry(QRect(10, 140, 42, 42));
        rotate_left->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        rotate_left->setIcon(icon14);
        rotate_left->setIconSize(QSize(32, 32));
        rotate_right = new QToolButton(StickerWidgetContents);
        rotate_right->setObjectName(QString::fromUtf8("rotate_right"));
        rotate_right->setGeometry(QRect(10, 200, 42, 42));
        rotate_right->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        rotate_right->setIcon(icon6);
        rotate_right->setIconSize(QSize(32, 32));
        revert = new QToolButton(StickerWidgetContents);
        revert->setObjectName(QString::fromUtf8("revert"));
        revert->setGeometry(QRect(10, 320, 41, 41));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/prefix1/images copy/download copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        revert->setIcon(icon18);
        revert->setIconSize(QSize(32, 32));
        StickerWidget->setWidget(StickerWidgetContents);
        mainwind->addDockWidget(static_cast<Qt::DockWidgetArea>(1), StickerWidget);
        FilterWidget = new QDockWidget(mainwind);
        FilterWidget->setObjectName(QString::fromUtf8("FilterWidget"));
        FilterWidget->setMinimumSize(QSize(144, 340));
        FilterWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210)"));
        FilterWidgetContents = new QWidget();
        FilterWidgetContents->setObjectName(QString::fromUtf8("FilterWidgetContents"));
        verticalLayoutWidget = new QWidget(FilterWidgetContents);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 0, 140, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        blackAndWhite = new QPushButton(verticalLayoutWidget);
        blackAndWhite->setObjectName(QString::fromUtf8("blackAndWhite"));
        blackAndWhite->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(blackAndWhite);

        grayscale = new QPushButton(verticalLayoutWidget);
        grayscale->setObjectName(QString::fromUtf8("grayscale"));
        grayscale->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(grayscale);

        aqua = new QPushButton(verticalLayoutWidget);
        aqua->setObjectName(QString::fromUtf8("aqua"));
        aqua->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(aqua);

        rouge = new QPushButton(verticalLayoutWidget);
        rouge->setObjectName(QString::fromUtf8("rouge"));
        rouge->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(rouge);

        veridian = new QPushButton(verticalLayoutWidget);
        veridian->setObjectName(QString::fromUtf8("veridian"));
        veridian->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(veridian);

        negative = new QPushButton(verticalLayoutWidget);
        negative->setObjectName(QString::fromUtf8("negative"));
        negative->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(negative);

        sepia = new QPushButton(verticalLayoutWidget);
        sepia->setObjectName(QString::fromUtf8("sepia"));
        sepia->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(sepia);

        brightness = new QPushButton(verticalLayoutWidget);
        brightness->setObjectName(QString::fromUtf8("brightness"));
        brightness->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(brightness);

        FilterWidget->setWidget(FilterWidgetContents);
        mainwind->addDockWidget(static_cast<Qt::DockWidgetArea>(2), FilterWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRevert);
        menuTools->addAction(actionRotateRight);
        menuTools->addAction(actionRotateLeft);
        menuTools->addAction(actionRotate_180);
        menuTools->addAction(actionFlip_2);
        menuTools->addAction(actionFilters_3);
        menuTools->addSeparator();
        menuTools->addAction(actionTools);
        menuAbout->addAction(actionAbout_Photo_Editor);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionFilters_3);
        mainToolBar->addAction(actionTools);
        mainToolBar->addAction(actionAbout_Photo_Editor);
        mainToolBar->addAction(actionQuit);

        retranslateUi(mainwind);

        QMetaObject::connectSlotsByName(mainwind);
    } // setupUi

    void retranslateUi(QMainWindow *mainwind)
    {
        mainwind->setWindowTitle(QApplication::translate("mainwind", "mainwind", nullptr));
        actionNew->setText(QApplication::translate("mainwind", "New", nullptr));
        actionOpen->setText(QApplication::translate("mainwind", "Open", nullptr));
        actionSave->setText(QApplication::translate("mainwind", "Save", nullptr));
        actionQuit->setText(QApplication::translate("mainwind", "Quit", nullptr));
        actionCrop->setText(QApplication::translate("mainwind", "Cut", nullptr));
        actionCopy->setText(QApplication::translate("mainwind", "Copy", nullptr));
        actionRotate_Right->setText(QApplication::translate("mainwind", "Rotate Right", nullptr));
        actionFlip->setText(QApplication::translate("mainwind", "Flip", nullptr));
        actionFilters->setText(QApplication::translate("mainwind", "Add Text", nullptr));
        actionFilters_2->setText(QApplication::translate("mainwind", "Filters", nullptr));
        actionPaste->setText(QApplication::translate("mainwind", "Paste", nullptr));
        actionUndo->setText(QApplication::translate("mainwind", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("mainwind", "Redo", nullptr));
        actionCrop_2->setText(QApplication::translate("mainwind", "Crop", nullptr));
        actionRotateRight->setText(QApplication::translate("mainwind", "Rotate Right", nullptr));
        actionRotateLeft->setText(QApplication::translate("mainwind", "Rotate Left", nullptr));
        actionFlip_2->setText(QApplication::translate("mainwind", "Flip", nullptr));
        actionNew_2->setText(QApplication::translate("mainwind", "Add Text", nullptr));
        actionFilters_3->setText(QApplication::translate("mainwind", "Filters", nullptr));
        actionTools->setText(QApplication::translate("mainwind", "Tools", nullptr));
        actionAbout_Photo_Editor->setText(QApplication::translate("mainwind", "About Photo Editor", nullptr));
        actionRotate_180->setText(QApplication::translate("mainwind", "Rotate 180", nullptr));
        actionRevert->setText(QApplication::translate("mainwind", "Revert", nullptr));
        depthLabel->setText(QApplication::translate("mainwind", "Depth", nullptr));
        intensityLabel->setText(QApplication::translate("mainwind", "Intensity", nullptr));
        sepiaSave->setText(QApplication::translate("mainwind", "Commit", nullptr));
        brightLabel->setText(QApplication::translate("mainwind", "Brightness", nullptr));
        brightSave->setText(QApplication::translate("mainwind", "Commit", nullptr));
        picture->setText(QApplication::translate("mainwind", "TextLabel", nullptr));
        menuFile->setTitle(QApplication::translate("mainwind", "File ", nullptr));
        menuEdit->setTitle(QApplication::translate("mainwind", "Edit", nullptr));
        menuTools->setTitle(QApplication::translate("mainwind", "Tools", nullptr));
        menuAbout->setTitle(QApplication::translate("mainwind", "About", nullptr));
        flip->setText(QApplication::translate("mainwind", "...", nullptr));
        rotate180->setText(QApplication::translate("mainwind", "...", nullptr));
        undo->setText(QApplication::translate("mainwind", "...", nullptr));
        rotate_left->setText(QApplication::translate("mainwind", "...", nullptr));
        rotate_right->setText(QApplication::translate("mainwind", "...", nullptr));
        revert->setText(QApplication::translate("mainwind", "...", nullptr));
        blackAndWhite->setText(QApplication::translate("mainwind", "Black and White", nullptr));
        grayscale->setText(QApplication::translate("mainwind", "Grayscale", nullptr));
        aqua->setText(QApplication::translate("mainwind", "Aqua", nullptr));
        rouge->setText(QApplication::translate("mainwind", "Rouge", nullptr));
        veridian->setText(QApplication::translate("mainwind", "Veridian", nullptr));
        negative->setText(QApplication::translate("mainwind", "Negative", nullptr));
        sepia->setText(QApplication::translate("mainwind", "Sepia", nullptr));
        brightness->setText(QApplication::translate("mainwind", "Brightness", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwind: public Ui_mainwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIND_H
