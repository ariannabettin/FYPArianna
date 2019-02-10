#include "addaction.h"
#include "ui_addaction.h"
#include "gloabal.h"
#include "newaction.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QListWidgetItem>
#include "comparison.h"


AddAction::AddAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
}

AddAction::~AddAction()
{
    delete ui;
}

void AddAction::on_homeButton_clicked()                                                             //goes back to the home
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void AddAction::on_selectButton_clicked()                                                           //goes back to the selection window
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void AddAction::on_visualiseButton_clicked()                                                        //goes back to the visualisation window
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void AddAction::on_modifyButton_clicked()                                                          //goes back to the modification window                                                   //goes back to the modification window
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void AddAction::on_valButton_clicked()
{
    //Validates plan thanks to an external validator
}

void AddAction::on_newActionButton_clicked()                                                        //opens the domain file and allows users to modify the domain file and add an action
{
    file  = new fileClass(this);
    file->show();

}

void AddAction::on_existinButton_clicked()
{
    QFont f( "Arial",8);
    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    text = in.readAll();
    int actions = 0;                                                                                 // variable which states the number of actions in the plan
    bool isDomain = false;                                                                           // variable which states if the file is a PDDL Domain
    bool firstActionInvalid  = false;                                                                // varianble used to skip the action declaration in the PDDL file
    if(text.contains("action")){
        isDomain = true;
        if(isDomain == 1){
            QStringList line = text.split(QRegExp(" "),QString::SkipEmptyParts);                     //splits the text
            for(int i = 0; i<line.size(); i++ ){
              if(line[i].contains("action")){                                                        // if the line contains the word "action" get the word right after it
                linesValue[actions] = line[i+1];
                actions = actions + 1;
                if(firstActionInvalid){
                    QListWidgetItem * checkB = new QListWidgetItem(line[i+1]);                       // create a list of check boxes with names of actions
                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                    checkB->setCheckState(Qt::Unchecked);
                    ui->list->addItem(checkB);
                    ui->list->setFont(f);
                }
                firstActionInvalid = true;
               }
             }
          }
    }

        if(!isDomain){
            QMessageBox::information(this,"Error","The file loaded is not a domain");                //if no file o no "action" found, warn the user
        }

      // file.close();
      numItems = actions;

}

//TO DO find which action has been selected




void AddAction::on_doneButton_clicked()                                                             // finds the checked actions and adds them to the edit lines.
{
    QFont f( "Arial",8);
    int numChecked = 0;
    QString action[100];
     for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
              action[numChecked] = ui->list->item(i)->text();
              numChecked++;
         }
     }
     QString actionlist1;
     QString actionlist2;

     for (int i = 0; i<4; i++){
         if (i==0){
           actionlist1 = action[0];
         }else{
           actionlist1 =  actionlist1 + "," + action[i];
         }

     }

     for (int i = 4; i<numChecked; i++){
         if (i==4){
           actionlist2 = action[4];
         }else{
           actionlist2 =  actionlist2 + "," + action[i];
         }

     }
     ui->label1->setText("Action/s to add: ");
     ui->actionToAdd->setText(actionlist1);
     ui->actionToAdd->setFont(f);
     ui->actionToAdd2->setText(actionlist2);
     ui->actionToAdd2->setFont(f);

}

void AddAction::on_addButton_2_clicked()                                                                  // adds the selected action to the global variable Plan2 and opens the comparison window
{
    int numChecked;
    QString action[100];
    for(int i = 0; i<numItems-1; i++){
       bool isChecked = ui->list->item(i)->checkState();
       if(isChecked == true){
             action[numChecked] = ui->list->item(i)->text();
             numChecked++;
        }
    }
    Plan2 =Plan;
    for(int i = 0; i< numChecked; i++){
        Plan2 = Plan2 + " " + action[i];
    }


    compare = new Comparison(this);
    compare->show();
    this->hide();


}
