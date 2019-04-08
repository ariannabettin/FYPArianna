#ifndef ACCESS_H
#define ACCESS_H
#include "fileclass.h"
#include "fileclasspf.h"
#include <QDialog>
#include "ui_access.h"
#include "newaction.h"


namespace Ui {
class Access;
}

class Access : public QDialog
{
    Q_OBJECT

public:
    explicit Access(QWidget *parent = 0);
    ~Access();

private slots:

    void on_domainButton_clicked();

    void on_problemButton_clicked();

    void on_homeButton_clicked();

    void on_selecyButton_clicked();

    void on_visualiseButton_clicked();

    void on_backButton_clicked();

private:
    Ui::Access *ui;
    fileClass *file;        //[2]
    fileclassPF * PFfile;   //[2]
};

#endif // ACCESS_H
