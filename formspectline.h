#ifndef FORMSPECTLINE_H
#define FORMSPECTLINE_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
namespace Ui {
class FormSpectLine;
}

class FormSpectLine : public QWidget
{
    Q_OBJECT

public:
    explicit FormSpectLine(QWidget *parent = 0);
    ~FormSpectLine();
    void setDrawPen();
protected:
    virtual void paintEvent(QPaintEvent *event);
private slots:
    void timerOut();
private:
    Ui::FormSpectLine *ui;
    QTimer *timer;
    int timers;
    QPainter painter;
    QPen pen;
    QTransform transFrom;
};

#endif // FORMSPECTLINE_H
