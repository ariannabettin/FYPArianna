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
    ui->planArea->setText(Plan);
}

ReplaceAction::~ReplaceAction()
{
    delete ui;
}




void ReplaceAction::on_valButton_clicked()
{
    //external validator
}



void ReplaceAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}



void ReplaceAction::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void ReplaceAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void ReplaceAction::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void ReplaceAction::on_existingButton_clicked()
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
      numItems = actions;
}



void ReplaceAction::on_doneButton_clicked()
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
        // uncheck checked boxes

     }
     if (numChecked == 1){
         QTextCursor cur = ui->planArea->textCursor();
         cur.insertText(action[0]);
     }else{
         QMessageBox::warning(this,"Replace","You should select one action at once");
     }
}

void ReplaceAction::on_planArea_selectionChanged()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.removeSelectedText();
}

void ReplaceAction::on_replaceActionsButton_clicked()
{
    Plan2 = ui->planArea->toPlainText();
    compareButtonName = "Replace";
    compare = new Comparison(this);
    compare->show();
    this->hide();
}

void ReplaceAction::on_restoreButton_clicked()
{
    ui->planArea->setText(Plan);
}
