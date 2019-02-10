#ifndef REPLACEACTION_H
#define REPLACEACTION_H

#include <QDialog>

namespace Ui {
class ReplaceAction;
}

class ReplaceAction : public QDialog
{
    Q_OBJECT

public:
    explicit ReplaceAction(QWidget *parent = 0);
    ~ReplaceAction();

private slots:
    void on_homeButton_clicked();

    void on_selecyButton_clicked();

    void on_visualiseButton_clicked();

    void on_selectButton_clicked();

    void on_selectButton_2_clicked();

    void on_modifyButton_clicked();

    void on_valButton_clicked();
    
private:
    Ui::ReplaceAction *ui;
};

#endif // REPLACEACTION_H
