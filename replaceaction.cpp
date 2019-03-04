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
        QListWidgetItem * checkB = new QListWidgetItem(line[i]);
        checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
        checkB->setCheckState(Qt::Unchecked);
        ui->planArea->addItem(checkB);

     }
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
    isClicked++;

    QFont f( "Arial",8);
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

}


void ReplaceAction::on_replaceActionsButton_clicked()
{
    if(isClicked > 0){
        int numChecked = 0;
         for(int i = 0; i<numItems-1; i++){
            bool isChecked = ui->list->item(i)->checkState();
            if(isChecked == true){
                  action[numChecked] = ui->list->item(i)->text();
                  numChecked++;
             }
         }

         if(numChecked>1){
             QMessageBox::information(this,"Error:","You can select only one action at once. Only the first action selected will be added.");
         }

         toAdd[0] = action[0];

         for(int i = 0; i<numItems-1; i++){
            bool isChecked = ui->planArea->item(i)->checkState();
            if(isChecked == true){
                  action[numChecked] = ui->planArea->item(i)->text();
                  numChecked++;
             }
         }

         if(numChecked>2){
             QMessageBox::information(this,"Error:","You can select only one action at once. Only the first action selected will be removed.");
         }

         toRemove = action[1];

         QStringList line = Plan.split("\n");
         for(int i = 0; i<line.size(); i++){
             if(ui->planArea->item(i)->text() != toRemove){
                 Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
             }else{
                 Plan2 = Plan2 + "\n" + toAdd[0];
             }
        }

        compareButtonName = "Replace";
        compare = new Comparison(this);
        compare->show();
        this->hide();
    }else{
        QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }

}


