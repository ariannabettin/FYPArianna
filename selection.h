#ifndef SELECTION_H
#define SELECTION_H

#include "visualisation.h"
#include <QDialog>
#include "ui_selection.h"
#include "gloabal.h"
#include "visualisation.h"
#include <QMessageBox>
#include <QListWidgetItem>


namespace Ui {
class Selection;
}

class Selection : public QDialog
{
    Q_OBJECT

public:
    explicit Selection(QWidget *parent = 0);
    ~Selection();
    int numChecked;
    bool saveClicked = false;




private slots:

    void on_showAllButton_clicked();

    void on_showLastButton_clicked();

    void on_clearButton_clicked();

    void on_deleteButton_clicked();

    void on_visualiseButton_clicked();

    void on_homeButton_clicked();

    void on_saveButton_clicked();

    void on_backButton_clicked();

private:
    Ui::Selection *ui;
    Visualisation *visualise;    //[2]
};

#endif // SELECTION_H
