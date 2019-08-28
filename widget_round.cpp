#include "widget_round.h"

Widget_round::Widget_round(QWidget *parent) : QWidget(parent)
{
    map = new QPixmap(QSize(40,40));
    map->fill(Qt::blue);
    QPixmap labMap = QPixmap(QSize(20,20));
    labMap.fill(Qt::blue);
    QPainter p;
    p.begin(&labMap);
    p.translate(10,10);
    p.rotate(45);
    p.translate(-10,-10);
    p.fillRect(QRect(3,3,14,14),QColor(0,255,0));
    p.end();

    QPixmap label;
    label = QPixmap(QSize(20,20));
    label.fill(Qt::transparent);
    p.begin(&label);
    p.drawText(QRect(7,0,10,10),"12");
    p.end();
//    QPixmap tmpMap;
//    tmpMap = QPixmap(QSize(100,100));
//    tmpMap.fill(Qt::transparent);
//    p.begin(&tmpMap);
//    p.translate(50,0);
//    p.rotate(45);
//    p.fillRect(QRect(0,0,50,50),QColor(0,0,88));
//    p.end();

//    p.begin(map);
//    p.drawPixmap(0,0,tmpMap);
//    p.end();
    p.begin(map);
    p.drawPixmap(label.rect(),label);
    p.drawPixmap(QRect(0,12,labMap.width(),labMap.height()),labMap);
    p.end();
    map->save("map.png");
}

void Widget_round::paintEvent(QPaintEvent *event)
{

    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.drawPixmap(0,0,*map);
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
