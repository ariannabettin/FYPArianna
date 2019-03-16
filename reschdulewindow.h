#ifndef RESCHDULEWINDOW_H
#define RESCHDULEWINDOW_H
#include "comparison.h"
#include <QDialog>
#include "ui_reschdulewindow.h"
#include "gloabal.h"
#include <QMessageBox>

namespace Ui {
class reschduleWindow;
}

class reschduleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit reschduleWindow(QWidget *parent = 0);
    ~reschduleWindow();

private slots:
    void on_doneButton_clicked();
    
    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

    void on_Button_clicked();

    void on_backButton_clicked();

private:
    Ui::reschduleWindow *ui;
    Comparison *compare;
};

#endif // RESCHDULEWINDOW_H
