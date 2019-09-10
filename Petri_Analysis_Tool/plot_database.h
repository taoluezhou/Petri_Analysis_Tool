#ifndef PLOT_DATABASE_H
#define PLOT_DATABASE_H

#include <QWidget>

namespace Ui {
class plot_database;
}

class plot_database : public QWidget
{
    Q_OBJECT

public:
    explicit plot_database(QWidget *parent = 0);
    ~plot_database();

private:
    Ui::plot_database *ui;
};

#endif // PLOT_DATABASE_H
