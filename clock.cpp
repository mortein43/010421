
#include "clock.h"
#include "./ui_clock.h"
#include <QTime>
#include <QTimer>



Digitalclock::Digitalclock(QWidget *parent)
    : QLCDNumber(parent)
{
    setSegmentStyle(Filled);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Digitalclock::showTime);
    timer->start(1000);

    showTime();

    setWindowTitle(tr("clock"));
    resize(150, 60);
}

void Digitalclock::showTime()
//! [1] //! [2]
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    display(text);
}


