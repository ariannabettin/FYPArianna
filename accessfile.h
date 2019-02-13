#ifndef ACCESSFILE_H
#define ACCESSFILE_H
#include "newaction.h"
#include "newactiont.h"
#include <QDialog>

namespace Ui {
class AccessFile;
}

class AccessFile : public QDialog
{
    Q_OBJECT

public:
    explicit AccessFile(QWidget *parent = 0);
    ~AccessFile();

private slots:
    void on_homeButton_clicked();
    
    void on_selectButton_clicked();
    
    void on_visualiseButton_clicked();
    
    void on_modifyButton_clicked();
    
    void on_domainButton_clicked();
    
    void on_pushButton_7_clicked();
    
    void on_problemButton_clicked();

    void on_PFButton_clicked();

    void on_pfButton_clicked();

    void on_pButton_clicked();

private:
    Ui::AccessFile *ui;
    NewAction* newA;
    NewActionT* newB;

};

#endif // ACCESSFILE_H
