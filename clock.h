
#ifndef CLOCK_H
#define CLOCK_H

#include <QMainWindow>
#include <QLCDNumber>

class Digitalclock : public QLCDNumber
{
    Q_OBJECT

public:
    Digitalclock(QWidget *parent = nullptr);

private slots:
    void showTime();
};

#endif // CLOCK_H
