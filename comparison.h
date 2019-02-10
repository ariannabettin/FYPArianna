#ifndef COMPARISON_H
#define COMPARISON_H

#include <QDialog>

namespace Ui {
class Comparison;
}

class Comparison : public QDialog
{
    Q_OBJECT

public:
    explicit Comparison(QWidget *parent = 0);
    ~Comparison();

private slots:
    void on_saveButton_clicked();

    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

    void on_addButton_clicked();

private:
    Ui::Comparison *ui;
};

#endif // COMPARISON_H
