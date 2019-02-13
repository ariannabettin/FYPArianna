#include "removeaction.h"
#include "ui_removeaction.h"
#include "newaction.h"
#include "gloabal.h"
#include <QListWidgetItem>

RemoveAction::RemoveAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
}

RemoveAction::~RemoveAction()
{
    delete ui;
}

void RemoveAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void RemoveAction::on_removePlanButton_clicked()
{
   /* QStringList line = Plan.split(QRegExp("[\r\n\t]+"),QString::SkipEmptyParts);
     for(int i = 0; i<line.size(); i++ ){
            QListWidgetItem * checkB = new QListWidgetItem(line[i+1]);
            checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
            checkB->setCheckState(Qt::Unchecked);

     }*/
}

void RemoveAction::on_valButton_clicked()
{
    //validator
}

void RemoveAction::on_removeFileButton_clicked()
{
    file  = new fileClass(this);
    file->show();

}




