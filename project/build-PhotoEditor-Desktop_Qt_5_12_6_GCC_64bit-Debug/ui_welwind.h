/********************************************************************************
** Form generated from reading UI file 'welwind.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELWIND_H
#define UI_WELWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelWind
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *fileInput;
    QFrame *line;
    QFrame *line_2;
    QLabel *badLoad;

    void setupUi(QDialog *WelWind)
    {
        if (WelWind->objectName().isEmpty())
            WelWind->setObjectName(QString::fromUtf8("WelWind"));
        WelWind->resize(646, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(8);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WelWind->sizePolicy().hasHeightForWidth());
        WelWind->setSizePolicy(sizePolicy);
        label = new QLabel(WelWind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 110, 521, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(85);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(WelWind);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 260, 231, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(WelWind);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 280, 321, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(WelWind);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 300, 441, 20));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(WelWind);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 340, 361, 20));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(WelWind);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 420, 181, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        fileInput = new QLineEdit(WelWind);
        fileInput->setObjectName(QString::fromUtf8("fileInput"));
        fileInput->setGeometry(QRect(192, 370, 271, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(12);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileInput->sizePolicy().hasHeightForWidth());
        fileInput->setSizePolicy(sizePolicy1);
        fileInput->setAlignment(Qt::AlignCenter);
        line = new QFrame(WelWind);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 80, 651, 20));
        line->setAutoFillBackground(true);
        line->setStyleSheet(QString::fromUtf8("color: rgb(25, 14, 255);"));
        line->setLineWidth(4);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(WelWind);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 210, 651, 24));
        line_2->setAutoFillBackground(true);
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(25, 14, 255);"));
        line_2->setLineWidth(4);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        badLoad = new QLabel(WelWind);
        badLoad->setObjectName(QString::fromUtf8("badLoad"));
        badLoad->setGeometry(QRect(110, 395, 421, 20));
        badLoad->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(fileInput, pushButton);

        retranslateUi(WelWind);

        QMetaObject::connectSlotsByName(WelWind);
    } // setupUi

    void retranslateUi(QDialog *WelWind)
    {
        WelWind->setWindowTitle(QApplication::translate("WelWind", "Dialog", nullptr));
        label->setText(QApplication::translate("WelWind", "Photo Editor!", nullptr));
        label_2->setText(QApplication::translate("WelWind", "Welcome to our Qt Photo Editor App!", nullptr));
        label_3->setText(QApplication::translate("WelWind", "Here, you'll be able to spice up any picture you want. ", nullptr));
        label_4->setText(QApplication::translate("WelWind", "Choose from our variety of filters to make your best photos even better.", nullptr));
        label_5->setText(QApplication::translate("WelWind", "Choose a photo and click the button below to start editing.", nullptr));
        pushButton->setText(QApplication::translate("WelWind", "Continue to Photo Editor", nullptr));
        fileInput->setText(QApplication::translate("WelWind", ":/demo/royce.jpg", nullptr));
        badLoad->setText(QApplication::translate("WelWind", "<html><head/><body><p><span style=\" color:#d10004;\">The file you entered either cannot load or does not exist. Try another!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelWind: public Ui_WelWind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELWIND_H
