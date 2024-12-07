#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"
#include "conn_db.h"  // 引入数据库操作头文件
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    // 界面加载时连接数据库
    conn_db();
    setWindowTitle("登录");
    QPixmap background(":/images/background.jpg");
    if (background.isNull()) {
        qDebug() << "Failed to load image!";
    } else {
        qDebug() << "Image loaded successfully!";
    }
    QIcon icon;
    icon.addFile(":/resources/image/SYSULOGO.png"); // 设置窗口图标
    setWindowIcon(icon);
}

LoginWindow::~LoginWindow()
{
    delete ui;
    // 窗口关闭时断开数据库连接
    //close_db();
}

void LoginWindow::openMainWindow() {
    MainWindow mainWin(this); // 创建 MainWindow 的实例
    mainWin.show(); // 显示 MainWindow
    this->close(); // 关闭 LoginWindow
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

    // 查询数据库验证用户名和密码
    QSqlQuery query(db);  // 使用全局数据库对象
    query.prepare("SELECT * FROM customers WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "查询执行失败:" << query.lastError();
        QMessageBox::critical(this, "Database Error", "Query execution failed: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        // 查询成功，登录通过
        QMessageBox::information(this, "Login", "Login successful!");
        accept();  // 关闭窗口并返回
    } else {
        // 查询失败，提示错误
        QMessageBox::warning(this, "Login", "Invalid username or password.");
    }
}

void LoginWindow::on_register_btn_clicked()
{
    // 创建 signinwindow 的实例，并弹出注册窗口
    signinwindow signin(this);

    // 打开注册窗口并阻塞，直到注册窗口关闭
    signin.exec();

    // 只有注册窗口关闭后，才关闭 LoginWindow
    this->close();
}

