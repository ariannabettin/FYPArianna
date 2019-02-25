#ifndef SELECTION_H
#define SELECTION_H

#include "visualisation.h"
#include <QDialog>

namespace Ui {
class Selection;
}

class Selection : public QDialog
{
    Q_OBJECT

public:
    explicit Selection(QWidget *parent = 0);
    ~Selection();

private slots:
    void on_showAllButton_clicked();

    void on_showLastButton_clicked();

    void on_clearButton_clicked();

    void on_deleteButton_clicked();

    void on_visualiseButton_clicked();

    void on_homeButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::Selection *ui;
    Visualisation *visualise;
};

#endif // SELECTION_H
