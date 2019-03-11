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
    int counter = 0;
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty()){
            QListWidgetItem * checkB = new QListWidgetItem(line[i]);
            checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
            checkB->setCheckState(Qt::Unchecked);
            ui->planArea->addItem(checkB);
            counter ++;
        }
     }
    numItems = counter;
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
    for(int i = 0; i<numItems; i++){
        bool isChecked = ui->planArea->item(i)->checkState();
        if(isChecked == true){
              action[numChecked] = ui->planArea->item(i)->text();
              numChecked++;
         }
     }

    if(numChecked>1){
        QMessageBox::information(this,"Error:","You can select only one action at once.");
    }else if(numChecked == 0){
         QMessageBox::information(this,"Error:","You should select at least one action.");
    }else if (numChecked ==1){
         toRemove = action[0];

         QStringList line = Plan.split("\n");
         for(int i = 0; i<numItems; i++){
             if(ui->planArea->item(i)->text() != toRemove){
                    if(i == 0){
                    Plan2 =  ui->planArea->item(i)->text();
                 }else if(toRemove == ui->planArea->item(0)->text()){
                    Plan2 =  ui->planArea->item(1)->text();
                    toRemove = toRemove+"e"; //REMEMBER ABOUT IT!!
                 }else{
                    Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
                 }
             }
        }
         Plan2 = Plan2 + "\n";
        compareButtonName = "Remove";
        compare = new Comparison(this);
        compare->show();
        this->hide();
    }
}



void RemoveAction::on_removeFileButton_clicked()
{
    file  = new domainFile(this);
    file->show();

}





