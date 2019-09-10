#include "plot_database.h"
#include "ui_plot_database.h"

plot_database::plot_database(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plot_database)
{
    ui->setupUi(this);
}

plot_database::~plot_database()
{
    delete ui;
}
