// conn_db.cpp
#include "conn_db.h"
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
    db = QSqlDatabase::addDatabase("QODBC");  // 添加 MySQL 数据库
    db.setHostName("127.0.0.1");  // 数据库主机名
    db.setDatabaseName("my_DB");  // 数据库名
    db.setUserName("root");  // 数据库用户名
    //db.setPassword("greatzeal2020");  // 数据库密码

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

