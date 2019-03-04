#include "removeaction.h"
#include "ui_removeaction.h"
#include "newaction.h"
#include "gloabal.h"
#include "comparison.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include "gloabal.h"

RemoveAction::RemoveAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);

    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        QListWidgetItem * checkB = new QListWidgetItem(line[i]);
        checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
        checkB->setCheckState(Qt::Unchecked);
        ui->planArea->addItem(checkB);
     }
    numItems = line.size();
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
    numChecked = 0;
    for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->planArea->item(i)->checkState();
        if(isChecked == true){
              action[numChecked] = ui->planArea->item(i)->text();
              numChecked++;
         }
     }

    if(numChecked>1){
        QMessageBox::information(this,"Error:","You can select only one action at once. Only the first action selected will be removed.");
    }

    toRemove = action[0];

    QStringList line = Plan.split("\n");
     for(int i = 0; i<line.size(); i++){
         if(ui->planArea->item(i)->text() != toRemove){
             Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
         }
    }
    compareButtonName = "Remove";
    compare = new Comparison(this);
    compare->show();
    this->hide();
}



void RemoveAction::on_removeFileButton_clicked()
{
    file  = new domainFile(this);
    file->show();

}





