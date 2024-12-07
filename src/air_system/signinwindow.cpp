#include "signinwindow.h"
#include "ui_signinwindow.h"
#include "conn_db.h"  // 引入数据库操作头文件
#include <QMessageBox>
#include <QSqlQuery>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

signinwindow::signinwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signinwindow)
{
    ui->setupUi(this);

    // 设置取消按钮的点击事件
    connect(ui->btn_Cancel, &QPushButton::clicked, this, &signinwindow::reject);

    // 设置注册按钮的点击事件
    connect(ui->btn_Register, &QPushButton::clicked, this, &signinwindow::on_btn_Register_click);
}

// 析构函数
signinwindow::~signinwindow() {
    delete ui;
}

// 处理注册按钮点击事件
void signinwindow::on_btn_Register_click(){
    QString username = ui->regis_username->text();
    QString password = ui->regis_pwd->text();
    QString password2 = ui->regis_pwd_2->text();
    QString email = ui->regis_email->text();
    QString phone = ui->regis_phonenum->text();

    // 检查用户名是否为空
    if (username.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "用户名不能为空！");
        return;
    }

    // 检查密码是否为空及密码一致性
    if (password.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "密码不能为空！");
        return;
    }
    if (password != password2) {
        QMessageBox::warning(this, "输入错误", "两次输入的密码不一致！");
        return;
    }

    // 检查邮箱格式
    QRegularExpression emailRegex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "输入错误", "请输入有效的邮箱地址！");
        return;
    }

    // 检查手机号格式
    QRegularExpression phoneRegex(R"(^\d{10,11}$)");  // 10,11 位数字
    if (!phoneRegex.match(phone).hasMatch()) {
        QMessageBox::warning(this, "输入错误", "请输入有效的手机号！");
        return;
    }

    // 检查用户名是否已经存在
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT * FROM customers WHERE username = :username");
    checkQuery.bindValue(":username", username);

    // 执行查询检查用户名是否存在
    if (!checkQuery.exec()) {
        qDebug() << "查询执行失败:" << checkQuery.lastError().text();
        QMessageBox::critical(this, "数据库错误", "查询数据库时发生错误！");
        return;
    }

    // 判断查询结果，避免重复注册
    if (checkQuery.next()) {
        QMessageBox::warning(this, "输入错误", "用户名已存在！");
        return;  // 提前退出，防止后续插入操作
    }

    // 关闭查询，清理资源
    checkQuery.clear();

    // 向数据库插入新用户信息
    QSqlQuery query;
    query.prepare("INSERT INTO customers (username, password, email, phone) "
                  "VALUES (:username, :password, :email, :phone)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);

    if (!query.exec()) {
        QMessageBox::critical(this, "数据库错误", "注册失败: " + query.lastError().text());
        return;
    }

    // 注册成功
    QMessageBox::information(this, "注册成功", "您已成功注册！");
    accept();  // 关闭注册窗口并返回
}

