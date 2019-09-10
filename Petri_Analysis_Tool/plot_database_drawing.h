#ifndef PLOT_DATABASE_DRAWING_H
#define PLOT_DATABASE_DRAWING_H

#include <QWidget>

namespace Ui {
class plot_database_drawing;
}

class plot_database_drawing : public QWidget
{
    Q_OBJECT

public:
    explicit plot_database_drawing(QWidget *parent = 0);
    ~plot_database_drawing();

private:
    Ui::plot_database_drawing *ui;
};

#endif // PLOT_DATABASE_DRAWING_H
