#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QTimer"
#include "booking.h"


#include <QFile>
#include <QTextStream>
#include <QList>
#include <QStandardItem>
#include <QString>
#include <sstream>
#include <vector>


#include "operation.h"

#include <iostream>
using namespace std;




Operation speedoPoint;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setting the text in the line edit boxes for registration
    ui->usernameBox->setPlaceholderText("Enter username");
    ui->passBox->setPlaceholderText("Enter password");
    ui->emailBox->setPlaceholderText("Enter email");

    ui->uLogin->setPlaceholderText("Enter username");
    ui->pLogin->setPlaceholderText("Enter password");
    ui->phoneBox->setPlaceholderText("Enter phone");




}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_registerButton_clicked()
{
    string username, password, email;
    QString u, p, e;

    //reading input in a QString
    u = ui->usernameBox->text();
    p = ui->passBox->text();
    e = ui->emailBox->text();


    //converting from QString to std::string

    username = u.toStdString();
    password = p.toStdString();
    email = e.toStdString();

    Account a(username, password, email);
    speedoPoint.registerAcc(a);



//    QMessageBox::information(this, "Title", "Registration Successful!");

//    this->hide(); //hiding the main window (login/registration ui)

//    book = new Booking(this);
//    book->show();

}

void MainWindow::on_loginButton_clicked()
{
    string username, password;
    QString u, p;

    u = ui->uLogin->text();
    p = ui->pLogin->text();

    username = u.toStdString();
    password = p.toStdString();





    Account temp(username,password, "will_smith@gmail.com");


    //if(speedoPoint.checkLogin(temp)) //need to see why this never returns true
        //QMessageBox::information(this, "Title", "Login Successful!");
    //open new window
    //else
        //QMessageBox::information(this, "Title", "Login Unsuccessful!");

//    QMessageBox::information(this, "Title", "Login Successful!");

//    this->hide(); //hiding the main window (login/registration ui)

//    book = new Booking(this);
//    book->show();



}

void MainWindow::readAcc() {


    QFile fin("/Users/yaseenahmed/Workspace/AUC/Academics/Spring 2021/CSCE 110:1101/QT Project/SpeedoPoint/accounts.txt");

    if (!fin.open(QFile::ReadOnly)) {
        QMessageBox::information(0, "info", fin.errorString());
        exit(1);
    }

    else {


        QTextStream in(&fin); //file into a stream

        while (!fin.atEnd()) {

            QString l = in.readLine(); //reading the whole line in a QString

            string line;
            line = l.toStdString(); //converting to std::string


            vector<string> v; //vector of strings
            stringstream ss(line);



            while (ss.good()) { //to split the line based on , symbol and store the strings in a vector
                string substr;
                getline(ss, substr, ',');

                v.push_back(substr);
            }

            string u,p,e;


            v[0] = u;
            v[1] = p;
            v[2] = e;
            Account a(u,p,e);


            speedoPoint.initAccounts(a);
        }
    }


    fin.close();




}




