#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QtWidgets/QMessageBox>
#include <QSqlQuery>
#include <QMessageBox>
#include"conn_db.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    QPixmap background(":/images/background.jpg");
    if (background.isNull()) {
        qDebug() << "Failed to load image!";
    } else {
        qDebug() << "Image loaded successfully!";
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

// void LoginWindow::on_login_btn_clicked()
// {
//     QString username = ui->txt_Username->text();
//     QString password = ui->txt_Pwd->text();
//     conn_db();

//     QSqlQuery query;
//     query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
//     query.bindValue(":username", username);
//     query.bindValue(":password", password);

//     // 执行查询
//     if (query.exec()) {
//         if (query.next()) {
//             // 用户名和密码匹配
//             QMessageBox::information(this, "Login", "Login successful!");
//             close_db();
//             accept();  // 关闭登录窗口，进入下一界面
//         } else {
//             // 用户名或密码不匹配
//             QMessageBox::warning(this, "Login", "Invalid username or password.");
//         }
//     } else {
//         // 查询执行失败
//         QMessageBox::critical(this, "Query Error", "Query execution failed: " + query.lastError().text());
//     }
// }
