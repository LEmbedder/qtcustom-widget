#ifndef FORMQWTSPEC_H
#define FORMQWTSPEC_H

#include <QWidget>
//#include <qwt_plot.h>
//#include <qwt_plot_curve.h>
//#include <qwt_plot_grid.h>
//#include <qwt_symbol.h>
//#include <qwt_legend.h>

namespace Ui {
class FormQwtSpec;
}

class FormQwtSpec : public QWidget
{
    Q_OBJECT

public:
    explicit FormQwtSpec(QWidget *parent = 0);
    ~FormQwtSpec();

private:
    Ui::FormQwtSpec *ui;
};

#endif // FORMQWTSPEC_H
