#include "userquestions.h"
#include "ui_userquestions.h"
#include <QMessageBox>
#include <QFile>
#include "gloabal.h"
#include <QListWidgetItem>
#include <QTextStream>
#include <qlabel.h>
#include "comparison.h"
#include "rescheduleaction.h"

UserQuestions::UserQuestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserQuestions)
{
    ui->setupUi(this);
    ui->question_label->setText(" ");
    //ui->question_label0->setText(" ");
    //ui->question_label1->setText(" ");
    ui->addButton_2->setText("Complete");
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
    if(ui->addOption->isChecked() || ui->rescheduleOption->isChecked()){
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
                                linesValue[act] = word[j+1];
                                act = act + 1;
                                if(firstActionInvalid){
                                    QListWidgetItem * checkB = new QListWidgetItem(word[j+1]);
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

            }else{
                QMessageBox::information(this, "Error: ", "Are you sure that the file you uploaded is a domain file?");
            }

           numItems = act;

           file.close();
    }

    }else if(ui->removeOption->isChecked()){
        ui->list->clear();
        ui->list->addItem("A:");
        QFont f( "Arial",8);
        QStringList line = Plan.split("\n");
        for(int i = 0; i<line.size(); i++ ){
            QListWidgetItem * checkB = new QListWidgetItem(line[i]);
            checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
            checkB->setCheckState(Qt::Unchecked);
            ui->list->addItem(checkB);
            ui->list->setFont(f);
            numItems = i;
        }


    }else if(ui->replaceOption->isChecked()){
            ui->list->clear();
            ui->list->addItem("A:");
            QFont f( "Arial",8);
            QStringList line = Plan.split("\n");
            for(int i = 0; i<line.size(); i++ ){
                QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                checkB->setCheckState(Qt::Unchecked);
                ui->list->addItem(checkB);
                ui->list->setFont(f);
                numItems = i;
            }
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
                                    linesValue[act] = word[j+1];
                                    act = act + 1;
                                    if(firstActionInvalid){
                                        QListWidgetItem * checkB = new QListWidgetItem(word[j+1]);
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

                }else{
                    QMessageBox::information(this, "Error: ", "Are you sure that the file you uploaded is a domain file?");
                }

               numItems = numItems + act;

               file.close();
        }

    }


}



void UserQuestions::on_completeButton_clicked()
{
    ui->question_label->clear();
    QString part1;
    QString part2;
    QString part3;
    QString part4;
    QString quest;
    QStringList list;
    oneAction = 0;
    twoActions = 0;
    int j = 0;

    if(ui->addOption->isChecked()){
           quest = ui->addOption->text();
           list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            part1 = list[0];
            part3 = list[2] + " " + list[3] + " " + list[4] + " " + list[5]+ " " + list[6]+ " " + list[7];
            oneAction++;
            ui->addButton_2->setText("Add");
    }else if(ui->removeOption->isChecked()){
            quest = ui->removeOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            part1 = list[0];
            part3 = list[2]+ " " + list[3]+ " " + list[4] + " " + list[5]+ " " + list[6];
            oneAction++;
            ui->addButton_2->setText("Remove");
    }else if(ui->replaceOption->isChecked()){
            quest = ui->replaceOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            part1 = list[0];
            part3 = list[2]+ " " + list[3];
            twoActions++;
            ui->addButton_2->setText("Replace");
    }else if(ui->rescheduleOption->isChecked()){
            quest = ui->rescheduleOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            part1 = list[0];
            part3 = list[2]+ " " + list[3]+ " " + list[4];
            oneAction++;
            ui->addButton_2->setText("Reschedule");
    }else{
            QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
    }

    for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
                    action[j] = ui->list->item(i)->text();
                    j++;
         }
     }


    if(oneAction>twoActions){
        if(j>1){                                                                     //Reschedule with sequence
            if(ui->addButton_2->text() != "Reschedule"){
                QMessageBox::information(this,"Ops!","You have selected too many actions. You can only add one action at once.");
            }else{                                                                   //Reschedule with one action
                part2 = "SEQUENCE";
                ui->question_label->setText(part1 + " " + part2 + " " + part3);
            }
        }else{                                                                       // Add and remove with one action
             part2 = action[0];
             ui->question_label->setText(part1 + " " + part2 + " " + part3);
        }
    }else if (oneAction<twoActions){                                                 // Replace, it needs two variables
        if(j>2){
             QMessageBox::information(this,"Ops!","You have selected too many actions. You should select 2 actions.");
        }else{
            part2 = action[0];
            part4 = action[1];
            ui->question_label->setText(part1 + " " + part2 + " " + part3 + " " + part4 + " " + "?");
        }

     }
}



void UserQuestions::on_addButton_2_clicked() // to check
{

    int numChecked = 0;
    QString buttonValue  = ui->addButton_2->text();
    QString action[100];
    for(int i = 0; i<numItems-1; i++){
       bool isChecked = ui->list->item(i)->checkState();
       if(isChecked == true){
             action[numChecked] = ui->list->item(i)->text();
             numChecked++;
        }
    }

    if (numChecked == 1){
            if(buttonValue == "Add"){
                compareButtonName = "Add";
                Plan2 =Plan + action[numChecked-1];  // add
                compare = new Comparison(this);
                compare->show();
                this->hide();
            }else if(buttonValue == "Remove"){
                compareButtonName = "Remove";
                QStringList line = Plan.split("\n");                   //splits the text
                for(int i = 0; i<line.size(); i++ ){
                    if (line[i] != action[0]){
                        Plan2 = Plan2 + "\n" + line[i];
                    }
                }
                compare = new Comparison(this);
                compare->show();
                this->hide();
            } else if(buttonValue == "Reschedule"){
                reschedule = new RescheduleAction(this);
                reschedule->show();
                this->hide();
            }

    }else if(numChecked == 2){
        compareButtonName = "Remove";
        QStringList line = Plan.split("\n");                   //splits the text
        for(int i = 0; i<line.size(); i++ ){
            if (line[i] != action[0]){
                Plan2 = Plan2 + "\n" + line[i];
            }else{
                Plan2 = Plan2 + "\n" + action[1];
            }
        }

     compare = new Comparison(this);
     compare->show();
     this->hide();

    }else if(numChecked == 0){
            QMessageBox::warning(this,"Error:", "Please select an action from the list");
    }else{
            if(ui->question_label->text() == "SEQUENCE"){
                reschedule = new RescheduleAction(this);
                reschedule->show();
                this->hide();
            }else{
                QMessageBox::warning(this,"Error:", "Select only one action please. From this section you con add only one action at once");
            }
    }
}
