/********************************************************************************
** Form generated from reading UI file 'formloadgame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOADGAME_H
#define UI_FORMLOADGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formloadgame
{
public:

    void setupUi(QWidget *formloadgame)
    {
        if (formloadgame->objectName().isEmpty())
            formloadgame->setObjectName(QString::fromUtf8("formloadgame"));
        formloadgame->resize(400, 300);

        retranslateUi(formloadgame);

        QMetaObject::connectSlotsByName(formloadgame);
    } // setupUi

    void retranslateUi(QWidget *formloadgame)
    {
        formloadgame->setWindowTitle(QApplication::translate("formloadgame", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formloadgame: public Ui_formloadgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOADGAME_H
