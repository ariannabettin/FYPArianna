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

private:
    Ui::ListOfActions *ui;
};

#endif // LISTOFACTIONS_H
