#ifndef REPLACEACTION_H
#define REPLACEACTION_H

#include <QDialog>
#include "comparison.h"

namespace Ui {
class ReplaceAction;
}

class ReplaceAction : public QDialog
{
    Q_OBJECT

public:
    explicit ReplaceAction(QWidget *parent = 0);
    ~ReplaceAction();
    int selectedItems;

private slots:

    void on_valButton_clicked();

    void on_homeButton_clicked();

    void on_visualiseButton_clicked();

    void on_selectButton_clicked();

    void on_modifyButton_clicked();

    void on_existingButton_clicked();

    void on_doneButton_clicked();

    void on_planArea_selectionChanged();

    void on_replaceActionsButton_clicked();

    void on_restoreButton_clicked();

private:
    Ui::ReplaceAction *ui;
    Comparison *compare;
};

#endif // REPLACEACTION_H
