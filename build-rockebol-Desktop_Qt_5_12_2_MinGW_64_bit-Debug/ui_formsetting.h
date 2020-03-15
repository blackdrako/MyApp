/********************************************************************************
** Form generated from reading UI file 'formsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSETTING_H
#define UI_FORMSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formsetting
{
public:

    void setupUi(QWidget *formsetting)
    {
        if (formsetting->objectName().isEmpty())
            formsetting->setObjectName(QString::fromUtf8("formsetting"));
        formsetting->resize(800, 800);

        retranslateUi(formsetting);

        QMetaObject::connectSlotsByName(formsetting);
    } // setupUi

    void retranslateUi(QWidget *formsetting)
    {
        formsetting->setWindowTitle(QApplication::translate("formsetting", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formsetting: public Ui_formsetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSETTING_H
