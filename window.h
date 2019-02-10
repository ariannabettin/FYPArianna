#ifndef WINDOW_H
#define WINDOW_H

#include <QDialog>

namespace Ui {
class Window;
}

class Window : public QDialog
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = 0);
    ~Window();

private slots:
    void on_doneButton_clicked();

private:
    Ui::Window *ui;
};

#endif // WINDOW_H
