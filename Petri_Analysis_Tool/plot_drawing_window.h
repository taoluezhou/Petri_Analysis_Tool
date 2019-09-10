#ifndef PLOT_DRAWING_WINDOW_H
#define PLOT_DRAWING_WINDOW_H

#include <QWidget>

namespace Ui {
class plot_drawing_window;
}

class plot_drawing_window : public QWidget
{
    Q_OBJECT

public:
    explicit plot_drawing_window(QWidget *parent = 0);
    ~plot_drawing_window();

private:
    Ui::plot_drawing_window *ui;
};

#endif // PLOT_DRAWING_WINDOW_H
