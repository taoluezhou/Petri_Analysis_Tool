#ifndef DRAWING_WINDOW_H
#define DRAWING_WINDOW_H

#include <QWidget>

namespace Ui {
class drawing_window;
}

class drawing_window : public QWidget
{
    Q_OBJECT

public:
    explicit drawing_window(QWidget *parent = 0);
    ~drawing_window();

private:
    Ui::drawing_window *ui;
};

#endif // DRAWING_WINDOW_H
