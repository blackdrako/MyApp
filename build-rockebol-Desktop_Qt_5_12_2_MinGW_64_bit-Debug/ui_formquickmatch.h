/********************************************************************************
** Form generated from reading UI file 'formquickmatch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMQUICKMATCH_H
#define UI_FORMQUICKMATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formquickmatch
{
public:

    void setupUi(QWidget *formquickmatch)
    {
        if (formquickmatch->objectName().isEmpty())
            formquickmatch->setObjectName(QString::fromUtf8("formquickmatch"));
        formquickmatch->resize(800, 800);

        retranslateUi(formquickmatch);

        QMetaObject::connectSlotsByName(formquickmatch);
    } // setupUi

    void retranslateUi(QWidget *formquickmatch)
    {
        formquickmatch->setWindowTitle(QApplication::translate("formquickmatch", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formquickmatch: public Ui_formquickmatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMQUICKMATCH_H
