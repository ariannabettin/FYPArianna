#include "replaceaction.h"
#include "ui_replaceaction.h"
#include "gloabal.h"

ReplaceAction::ReplaceAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReplaceAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
}

ReplaceAction::~ReplaceAction()
{
    delete ui;
}

void ReplaceAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void ReplaceAction::on_selectButton_2_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void ReplaceAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void ReplaceAction::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void ReplaceAction::on_valButton_clicked()
{
    //external validator
}
