/********************************************************************************
** Form generated from reading UI file 'formsettinggameplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSETTINGGAMEPLAY_H
#define UI_FORMSETTINGGAMEPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formsettinggameplay
{
public:

    void setupUi(QWidget *formsettinggameplay)
    {
        if (formsettinggameplay->objectName().isEmpty())
            formsettinggameplay->setObjectName(QString::fromUtf8("formsettinggameplay"));
        formsettinggameplay->resize(400, 300);

        retranslateUi(formsettinggameplay);

        QMetaObject::connectSlotsByName(formsettinggameplay);
    } // setupUi

    void retranslateUi(QWidget *formsettinggameplay)
    {
        formsettinggameplay->setWindowTitle(QApplication::translate("formsettinggameplay", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formsettinggameplay: public Ui_formsettinggameplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSETTINGGAMEPLAY_H
