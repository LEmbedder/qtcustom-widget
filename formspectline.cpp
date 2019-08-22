#include "formspectline.h"
#include "ui_formspectline.h"
#include <random>
#include <QPainter>

FormSpectLine::FormSpectLine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSpectLine)
{
    ui->setupUi(this);
    timers = 0;
    this->setAttribute(Qt::WA_StyledBackground,true);
    setStyleSheet("background-color: rgb(0,0, 0)");
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(timerOut()));
    timer->start(1000);

}

FormSpectLine::~FormSpectLine()
{
    delete ui;
}
int j = 0;
void FormSpectLine::paintEvent(QPaintEvent *event)
{
    j++;
    if(j == 2047)j = 0;
    timers++;
    QPainter painter(this);
    QPointF pointfs[2048];
    int point[2048];

    for(int i = 0; i < 2048; i++)
    {
        point[i] = rand()%20;
        if(i == j)
        {
            pointfs[i] = QPointF(width()/2048.0* i,-20);
        }
        else
        pointfs[i] = QPointF(width()/2048.0* i,point[i]-80);
    }

    QPen pen;
    pen.setColor(Qt::yellow);
    painter.setPen(pen);
//    QTransform transForm;
//    transForm.rotate(180,Qt::XAxis);
//    painter.setTransform(transForm);
//    painter.setViewport(0,height(),width(),height());
//    painter.setWindow(0,80,width(),100);
    painter.drawPolyline(pointfs,2000);
    update();
}
void FormSpectLine::timerOut()
{
    qDebug("%d",timers);
    timers = 0;
}
