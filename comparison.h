#ifndef COMPARISON_H
#define COMPARISON_H

#include <QDialog>
#include "validplan.h"
#include "ui_comparison.h"
#include "gloabal.h"
#include <QMessageBox>


namespace Ui {
class Comparison;
}

class Comparison : public QDialog
{
    Q_OBJECT

public:
    explicit Comparison(QWidget *parent = 0);
    ~Comparison();
    bool cNoChanges;
    bool cNews;
    bool cReplaced;
    bool cRemoved;

private slots:
    void on_saveButton_clicked();

    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_valButton_clicked();

    void on_noChangesButton_clicked();

    void on_newsButton_clicked();

    void on_replacedButton_clicked();

    void on_removedButton_clicked();

private:
    Ui::Comparison *ui;
    validPlan *valid;




};

#endif // COMPARISON_H
