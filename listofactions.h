#ifndef LISTOFACTIONS_H
#define LISTOFACTIONS_H

#include <QDialog>


namespace Ui {
class ListOfActions;
}

class ListOfActions : public QDialog
{
    Q_OBJECT

public:
    explicit ListOfActions(QWidget *parent = 0);
    ~ListOfActions();

private slots:
    void on_listButton_clicked();

private:
    Ui::ListOfActions *ui;
};

#endif // LISTOFACTIONS_H
