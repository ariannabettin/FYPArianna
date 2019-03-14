#include "userquestions.h"
#include "ui_userquestions.h"
#include <QMessageBox>
#include <QFile>
#include "gloabal.h"
#include <QListWidgetItem>
#include <QTextStream>
#include <qlabel.h>
#include "comparison.h"
#include "reschedulequestion.h"

UserQuestions::UserQuestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserQuestions)
{
    ui->setupUi(this);
    ui->question_label->setText(" ");
    ui->addButton_2->setText("Complete");
    route = 1;
}

UserQuestions::~UserQuestions()
{
    delete ui;
}


void UserQuestions::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void UserQuestions::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void UserQuestions::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void UserQuestions::on_doneButton_clicked()
{
    //list the actions in the list area
    isClicked ++;
    isClicked2++;

    if(ui->addOption->isChecked()){
        ui->statementLabel->setText("Choose actionA:");
        ui->list->clear();
        ui->list->addItem("A:");
        QFont f( "Arial",8);
        QFile file(domains[id]);
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            QMessageBox::information(this, "Error: ", "Not file found");
        }
        QTextStream in(&file);
        QString text = in.readAll();
        ui->planArea->setPlainText(text);
        QString t = ui->planArea->toPlainText();
        int act = 0;
        int isDomain = 0;
        bool firstActionInvalid  = false;
        if(text.contains("action")){
            isDomain++;

            if(isDomain == 1){
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
                                        ui->list->setFont(f);
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

    }else if(ui->removeOption->isChecked()  || ui->rescheduleOption->isChecked()){
        ui->statementLabel->setText("Choose actionA:");
        ui->list->clear();
        ui->list->addItem("A:");
        QFont f( "Arial",8);
        QStringList line = Plan.split("\n");
        for(int i = 0; i<line.size(); i++ ){
            if(!line[i].isEmpty() || line[i] == " "){
                QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                checkB->setCheckState(Qt::Unchecked);
                ui->list->addItem(checkB);
                ui->list->setFont(f);
                numItems = i;
            }
        }
        numItems = numItems+1;

    }else if(ui->replaceOption->isChecked()){
            ui->statementLabel->setText("Choose actionA and actionB:");
            ui->list->clear();
            ui->list->addItem("A:");
            QFont f( "Arial",8);
            QStringList line = Plan.split("\n");
            for(int i = 0; i<line.size(); i++ ){
                if(!line[i].isEmpty() || line[i] == " "){
                    QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                    checkB->setCheckState(Qt::Unchecked);
                    ui->list->addItem(checkB);
                    ui->list->setFont(f);
                    numItems = i;
                }
            }
            numItems = numItems+1;
            ui->list->addItem("B:");
            QFile file(domains[id]);
            if(!file.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::information(this, "Error: ", "Not file found");
            }
            QTextStream in(&file);
            QString text = in.readAll();
            ui->planArea->setPlainText(text);
            QString t = ui->planArea->toPlainText();
            int act = 0;
            int isDomain = 0;
            bool firstActionInvalid  = false;
            if(text.contains("action")){
                isDomain++;

                if(isDomain == 1){
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
                                            ui->list->setFont(f);
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

               numItems = numItems + act +1;

               file.close();
        }

    }else{
        QMessageBox::information(this,"List of Action:","According to your question, the list of actions available will be different. Please, select the question first.");
    }


}



void UserQuestions::on_completeButton_clicked()
{
   if(isClicked > 0){
        ui->question_label->clear();
        QString str1;
        QString str2;
        QString str3;
        QString str4;
        QString quest;
        QStringList list;
        oneAction = 0;
        twoActions = 0;

        numChecked = 0;
        for(int i = 0; i<numItems+1; i++){
            bool isChecked = ui->list->item(i)->checkState();
            if(isChecked == true){
                        action[numChecked] = ui->list->item(i)->text();
                        numChecked++;
             }
         }

        if(numChecked == 1 && (ui->addOption->isChecked() || ui->removeOption->isChecked() || ui->rescheduleOption->isChecked())){
            if(ui->addOption->isChecked()){
                           quest = ui->addOption->text();
                           list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
                            str1 = list[0];
                            for(int i = 2; i<list.size(); i++){
                                str3= str3 + " " + list[i];
                            }
                            ui->addButton_2->setText("Add");
                            str2 = action[0];
                            toAdd[0] = str2;
                            ui->question_label->setText(str1 + " " + str2 + " " + str3);
                    }else if(ui->removeOption->isChecked()){
                            quest = ui->removeOption->text();
                            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
                            str1 = list[0];
                            for(int i = 2; i<list.size(); i++){
                                str3= str3 + " " + list[i];
                            }
                            ui->addButton_2->setText("Remove");
                            QStringList actionName = action[0].split(" ");
                            str2 = actionName[1];
                            toRemove = str2;
                            ui->question_label->setText(str1 + " " + str2 + " " + str3);
                    }else if(ui->rescheduleOption->isChecked()){
                            quest = ui->rescheduleOption->text();
                            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
                            str1 = list[0];
                            for(int i = 2; i<list.size()-2; i++){
                                str3= str3 + " " + list[i];
                            }
                            ui->addButton_2->setText("Reschedule");
                            QStringList actionName = action[0].split(" ");
                            str2 = actionName[1];
                            str4 = actionName[0];
                            toAdd[0] = action[0];
                            ui->question_label->setText(str1 + " " + str2 + " " + str3 + " " + str4 + " " + "?");
                    }


        }else if(numChecked == 2 && ui->replaceOption->isChecked()){
            quest = ui->replaceOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            str1 = list[0];
            for(int i = 2; i<list.size()-1; i++){
                str3= str3 + " " + list[i];
            }
            ui->addButton_2->setText("Replace");
            if(!action[0].contains(":") || (action[1].contains(":"))){
                QMessageBox::warning(this,"Warning!","Please, select one action from list A and one from list B.");
            }else{
                QStringList actionName = action[0].split(" ");
                str2 = actionName[1];
                toRemove = str2;
                str4 = action[1];
                toAdd[0] = str4;
                ui->question_label->setText(str1 + " " + str2 + " " + str3 + " " + str4 + " " + "?");
            }
        }else if(numChecked == 0){
             QMessageBox::warning(this,"Error:","Please select the number of action required.");
        }else{
            QMessageBox::warning(this,"Error:","You have selected the wrong number of action for this question.");
        }
   }else{
       QMessageBox::information(this,"'List' not clicked","Please, click 'List' Button");
   }
   ui->list->clear();
   isClicked = 0;
   isClicked2++;
}



void UserQuestions::on_addButton_2_clicked() // to check
{
    if(isClicked2 > 0){


           if(ui->addButton_2->text() == "Add"){
                  compareButtonName = "Add";
                  Plan2 =Plan + "\n" +  action[numChecked-1] + "\n";  // add
                  compare = new Comparison(this);
                  compare->show();
                  this->hide();
           }else if(ui->addButton_2->text() == "Remove"){
                  compareButtonName = "Remove";
                  QStringList line = Plan.split("\n");                   //splits the text
                  int helper = 0;
                  for(int i = 0; i<line.size(); i++){
                      if(line[i] == action[0]){
                          if(i == 0){
                             Plan2 =  line[1];
                             helper = 1;
                          }
                      }else{
                          if(i == 0){
                              Plan2 = line[0];
                          }else if(i == 1){
                              if(helper == 0){
                                 Plan2 = Plan2 + "\n" + line[i];
                              }
                          }else{
                              Plan2 = Plan2 + "\n" + line[i];
                          }
                      }
                 }
                  Plan2 = Plan2 + "\n";

                  compare = new Comparison(this);
                  compare->show();
                  this->hide();
            }else if(ui->addButton_2->text() == "Reschedule"){
                  compareButtonName = "Reschedule";
                  reschedule = new RescheduleQuestion(this);
                  reschedule->show();
                  this->hide();
            }else if(ui->addButton_2->text() == "Replace"){
                  compareButtonName = "Replace";
                  QStringList line = Plan.split("\n");                   //splits the text
                  for(int i = 0; i<line.size(); i++){
                      if(i==0){
                          if(line[0] != action[0]){
                             Plan2 = line[i];
                          }else{
                             Plan2 = action[1];
                          }
                      }else{
                          if(line[i] != action[0]){
                              Plan2 = Plan2 + "\n" + line[i];
                          }else{
                              Plan2 = Plan2 + "\n" + action[1];
                          }
                      }
                     }

                  compare = new Comparison(this);
                  compare->show();
                  this->hide();

            }else{
                QMessageBox::warning(this,"Error:","Please, click 'Done' button to verify your question.");
            }

    }else{
        QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }
}
