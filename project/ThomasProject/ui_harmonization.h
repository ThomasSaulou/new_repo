/********************************************************************************
** Form generated from reading UI file 'harmonization.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARMONIZATION_H
#define UI_HARMONIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Harmonization
{
public:

    void setupUi(QDialog *Harmonization)
    {
        if (Harmonization->objectName().isEmpty())
            Harmonization->setObjectName(QString::fromUtf8("Harmonization"));
        Harmonization->resize(400, 300);

        retranslateUi(Harmonization);

        QMetaObject::connectSlotsByName(Harmonization);
    } // setupUi

    void retranslateUi(QDialog *Harmonization)
    {
        Harmonization->setWindowTitle(QApplication::translate("Harmonization", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Harmonization: public Ui_Harmonization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARMONIZATION_H
