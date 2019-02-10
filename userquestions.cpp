#include "userquestions.h"
#include "ui_userquestions.h"
#include <QMessageBox>
#include <QFile>
#include "gloabal.h"
#include <QListWidgetItem>
#include <QTextStream>
#include <qlabel.h>
#include "comparison.h"

UserQuestions::UserQuestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserQuestions)
{
    ui->setupUi(this);

}

UserQuestions::~UserQuestions()
{
    delete ui;
}

void UserQuestions::on_choiceButton_clicked()
{
    QString quest;
    QStringList list;
    oneAction = 0;
    twoActions = 0;

    if(ui->addOption->isChecked()){
           quest = ui->addOption->text();
           list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
           ui->question_label->setText(list[0]);
           ui->question_label1->setText(list[2] + " " + list[3] + " " + list[4] + " " + list[5]+ " " + list[6]+ " " + list[7]);
           oneAction++;
    }else if(ui->removeOption->isChecked()){
            quest = ui->removeOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]+ " " + list[4] + " " + list[5]+ " " + list[6]);
            oneAction++;
    }else if(ui->replaceOption->isChecked()){
            quest = ui->replaceOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]);
    }else if(ui->windowOption->isChecked()){
            quest = ui->windowOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]+ " " + list[4]);
            oneAction++;
    }else if(ui->actionOption->isChecked()){
            quest = ui->actionOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]);
    }else if(ui->actionOption2->isChecked()){
            quest = ui->actionOption2->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            ui->question_label->setText(list[0]);
            ui->question_label1->setText(list[2]+ " " + list[3]);
    }else{
            QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
    }
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

    for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true && oneAction > twoActions){
                    QString action = ui->list->item(i)->text();
                    ui->question_label0->setText(action);
                    oneAction = 0;
                    twoActions = 0;
         }else if (isChecked == true && oneAction < twoActions) {
                    QString action1 = ui->list->item(i)->text();
                    ui->question_label0->setText(action);
                    ui->list->item(i)->setCheckState(Qt::Unchecked);
         }

     }
 }



void UserQuestions::on_addButton_2_clicked() // to check
{
    int numChecked;
    QString action[100];
    for(int i = 0; i<numItems-1; i++){
       bool isChecked = ui->list->item(i)->checkState();
       if(isChecked == true){
             action[i] = ui->list->item(i)->text();
             numChecked++;
        }
    }
    if (numChecked == 1){
     Plan2 =Plan;
     compare = new Comparison(this);
     compare->show();
     this->hide();
    }else{
        QMessageBox::warning(this,"Error:", "Select only one action please. From this section you con add only one action at once");
    }


}
