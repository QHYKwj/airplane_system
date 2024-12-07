/********************************************************************************
** Form generated from reading UI file 'signinwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWINDOW_H
#define UI_SIGNINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signinwindow
{
public:
    QLineEdit *regis_username;
    QLineEdit *regis_pwd;
    QLineEdit *regis_pwd_2;
    QLineEdit *regis_email;
    QPushButton *btn_Register;
    QLineEdit *regis_phonenum;
    QPushButton *btn_Cancel;

    void setupUi(QWidget *signinwindow)
    {
        if (signinwindow->objectName().isEmpty())
            signinwindow->setObjectName("signinwindow");
        signinwindow->resize(532, 445);
        regis_username = new QLineEdit(signinwindow);
        regis_username->setObjectName("regis_username");
        regis_username->setGeometry(QRect(100, 50, 351, 31));
        regis_pwd = new QLineEdit(signinwindow);
        regis_pwd->setObjectName("regis_pwd");
        regis_pwd->setGeometry(QRect(100, 110, 351, 31));
        regis_pwd_2 = new QLineEdit(signinwindow);
        regis_pwd_2->setObjectName("regis_pwd_2");
        regis_pwd_2->setGeometry(QRect(100, 170, 351, 31));
        regis_email = new QLineEdit(signinwindow);
        regis_email->setObjectName("regis_email");
        regis_email->setGeometry(QRect(100, 230, 351, 31));
        btn_Register = new QPushButton(signinwindow);
        btn_Register->setObjectName("btn_Register");
        btn_Register->setGeometry(QRect(100, 350, 351, 31));
        regis_phonenum = new QLineEdit(signinwindow);
        regis_phonenum->setObjectName("regis_phonenum");
        regis_phonenum->setGeometry(QRect(100, 290, 351, 31));
        btn_Cancel = new QPushButton(signinwindow);
        btn_Cancel->setObjectName("btn_Cancel");
        btn_Cancel->setGeometry(QRect(100, 390, 351, 31));

        retranslateUi(signinwindow);

        QMetaObject::connectSlotsByName(signinwindow);
    } // setupUi

    void retranslateUi(QWidget *signinwindow)
    {
        signinwindow->setWindowTitle(QCoreApplication::translate("signinwindow", "Form", nullptr));
        regis_username->setPlaceholderText(QCoreApplication::translate("signinwindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        regis_pwd->setPlaceholderText(QCoreApplication::translate("signinwindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        regis_pwd_2->setPlaceholderText(QCoreApplication::translate("signinwindow", "\350\257\267\345\206\215\346\254\241\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        regis_email->setPlaceholderText(QCoreApplication::translate("signinwindow", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
        btn_Register->setText(QCoreApplication::translate("signinwindow", "\346\263\250\345\206\214", nullptr));
        regis_phonenum->setPlaceholderText(QCoreApplication::translate("signinwindow", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        btn_Cancel->setText(QCoreApplication::translate("signinwindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signinwindow: public Ui_signinwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWINDOW_H
