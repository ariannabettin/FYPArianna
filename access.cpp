#include "access.h"
#include "ui_access.h"
#include "newaction.h"

Access::Access(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Access)
{
    ui->setupUi(this);
}

Access::~Access()
{
    delete ui;
}

void Access::on_domainButton_clicked()
{
    file  = new fileClass(this);
    file->show();

}

void Access::on_problemButton_clicked()
{
   /* newB = new NewActionT(this);
    newB->show();*/
}

void Access::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Access::on_selecyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Access::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Access::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}