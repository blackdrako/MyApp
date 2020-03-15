/********************************************************************************
** Form generated from reading UI file 'formstratgame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSTRATGAME_H
#define UI_FORMSTRATGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formstratgame
{
public:

    void setupUi(QWidget *formstratgame)
    {
        if (formstratgame->objectName().isEmpty())
            formstratgame->setObjectName(QString::fromUtf8("formstratgame"));
        formstratgame->resize(400, 300);

        retranslateUi(formstratgame);

        QMetaObject::connectSlotsByName(formstratgame);
    } // setupUi

    void retranslateUi(QWidget *formstratgame)
    {
        formstratgame->setWindowTitle(QApplication::translate("formstratgame", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formstratgame: public Ui_formstratgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSTRATGAME_H
