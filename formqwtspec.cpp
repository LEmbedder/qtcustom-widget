#include "formqwtspec.h"
#include "ui_formqwtspec.h"

FormQwtSpec::FormQwtSpec(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormQwtSpec)
{
    ui->setupUi(this);

    QwtPlot *plot = new QwtPlot;
    plot->setCanvasBackground( Qt::white );
    plot->setAxisScale( QwtPlot::yLeft, 0.0, 10.0 );
    plot->insertLegend( new QwtLegend());

    QwtPlotGrid *grid = new QwtPlotGrid();
    grid->attach( plot );

    QwtPlotCurve *curve = new QwtPlotCurve();
    curve->setPen( Qt::blue, 4 );
    //curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );

    QwtSymbol *symbol = new QwtSymbol( QwtSymbol::Ellipse, QBrush( Qt::yellow ), QPen( Qt::red, 2 ), QSize( 8, 8 ) );
    curve->setSymbol( symbol );

    QPolygonF points;
    points << QPointF( 0.0, 4.4 ) << QPointF( 1.0, 3.0 )
        << QPointF( 2.0, 4.5 ) << QPointF( 3.0, 6.8 )
        << QPointF( 4.0, 7.9 ) << QPointF( 5.0, 7.1 );
    curve->setSamples( points );

    curve->attach( plot );

    plot->resize( 600, 400 );
    layout()->addWidget(plot);



}

FormQwtSpec::~FormQwtSpec()
{
    delete ui;
}
