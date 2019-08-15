#include "widget_round.h"

Widget_round::Widget_round(QWidget *parent) : QWidget(parent)
{
    map = new QPixmap(QSize(100,100));
    map->fill(Qt::transparent);
    QPainter p;
    p.begin(map);

    QPen pen;
    pen.setColor(Qt::red);
    p.setPen(pen);
    QBrush brush;
    brush.setColor(QColor(0,255,0,50));
    brush.setStyle(Qt::SolidPattern);
    p.setBrush(brush);
    QRect rect(0,0,100,100);
    //p.drawRect(rect);
    p.fillRect(rect,QColor(0,255,0,50));
    p.end();
}

void Widget_round::paintEvent(QPaintEvent *event)
{

    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.drawPixmap(10,10,*map);
//    QPen pen;
//    pen.setColor(Qt::black);
//    painter.setPen(pen);
//    QBrush brush;
//    brush.setColor(QColor(0,255,0,50));
//    brush.setStyle(Qt::SolidPattern);
//    painter.setBrush(brush);
//    QRect rect(10,10,100,100);
//    painter.drawRect(rect);

}
