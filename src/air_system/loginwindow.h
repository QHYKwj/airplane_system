#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QDialog>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    // void on_LoginWindow_accepted();

    void on_login_btn_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
