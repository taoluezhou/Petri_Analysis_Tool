#include "drawing_window.h"
#include "ui_drawing_window.h"

drawing_window::drawing_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::drawing_window)
{
    ui->setupUi(this);
}

drawing_window::~drawing_window()
{
    delete ui;
}
