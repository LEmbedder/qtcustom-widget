#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget_round.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Widget_round *w1 = new Widget_round(this);
    setCentralWidget(w1);

}

MainWindow::~MainWindow()
{
    delete ui;
}
