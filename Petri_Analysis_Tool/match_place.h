#ifndef MATCH_PLACE_H
#define MATCH_PLACE_H

#include <QWidget>
#include <QDebug>
#include <QLabel>
#include <QList>
#include <QLineEdit>

#include "globals.h"

struct Match_ColorLabel
{
     int colornum;
     QList<QLabel*> Colorname;
     QList<QLineEdit*> ColorTextLine;
};

namespace Ui {
class match_place;
}

class match_place : public QWidget
{
    Q_OBJECT

public:
    explicit match_place(QWidget *parent = 0);
    ~match_place();

private slots:
    void on_begin_clicked();

    void on_load_clicked();

private:
    Ui::match_place *ui;
    QList<QLabel*> LabelList;
    QList<QLineEdit*> TextLineList;
    QList<Match_ColorLabel> ColorLabelList;
};

#endif // MATCH_PLACE_H
