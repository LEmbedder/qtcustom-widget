#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget_round.h"

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Widget_round *w1 = new Widget_round(this);


    QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);
    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

//![3]
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Simple line chart example");
//![3]

//![4]
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
//![4]
//!
    setCentralWidget(chartView);

}

MainWindow::~MainWindow()
{
    delete ui;
}
