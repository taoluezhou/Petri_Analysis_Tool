#include "plot_database_drawing.h"
#include "ui_plot_database_drawing.h"

plot_database_drawing::plot_database_drawing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plot_database_drawing)
{
    ui->setupUi(this);
}

plot_database_drawing::~plot_database_drawing()
{
    delete ui;
}
