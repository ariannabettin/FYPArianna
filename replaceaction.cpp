#include "replaceaction.h"


ReplaceAction::ReplaceAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReplaceAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    this->setFixedSize(800,600);

    ui->homeButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->replaceButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    ui->replaceActionsButton->setStyleSheet("border-image:url(checkIcon.jpeg);");

    if(themeColor == "white"){

        ui->existingButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
        ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    }else if(themeColor == "black"){

        ui->existingButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");

    }

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


void ReplaceAction::on_homeButton_2_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void ReplaceAction::on_selectButton_2_clicked()
{
    numItems = 0;
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
                                    QListWidgetItem * checkB = new QListWidgetItem(word[j+1]);
                                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                                    checkB->setCheckState(Qt::Unchecked);
                                    ui->list->addItem(checkB);
                                    act = act + 1;
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
             QStringList toRemovePt2 = toRemove.split(" ");

             if(toRemovePt2[1] == toAdd[0]){
                 QMessageBox::information(this,"Error:","With the actions you have selected, the same action will be removed from the plan and then added again.");
             }else{

                 if(numChecked == 0){
                     QMessageBox::information(this,"Error:","You need to select the action that you want to replace.");
                 }else if(numChecked!=2){
                     QMessageBox::information(this,"Error:","You can select only one action at once from each list.");
                 }else{

    //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
    //              Not part of the interface, I will use this for the presentaction
    //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

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
    //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

                         count = 0;
                         compareButtonName = "Replace";
                         compare = new Comparison(this);
                         compare->show();
                         this->hide();
                    }
              }
         }

      }else{
        QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }

}


void ReplaceAction::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
