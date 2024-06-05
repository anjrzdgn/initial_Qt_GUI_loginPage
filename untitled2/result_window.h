#ifndef RESULT_WINDOW_H
#define RESULT_WINDOW_H

#include <QMainWindow>

namespace Ui {
class result_window;
}

class result_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit result_window(QWidget *parent = nullptr);
    ~result_window();

private:
    Ui::result_window *ui;
};

#endif // RESULT_WINDOW_H
