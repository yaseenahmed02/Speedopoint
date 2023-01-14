#ifndef BOOKING_H
#define BOOKING_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class Booking; }
QT_END_NAMESPACE


class Booking : public QMainWindow
{
    Q_OBJECT

public:
    explicit Booking(QWidget *parent = nullptr);
    ~Booking();

private slots:
    void on_select_clicked();

private:
    Ui::Booking *ui;
};

#endif // BOOKING_H
