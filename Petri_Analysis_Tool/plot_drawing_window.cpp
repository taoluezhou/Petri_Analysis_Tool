#include "plot_drawing_window.h"
#include "ui_plot_drawing_window.h"

plot_drawing_window::plot_drawing_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plot_drawing_window)
{
    ui->setupUi(this);
}

plot_drawing_window::~plot_drawing_window()
{
    delete ui;
}
