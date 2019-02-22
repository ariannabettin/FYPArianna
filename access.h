#ifndef ACCESS_H
#define ACCESS_H
#include "fileclass.h"
#include "fileclasspf.h"
#include <QDialog>

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

    void on_modifyButton_clicked();

private:
    Ui::Access *ui;
    fileClass *file;
    fileclassPF * PFfile;
};

#endif // ACCESS_H
