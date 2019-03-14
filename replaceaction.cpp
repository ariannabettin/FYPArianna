#include "replaceaction.h"
#include "ui_replaceaction.h"
#include "gloabal.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "comparison.h"
#include "gloabal.h"

ReplaceAction::ReplaceAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReplaceAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);

    QPixmap pixmap1("doneIcon.png");
    QIcon ButtonIcon1(pixmap1);
    ui->replaceActionsButton->setIcon(ButtonIcon1);
    ui->replaceActionsButton->setIconSize(QSize(35, 45));


    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty()){
            QListWidgetItem * checkB = new QListWidgetItem(line[i]);
            checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
            checkB->setCheckState(Qt::Unchecked);
            ui->planArea->addItem(checkB);
            count++;
        }
     }

}

ReplaceAction::~ReplaceAction()
{
    delete ui;
}


void ReplaceAction::on_existingButton_clicked()
{
    isClicked++;

    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plan->setPlainText(text);
    QString t = ui->plan->toPlainText();
    int act = 0;
    int isDomain = 0;
    bool firstActionInvalid  = false;
    if(text.contains("action")){
        isDomain++;

        if(isDomain == 1){
          //  QStringList line = t.split(QRegExp(delimiters),QString::SkipEmptyParts);
            QStringList line = t.split("\n");
            for(int i = 0; i<line.size(); i++ ){
                if(line[i].contains("action")){
                    QStringList word = line[i].split(" ");
                    for(int j = 0; j<word.size(); j++ ){
                        if(word[j].contains("action")){
                            if(firstActionInvalid){
                                if(!Plan.contains(word[j+1])){
                                    QListWidgetItem * checkB = new QListWidgetItem(word[j+1]);
                                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                                    checkB->setCheckState(Qt::Unchecked);
                                    ui->list->addItem(checkB);
                                    act = act + 1;
                                }
                            }
                            firstActionInvalid = true;
                        }
                    }
                }
            }

        }else{
            QMessageBox::information(this, "Error: ", "Are you sure that the file you uploaded is a domain file?");
        }

       numItems = act;

       file.close();
}

}


void ReplaceAction::on_replaceActionsButton_clicked()
{
    int numChecked = 0;
    if(isClicked > 0){

         for(int i = 0; i<numItems; i++){
            bool isChecked = ui->list->item(i)->checkState();
            if(isChecked == true){
                  action[numChecked] = ui->list->item(i)->text();
                  numChecked++;
             }
         }
          toAdd[0] = action[0];



         if(numChecked == 0){
             QMessageBox::information(this,"Error:","You need to select TWO actions for this operation. One from each list.");
         }else if(numChecked!=1){
             QMessageBox::information(this,"Error:","You can select only one action at once from each list.");
         }else{

             for(int i = 0; i<count; i++){
                bool isChecked = ui->planArea->item(i)->checkState();
                if(isChecked == true){
                      action[numChecked] = ui->planArea->item(i)->text();
                      numChecked++;
                 }
             }

             toRemove = action[1];

             if(numChecked == 0){
                 QMessageBox::information(this,"Error:","You need to select the action that you want to replace.");
             }else if(numChecked!=2){
                 QMessageBox::information(this,"Error:","You can select only one action at once from each list.");
             }else{

                 for(int i = 0; i<count; i++){
                     if(i==0){
                         if(ui->planArea->item(0)->text() != toRemove){
                            Plan2 = ui->planArea->item(i)->text();
                         }else{
                            Plan2 = toAdd[0];
                         }
                     }else{
                         if(ui->planArea->item(i)->text() != toRemove){
                             Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
                         }else{
                             Plan2 = Plan2 + "\n" + toAdd[0];
                         }
                     }
                    }
                     count = 0;
                     compareButtonName = "Replace";
                     compare = new Comparison(this);
                     compare->show();
                     this->hide();
              }
         }

      }else{
        QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }

}



void ReplaceAction::on_homeButton_2_clicked()
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

void ReplaceAction::on_visualiseButton_2_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void ReplaceAction::on_modifyButton_2_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
