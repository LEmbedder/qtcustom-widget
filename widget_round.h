#ifndef WIDGET_ROUND_H
#define WIDGET_ROUND_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QPixmap>

class Widget_round : public QWidget
{
    Q_OBJECT
private:
    QPixmap *map;
public:
    explicit Widget_round(QWidget *parent = 0);
protected:
    virtual void paintEvent(QPaintEvent *event);

signals:

public slots:
};

#endif // WIDGET_ROUND_H
