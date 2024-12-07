/********************************************************************************
** Form generated from reading UI file 'signinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWINDOW_H
#define UI_SIGNINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signinwindow
{
public:

    void setupUi(QWidget *signinwindow)
    {
        if (signinwindow->objectName().isEmpty())
            signinwindow->setObjectName(QString::fromUtf8("signinwindow"));
        signinwindow->resize(400, 300);

        retranslateUi(signinwindow);

        QMetaObject::connectSlotsByName(signinwindow);
    } // setupUi

    void retranslateUi(QWidget *signinwindow)
    {
        signinwindow->setWindowTitle(QApplication::translate("signinwindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signinwindow: public Ui_signinwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWINDOW_H
