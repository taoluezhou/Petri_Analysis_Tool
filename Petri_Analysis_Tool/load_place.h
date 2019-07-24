#ifndef LOAD_PLACE_H
#define LOAD_PLACE_H

#include <QWidget>
#include <QDebug>
#include <QLabel>
#include <QList>
#include <QLineEdit>

#include "globals.h"

struct ColorLabel
{
     int colornum;
     QList<QLabel*> Colorname;
     QList<QLineEdit*> ColorTextLine;
};

namespace Ui {
class load_place;
}

class load_place : public QWidget
{
    Q_OBJECT

public:
    explicit load_place(QWidget *parent = 0);
    ~load_place();

private slots:
    void on_load_clicked();

    void on_begin_clicked();

private:
    Ui::load_place *ui;
    QList<QLabel*> LabelList;
    QList<QLineEdit*> TextLineList;
    QList<ColorLabel> ColorLabelList;
};

#endif // LOAD_PLACE_H
