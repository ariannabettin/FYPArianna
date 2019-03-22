#include "changeaction.h"
#include "ui_changeaction.h"

ChangeAction::ChangeAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeAction)
{
    ui->setupUi(this);

}

ChangeAction::~ChangeAction()
{
    delete ui;
}

void ChangeAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void ChangeAction::on_homeButton_2_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void ChangeAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void ChangeAction::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
