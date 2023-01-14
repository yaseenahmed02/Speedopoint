#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "account.h"
#include "booking.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void readAcc();
    vector<Account> tempAccounts;
    Booking *book;

private slots:
    void on_registerButton_clicked();


    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
