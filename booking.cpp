#include "booking.h"
#include "ui_booking.h"
#include <QMessageBox>

Booking::Booking(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Booking)
{

    ui->setupUi(this);
    ui->reservationType->addItem(QIcon(":/images/plane.png"),"Flight Reservation");
    ui->reservationType->addItem(QIcon(":/images/hotel.png"), "Hotel Reservation");
    ui->reservationType->addItem(QIcon(":/images/vacation.jpg"),"Package Reservation");
    ui->reservationType->addItem(QIcon(":/images/cruise.jpg"),"Cruise Reservation");


}

Booking::~Booking()
{
    delete ui;
}

void Booking::on_select_clicked()
{
    QMessageBox::information(this,"title",ui->reservationType->currentText() + " Chosen");

}
