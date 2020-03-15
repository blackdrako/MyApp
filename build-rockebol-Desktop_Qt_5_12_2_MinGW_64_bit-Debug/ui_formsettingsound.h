/********************************************************************************
** Form generated from reading UI file 'formsettingsound.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSETTINGSOUND_H
#define UI_FORMSETTINGSOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formsettingsound
{
public:

    void setupUi(QWidget *formsettingsound)
    {
        if (formsettingsound->objectName().isEmpty())
            formsettingsound->setObjectName(QString::fromUtf8("formsettingsound"));
        formsettingsound->resize(400, 300);

        retranslateUi(formsettingsound);

        QMetaObject::connectSlotsByName(formsettingsound);
    } // setupUi

    void retranslateUi(QWidget *formsettingsound)
    {
        formsettingsound->setWindowTitle(QApplication::translate("formsettingsound", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formsettingsound: public Ui_formsettingsound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSETTINGSOUND_H
