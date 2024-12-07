#ifndef CONN_DB_H
#define CONN_DB_H

#include <QSqlError>
#include <QtSql/QSqlDatabase>
#include <QStringList>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include<QSqlDatabase>

// 全局数据库对象（避免连接过早关闭）
extern QSqlDatabase db;

void conn_db();
void close_db();

// // 例如，插入一个客户记录
// QSqlQuery query;
// query.prepare("INSERT INTO Customers (username, password, email, phone) "
//               "VALUES (?, ?, ?, ?)");
// query.addBindValue("john_doe");
// query.addBindValue("password123");
// query.addBindValue("john@example.com");
// query.addBindValue("1234567890");

// if (!query.exec()) {
//     qDebug() << "插入数据失败:" << query.lastError().text();
//     return -1;
// }

// qDebug() << "客户记录插入成功！";
#endif // CONN_DB_H
