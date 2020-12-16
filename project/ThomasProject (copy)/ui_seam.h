/********************************************************************************
** Form generated from reading UI file 'seam.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEAM_H
#define UI_SEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_seam
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_image;

    void setupUi(QDialog *seam)
    {
        if (seam->objectName().isEmpty())
            seam->setObjectName(QString::fromUtf8("seam"));
        seam->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(seam);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_image = new QLabel(seam);
        label_image->setObjectName(QString::fromUtf8("label_image"));

        verticalLayout->addWidget(label_image);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(seam);

        QMetaObject::connectSlotsByName(seam);
    } // setupUi

    void retranslateUi(QDialog *seam)
    {
        seam->setWindowTitle(QApplication::translate("seam", "Dialog", nullptr));
        label_image->setText(QApplication::translate("seam", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seam: public Ui_seam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEAM_H
