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

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->removeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    if(themeColor == "white"){

        ui->removeFileButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->removePlanButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    }else if(themeColor == "black"){

        ui->removePlanButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->removeFileButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");

    }

    int counter = 0;
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty() || line[i] == " "){
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
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RemoveAction::on_selectButton_clicked()
{
    numItems = 0;
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

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

         QStringList line = Plan.split("\n");
         int helper = 0;
         for(int i = 0; i<numItems; i++){
             if(ui->planArea->item(i)->text() == toRemove){
                 if(i == 0){
                    Plan2 =  ui->planArea->item(1)->text();
                    helper = 1;
                 }
             }else{
                 if(i == 0){
                     Plan2 = ui->planArea->item(0)->text();
                 }else if(i == 1){
                     if(helper == 0){
                        Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
                     }
                 }else{
                     Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
                 }
             }
        }

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
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


void RemoveAction::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
