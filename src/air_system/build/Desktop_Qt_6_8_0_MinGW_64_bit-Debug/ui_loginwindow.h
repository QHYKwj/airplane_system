/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *login_btn;
    QLabel *label;
    QWidget *widget;
    QLineEdit *txt_Username;
    QLineEdit *txt_Pwd;
    QLabel *label_2;
    QPushButton *register_btn;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(1025, 678);
        LoginWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;  /* \350\256\276\347\275\256\350\203\214\346\231\257\344\270\272\347\231\275\350\211\262 */\n"
"    border-radius: 10px;  /* \350\256\276\347\275\256\345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    border: 1px solid #dcdcdc;  /* \350\256\276\347\275\256\350\276\271\346\241\206 */\n"
"    padding: 5px 10px;  /* \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235 */\n"
"    color: black;  /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"    background-color: white;  /* \350\256\276\347\275\256\350\203\214\346\231\257\344\270\272\347\231\275\350\211\262 */\n"
"    padding: 5px;  /* \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235 */\n"
"    color: black;  /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"QDialog{\n"
"background-image:url(:/resources/image/background.jpg)\n"
"}"));
        buttonBox = new QDialogButtonBox(LoginWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(690, 630, 301, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        login_btn = new QPushButton(LoginWindow);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(312, 452, 371, 41));
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;  /* \350\256\276\347\275\256\346\214\211\351\222\256\350\203\214\346\231\257\344\270\272\347\272\257\347\231\275\350\211\262 */\n"
"    border: 2px solid #dcdcdc;  /* \345\217\257\351\200\211\357\274\232\350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206\357\274\214\347\273\231\346\214\211\351\222\256\345\212\240\344\270\212\346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    color: black;  /* \350\256\276\347\275\256\346\214\211\351\222\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\351\273\221\350\211\262 */\n"
"    padding: 5px;  /* \345\217\257\351\200\211\357\274\232\350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f0f0;  /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\346\265\205\347\201\260\350"
                        "\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e0e0e0;  /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        label = new QLabel(LoginWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 30, 431, 81));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 205, 234)"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget = new QWidget(LoginWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(220, 140, 561, 481));
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        txt_Username = new QLineEdit(widget);
        txt_Username->setObjectName("txt_Username");
        txt_Username->setGeometry(QRect(100, 120, 361, 51));
        txt_Pwd = new QLineEdit(widget);
        txt_Pwd->setObjectName("txt_Pwd");
        txt_Pwd->setGeometry(QRect(100, 200, 361, 41));
        txt_Pwd->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 10, 201, 61));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        register_btn = new QPushButton(widget);
        register_btn->setObjectName("register_btn");
        register_btn->setGeometry(QRect(90, 390, 371, 41));
        register_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;  /* \350\256\276\347\275\256\346\214\211\351\222\256\350\203\214\346\231\257\344\270\272\347\272\257\347\231\275\350\211\262 */\n"
"    border: 2px solid #dcdcdc;  /* \345\217\257\351\200\211\357\274\232\350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206\357\274\214\347\273\231\346\214\211\351\222\256\345\212\240\344\270\212\346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    color: black;  /* \350\256\276\347\275\256\346\214\211\351\222\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\351\273\221\350\211\262 */\n"
"    padding: 5px;  /* \345\217\257\351\200\211\357\274\232\350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f0f0;  /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\346\265\205\347\201\260\350"
                        "\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e0e0e0;  /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        widget->raise();
        buttonBox->raise();
        login_btn->raise();
        label->raise();

        retranslateUi(LoginWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LoginWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LoginWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        login_btn->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:700;\">\350\210\252\347\217\255\347\245\250\345\212\241\347\263\273\347\273\237</span></p></body></html>", nullptr));
        txt_Username->setInputMask(QString());
        txt_Username->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215/\346\211\213\346\234\272\345\217\267/\351\202\256\347\256\261", nullptr));
        txt_Pwd->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\350\264\246\345\217\267\345\257\206\347\240\201\347\231\273\345\275\225</span></p></body></html>", nullptr));
        register_btn->setText(QCoreApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
