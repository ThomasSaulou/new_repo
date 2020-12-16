/********************************************************************************
** Form generated from reading UI file 'savewind.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEWIND_H
#define UI_SAVEWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_savewind
{
public:
    QLabel *picture;
    QPushButton *back;
    QPushButton *save;
    QLineEdit *saveName;
    QLabel *saveLabel;

    void setupUi(QDialog *savewind)
    {
        if (savewind->objectName().isEmpty())
            savewind->setObjectName(QString::fromUtf8("savewind"));
        savewind->resize(553, 447);
        picture = new QLabel(savewind);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(29, 25, 491, 341));
        picture->setAlignment(Qt::AlignCenter);
        back = new QPushButton(savewind);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(40, 390, 113, 32));
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        save = new QPushButton(savewind);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(400, 410, 113, 32));
        save->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        saveName = new QLineEdit(savewind);
        saveName->setObjectName(QString::fromUtf8("saveName"));
        saveName->setGeometry(QRect(330, 380, 181, 21));
        saveLabel = new QLabel(savewind);
        saveLabel->setObjectName(QString::fromUtf8("saveLabel"));
        saveLabel->setGeometry(QRect(220, 380, 111, 20));

        retranslateUi(savewind);

        QMetaObject::connectSlotsByName(savewind);
    } // setupUi

    void retranslateUi(QDialog *savewind)
    {
        savewind->setWindowTitle(QApplication::translate("savewind", "Dialog", nullptr));
        picture->setText(QApplication::translate("savewind", "TextLabel", nullptr));
        back->setText(QApplication::translate("savewind", "Keep Editing", nullptr));
        save->setText(QApplication::translate("savewind", "Save and Exit", nullptr));
        saveName->setText(QString());
        saveLabel->setText(QApplication::translate("savewind", "Name to save as:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class savewind: public Ui_savewind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEWIND_H
