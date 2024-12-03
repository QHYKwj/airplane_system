// conn_db.cpp
#include "conn_db.h"
#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QSqlQuery>

// 全局数据库对象（避免连接过早关闭）
QSqlDatabase db;

const QString connectionName = "my_connection";

// 打开数据库连接
void conn_db() {
    // 如果连接已经存在，则不再重新创建连接
    if (QSqlDatabase::contains(connectionName)) {
        return;
    }

    db = QSqlDatabase::addDatabase("QODBC", connectionName);  // 使用连接名
    db.setHostName("localhost");  // 设置数据库主机
    db.setDatabaseName("my_DB");  // 设置数据库名称
    db.setUserName("root");  // 设置用户名
    db.setPassword("Wj4QHYK2");  // 设置密码

    // 打开连接
    if (!db.open()) {
        qDebug() << "无法连接到数据库:" << db.lastError().text();
        QMessageBox::critical(nullptr, "Database Error", "Failed to connect to the database: " + db.lastError().text());
        return;
    }

    qDebug() << "ODBC 数据库连接成功！";
}

// 关闭数据库连接
void close_db() {
    // 如果连接存在且已经打开，则关闭数据库
    if (db.isOpen()) {
        db.close();
        qDebug() << "数据库连接已关闭！";
    } else {
        qDebug() << "数据库连接未打开，无法关闭。";
    }

    // 移除数据库连接
    QSqlDatabase::removeDatabase(connectionName);
    qDebug() << "数据库连接已移除！";
}

// 处理登录操作
void LoginWindow::on_login_btn_clicked() {
    QString username = ui->txt_Username->text();
    QString password = ui->txt_Pwd->text();

    // 确保数据库连接已打开
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open!");
        return;
    }

    // 创建查询对象，使用已经打开的数据库连接
    QSqlQuery query(db);  // 通过 db 指定数据库连接

    query.prepare("SELECT * FROM customers WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "查询执行失败:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Query execution failed: " + query.lastError().text());
        return;
    }

    // 如果查询到数据
    if (query.next()) {
        // 用户名和密码正确
        QMessageBox::information(this, "Login", "Login successful!");
        accept();  // 关闭当前窗口并返回
    } else {
        QMessageBox::warning(this, "Login", "Invalid username or password.");
    }
}
