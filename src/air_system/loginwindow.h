#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QDialog>
#include "mainwindow.h" // 包含 MainWindow 的头文件
#include "signinwindow.h"
namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

    void openMainWindow(); // 打开主界面
private slots:
    // void on_LoginWindow_accepted();

    void on_login_btn_clicked();

    void on_register_btn_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
