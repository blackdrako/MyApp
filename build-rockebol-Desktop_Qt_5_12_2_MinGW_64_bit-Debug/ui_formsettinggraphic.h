/********************************************************************************
** Form generated from reading UI file 'formsettinggraphic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSETTINGGRAPHIC_H
#define UI_FORMSETTINGGRAPHIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formsettinggraphic
{
public:

    void setupUi(QWidget *formsettinggraphic)
    {
        if (formsettinggraphic->objectName().isEmpty())
            formsettinggraphic->setObjectName(QString::fromUtf8("formsettinggraphic"));
        formsettinggraphic->resize(400, 300);

        retranslateUi(formsettinggraphic);

        QMetaObject::connectSlotsByName(formsettinggraphic);
    } // setupUi

    void retranslateUi(QWidget *formsettinggraphic)
    {
        formsettinggraphic->setWindowTitle(QApplication::translate("formsettinggraphic", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formsettinggraphic: public Ui_formsettinggraphic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSETTINGGRAPHIC_H
