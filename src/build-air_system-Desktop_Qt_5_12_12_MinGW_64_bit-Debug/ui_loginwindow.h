/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *txt_Username;
    QSpacerItem *verticalSpacer;
    QLineEdit *txt_Pwd;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *login_btn;
    QPushButton *register_btn;
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(780, 480);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        LoginWindow->setMinimumSize(QSize(780, 470));
        LoginWindow->setMaximumSize(QSize(780, 480));
        LoginWindow->setStyleSheet(QString::fromUtf8("/*QPushButton {\n"
"    background-color: white;  /* \350\256\276\347\275\256\350\203\214\346\231\257\344\270\272\347\231\275\350\211\262 */\n"
"   /* border-radius: 10px;  /* \350\256\276\347\275\256\345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"   /* border: 1px solid #dcdcdc;  /* \350\256\276\347\275\256\350\276\271\346\241\206 */\n"
"   /* padding: 5px 10px;  /* \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235 */\n"
"  /*  color: black;  /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"/*}*/\n"
"/*\n"
"QLabel {\n"
"    background-color: white;  /* \350\256\276\347\275\256\350\203\214\346\231\257\344\270\272\347\231\275\350\211\262 */\n"
"   /* padding: 5px;  /* \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235 */\n"
"    /*color: black;  /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"/*}\n"
"QDialog{\n"
"background-image:url(:/resources/image/background.jpg)\n"
"}*/\n"
"/*background-image: url(:/resources/"
                        "image/background.jpg)*/\n"
"/*QPushButton {\n"
"    background-color: white;  /* \350\256\276\347\275\256\350\203\214\346\231\257\344\270\272\347\231\275\350\211\262 */\n"
"   /* border-radius: 10px;  /* \350\256\276\347\275\256\345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"   /* border: 1px solid #dcdcdc;  /* \350\256\276\347\275\256\350\276\271\346\241\206 */\n"
"   /* padding: 5px 10px;  /* \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235 */\n"
"  /*  color: black;  /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"/*}*/\n"
"/*\n"
"QLabel {\n"
"    background-color: white;  /* \350\256\276\347\275\256\350\203\214\346\231\257\344\270\272\347\231\275\350\211\262 */\n"
"   /* padding: 5px;  /* \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235 */\n"
"    /*color: black;  /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"/*}\n"
"QDialog{\n"
"background-image:url(:/resources/image/background.jpg)\n"
"}*/\n"
"/*backgr"
                        "ound-image: url(:/resources/image/background.jpg)*/\n"
"/*background-color:rgb(38, 37, 34)*/\n"
""));
        frame = new QFrame(LoginWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 781, 481));
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(102, 153, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: 0px solid blue; /* \350\256\276\347\275\256\350\276\271\346\241\206\344\270\27210\345\203\217\347\264\240\345\256\275\347\232\204\350\223\235\350\211\262 */\n"
"    border-radius: 50%; /* \350\256\276\347\275\256\350\276\271\346\241\206\344\270\272\345\234\206\345\275\242 */\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 50, 421, 71));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: white; /* \350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262\357\274\214\344\273\245\344\276\277\345\234\250\346\270\220\345\217\230\350\203\214\346\231\257\344\270\212\345\217\257\350\247\201 */\n"
"background-image: linear-gradient(to right, rgba(0, 0, 255, 255), rgba(255, 255, 255, 255)); /* \350\256\276\347\275\256\350\203\214\346\231\257\344\270\272\350\223\235\347\231\275\346\270\220\345\217\230 */\n"
"-webkit-background-clip: text; /* \344\275\277\350\203\214\346\231\257\344\273\205\345\272\224\347\224\250\344\272\216\346\226\207\346\234\254 */\n"
"background-clip: text; /* \351\235\236Webkit\345\206\205\346\240\270\346\265\217\350\247\210\345\231\250\347\232\204\345\220\216\345\244\207\351\200\211\351\241\271 */"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 150, 371, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txt_Username = new QLineEdit(layoutWidget);
        txt_Username->setObjectName(QString::fromUtf8("txt_Username"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font1.setPointSize(12);
        txt_Username->setFont(font1);
        txt_Username->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    border-bottom: 2px solid back; \n"
"    background-color: transparent; /* \350\203\214\346\231\257\350\211\262\351\200\217\346\230\216 */\n"
"     /* \346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: rgb(37, 84, 127);\n"
"}"));

        verticalLayout->addWidget(txt_Username);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        txt_Pwd = new QLineEdit(layoutWidget);
        txt_Pwd->setObjectName(QString::fromUtf8("txt_Pwd"));
        txt_Pwd->setFont(font1);
        txt_Pwd->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    border-bottom: 2px solid back; \n"
"    background-color: transparent; /* \350\203\214\346\231\257\350\211\262\351\200\217\346\230\216 */\n"
"     /* \346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\346\267\261\350\223\235\350\211\262 */\n"
"	color: rgb(37, 84, 127);\n"
"}"));
        txt_Pwd->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(txt_Pwd);

        txt_Username->raise();
        txt_Pwd->raise();
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(550, 310, 131, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        login_btn = new QPushButton(layoutWidget1);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(login_btn->sizePolicy().hasHeightForWidth());
        login_btn->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font2.setPointSize(11);
        login_btn->setFont(font2);
        login_btn->setCursor(QCursor(Qt::PointingHandCursor));
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 55, 100); /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262 */\n"
"    border: 1px groove gray; /* \350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-radius: 7px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    padding: 2px 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(173, 216, 230, 0.5); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\345\215\212\351\200\217\346\230\216\346\267\241\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(173, 216, 230, 0.5); /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\345\215\212\351\200\217\346\230\216\346\267\241\350\223\235\350\211\262 */\n"
"}"));

        verticalLayout_2->addWidget(login_btn);

        register_btn = new QPushButton(layoutWidget1);
        register_btn->setObjectName(QString::fromUtf8("register_btn"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(register_btn->sizePolicy().hasHeightForWidth());
        register_btn->setSizePolicy(sizePolicy3);
        register_btn->setFont(font2);
        register_btn->setCursor(QCursor(Qt::PointingHandCursor));
        register_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 55, 100); /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262 */\n"
"    border: 1px groove gray; /* \350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-radius: 7px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    padding: 2px 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(173, 216, 230, 0.5); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\345\215\212\351\200\217\346\230\216\346\267\241\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(173, 216, 230, 0.5); /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\345\215\212\351\200\217\346\230\216\346\267\241\350\223\235\350\211\262 */\n"
"}"));

        verticalLayout_2->addWidget(register_btn);

        buttonBox = new QDialogButtonBox(frame_2);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(590, 400, 121, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 55, 100); /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262 */\n"
"    border: 1px groove gray; /* \350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-radius: 7px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    padding: 2px 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f0f0; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\346\265\205\347\201\260\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e0e0e0; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262\357\274\214\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 180, 51, 31));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/image/landing.png);"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 150, 51, 31));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/image/takeoff.png);"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(720, 400, 21, 21));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/resources/image/SYSULOGO.png);"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 110, 101, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font3.setPointSize(15);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \350\203\214\346\231\257\350\211\262\351\200\217\346\230\216 */\n"
"    font-family: \"\345\215\216\346\226\207\344\270\255\345\256\213\"; /* \350\256\276\347\275\256\345\255\227\344\275\223\344\270\272\345\215\216\346\226\207\344\270\255\345\256\213 */\n"
"	color: rgb(32, 89, 127);\n"
"}\n"
"color: rgb(35, 96, 161);"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(690, -10, 91, 81));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/image/fly.png);\n"
"border-image: url(:/resources/image/plane-ticket.png);"));
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(480, 230, 231, 55));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setUnderline(true);
        checkBox->setFont(font4);
        checkBox->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(35, 96, 161);"));
        checkBox->setTristate(false);

        verticalLayout_3->addWidget(checkBox);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 40, 221, 421));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 1px solid black; /* \346\240\271\346\215\256\351\234\200\350\246\201\350\256\276\347\275\256\350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"    border-radius: 50%; /* \350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222\344\270\27250%\357\274\214\345\210\233\345\273\272\345\234\206\345\275\242 */\n"
"    width: 100px; /* \350\256\276\347\275\256\345\233\276\347\211\207\345\256\275\345\272\246\357\274\214\346\240\271\346\215\256\345\256\236\351\231\205\345\233\276\347\211\207\345\260\272\345\257\270\350\260\203\346\225\264 */\n"
"    height: 100px; /* \350\256\276\347\275\256\345\233\276\347\211\207\351\253\230\345\272\246\357\274\214\344\270\216\345\256\275\345\272\246\347\233\270\345\220\214\344\273\245\344\277\235\346\214\201\346\255\243\346\226\271\345\275\242 */\n"
"    background-image: url(:/resources/image/airplane.jpg);\n"
"    background-repeat: no-repeat; /* \351\230\262\346\255\242\345\233\276\347\211\207\351\207"
                        "\215\345\244\215 */\n"
"    background-position: center; /* \345\260\206\345\233\276\347\211\207\345\261\205\344\270\255\346\230\276\347\244\272 */\n"
"    background-size: cover; /* \345\260\206\345\233\276\347\211\207\346\211\251\345\261\225\346\210\226\345\216\213\347\274\251\344\273\245\345\241\253\345\205\205\346\225\264\344\270\252\350\203\214\346\231\257 */\n"
"    opacity: 0.5; /* \350\256\276\347\275\256\345\215\212\351\200\217\346\230\216\346\225\210\346\236\234\357\274\2140.5\350\241\250\347\244\27250%\347\232\204\351\200\217\346\230\216\345\272\246 */\n"
"}"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 250, 271, 171));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/image/zhongda.png);"));
        label_5->raise();
        label->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        buttonBox->raise();
        label_6->raise();
        label_8->raise();
        label_4->raise();
        label_2->raise();
        label_7->raise();
        verticalLayoutWidget->raise();
        label_3->raise();

        horizontalLayout->addWidget(frame_2);


        retranslateUi(LoginWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("LoginWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\344\270\255\345\256\213'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt; font-weight:700; color:#05367f;\">Flight Ticketing System</span></p></body></html>", nullptr));
        txt_Username->setInputMask(QString());
        txt_Username->setPlaceholderText(QApplication::translate("LoginWindow", "Please enter your username/phone number/email address.", nullptr));
        txt_Pwd->setPlaceholderText(QApplication::translate("LoginWindow", "             Please enter your password.", nullptr));
        login_btn->setText(QApplication::translate("LoginWindow", "LOGIN", nullptr));
        register_btn->setText(QApplication::translate("LoginWindow", "REGISTER", nullptr));
        label_6->setText(QString());
        label_8->setText(QString());
        label_4->setText(QString());
        label_2->setText(QApplication::translate("LoginWindow", "LOGIN", nullptr));
        label_7->setText(QString());
        checkBox->setText(QApplication::translate("LoginWindow", "Agree to the Privacy Management Agreement", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
