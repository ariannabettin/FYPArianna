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
    int isClicked = 0;

private slots:

    void on_existingButton_clicked();

    void on_replaceActionsButton_clicked();

    void on_homeButton_2_clicked();

    void on_selectButton_2_clicked();

    void on_visualiseButton_2_clicked();

    void on_modifyButton_2_clicked();

private:
    Ui::ReplaceAction *ui;
    Comparison *compare;
};

#endif // REPLACEACTION_H
