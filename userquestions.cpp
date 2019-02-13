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
    ui->question_label0->setText(" ");
    ui->question_label1->setText(" ");
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
            QStringList line = t.split(QRegExp(" "),QString::SkipEmptyParts);
            for(int i = 0; i<line.size(); i++ ){
              if(line[i].contains("action")){
                linesValue[act] = line[i+1];
                act = act + 1;
                if(firstActionInvalid){
                    QListWidgetItem * checkB = new QListWidgetItem(line[i+1]);
                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                    checkB->setCheckState(Qt::Unchecked);
                    ui->list->addItem(checkB);
                    ui->list->setFont(f);
                }
                firstActionInvalid = true;
              }
            }
        }else{
            QMessageBox::information(this, "Error: ", "Are you sure that the file you uploaded is a domain file?");
        }

       numItems = act;

       file.close();
}
}

void UserQuestions::on_completeButton_clicked()
{
    ui->question_label->clear();
    ui->question_label0->clear();
    ui->question_label1->clear();
    ui->question_label2->clear();
    ui->question_label3->clear();
    QString quest;
    QStringList list;
    oneAction = 0;
    twoActions = 0;
    int j = 0;

    if(ui->addOption->isChecked()){
           quest = ui->addOption->text();
           list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2] + " " + list[3] + " " + list[4] + " " + list[5]+ " " + list[6]+ " " + list[7]);
            oneAction++;
            ui->addButton_2->setText("Add");
    }else if(ui->removeOption->isChecked()){
            quest = ui->removeOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]+ " " + list[4] + " " + list[5]+ " " + list[6]);
            oneAction++;
            ui->addButton_2->setText("Remove");
    }else if(ui->replaceOption->isChecked()){
            quest = ui->replaceOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]);
            twoActions++;
            ui->addButton_2->setText("Replace");
    }else if(ui->rescheduleOption->isChecked()){
            quest = ui->rescheduleOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]+ " " + list[4]);
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
        if(j>1){
            if(ui->addButton_2->text() != "Reschedule"){
                QMessageBox::information(this,"Ops!","You have selected too many actions. You can only add one action at once.");
            }else{
               ui->question_label0->setText("SEQUENCE");
            }
        }else{
             ui->question_label0->setText(action[0]);
        }
    }else if (oneAction<twoActions){
        if(j>2){
             QMessageBox::information(this,"Ops!","You have selected too many actions. You should select 2 actions.");
        }else{
             ui->question_label0->setText(action[0]);
             ui->question_label2->setText(action[1]);
             ui->question_label3->setText("?");
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
                Plan2 =Plan + action[numChecked-1];  // add
            }else if(buttonValue == "Remove"){
                QStringList line = Plan.split(QRegExp(" "),QString::SkipEmptyParts);                     //splits the text
                for(int i = 0; i<line.size(); i++ ){
                    if (!line[i].contains(action[0])){
                        Plan2 = Plan2 + " " + line[i];
                    }
                }
            } else if(buttonValue == "Reschedule"){
                reschedule = new RescheduleAction(this);
                reschedule->show();
                this->hide();
           }
            compare = new Comparison(this);
            compare->show();
            this->hide();
    }else if(numChecked == 2){
            if (buttonValue == "Replace"){
                QString A = action[0];
                QString B = action[1];
                QStringList line = Plan.split(QRegExp(" "),QString::SkipEmptyParts); //[\r\n\t ]+
                for(int i = 0; i<line.size(); i++ ){
                    if(line[i].contains(A)){
                        QStringList line2 = line[i].split(QRegExp("[\r\n\t ]+"),QString::SkipEmptyParts);
                        for(int j = 0; j<line2.length();j++)
                        {
                            if(line2[j].contains("0") || line2[j].contains("1")){
                                 Plan2 = Plan2 + "\n" + line2[j];
                            }else{
                                 Plan2 = Plan2 + " " + B;
                            }
                        }

                    }else{
                         QStringList line2 = line[i].split(QRegExp("[\r\n\t ]+"),QString::SkipEmptyParts);
                         for(int j = 0; j<line2.length();j++)
                         {
                            if(line2[j].contains("0") || line2[j].contains("1")){
                                  Plan2 = Plan2 + "\n" + line2[j];
                             }else{
                                  Plan2 = Plan2 + " " + line2[j];
                             }
                         }
                    }
               }
            }else if(ui->question_label0->text() == "SEQUENCE"){
                reschedule = new RescheduleAction(this);
                reschedule->show();
                this->hide();
            }
            compare = new Comparison(this);
            compare->show();
            this->hide();
     }else if(numChecked == 0){
            QMessageBox::warning(this,"Error:", "Please select an action from the list");
    }else{
            if(ui->question_label0->text() == "SEQUENCE"){
                reschedule = new RescheduleAction(this);
                reschedule->show();
                this->hide();
            }else{
                QMessageBox::warning(this,"Error:", "Select only one action please. From this section you con add only one action at once");
            }
    }
}
