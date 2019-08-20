#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget_round.h"

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include "formqwtspec.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Widget_round *wr = new Widget_round;
    FormQwtSpec *fqt = new FormQwtSpec;
    setCentralWidget(wr);
}

MainWindow::~MainWindow()
{
    delete ui;
}
