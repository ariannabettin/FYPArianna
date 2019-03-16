#include "selection.h"


Selection::Selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);
    ui->renamedPlanLabel->setText(" ");

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("border-image:url(checkIcon.jpeg);");

    if(themeColor == "white"){

        ui->saveButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->showAllButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->showLastButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->deleteButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->clearButton->setStyleSheet("background-color:#25245e; color: #FFFFFF");

        ui->NamePlanLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
        ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");


    }else if(themeColor == "black"){


        ui->saveButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->showAllButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->showLastButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->deleteButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->clearButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->NamePlanLine->setStyleSheet("background-color: #6b7a8c; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");

    }


    for(int i = 0; i<k;i++){
              QListWidgetItem * checkB = new QListWidgetItem(plans[i]);
              checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
              checkB->setCheckState(Qt::Unchecked);
              ui->list->addItem(checkB);
              numItems = numItems+1;
    }

}


Selection::~Selection()
{
    delete ui;
}


void Selection::on_homeButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void Selection::on_showAllButton_clicked()
{
    saveClicked = false;
    if(k == 0){
        QMessageBox::warning(this,"Select Plans:","Ops! It looks like there are not saved plans..");
    }else{
        if(counter == 0){
            numItems = 0;
            ui->list->clear();
            for(int i = 0; i<k;i++){
                      QListWidgetItem * checkB = new QListWidgetItem(plans[i]);
                      checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                      checkB->setCheckState(Qt::Unchecked);
                      ui->list->addItem(checkB);
                      counter = i;
                      numItems = numItems+1;
            }
        }else{
            for(int i = counter+1; i<k;i++){
                      QListWidgetItem *checkB = new QListWidgetItem(plans[i]);
                      checkB->setCheckState(Qt::Unchecked);
                      ui->list->addItem(checkB);
                      counter = i;
                      numItems = numItems+1;
            }
        }
    }
    counter = 0;
    numItemsConstant = numItems;

}


void Selection::on_showLastButton_clicked()
{
    if(k == 0){
        QMessageBox::warning(this,"Select Plans:","Ops! It looks like there are not saved plans..");
    }else {
        ui->list->clear();
        QListWidgetItem *checkB = new QListWidgetItem(plans[k-1]);
        checkB->setCheckState(Qt::Unchecked);
        ui->list->addItem(checkB);
        counter = 0;
        numItems = 1;
    }
    numItemsConstant = numItems;
}


void Selection::on_clearButton_clicked()
{
    counter = 0;
    numItems = 0;
    numItemsConstant = numItems;
}


void Selection::on_deleteButton_clicked()
{
    saveClicked = false;
    bool dontSave = false;
    QMessageBox deleteMsgBox;
    if(themeColor == "white"){
       deleteMsgBox.setStyleSheet("background-color: #f1f2ed;color: #282827");
    }else{
       deleteMsgBox.setStyleSheet("background-color: #3E4C5E;color: #FFFFFF");
    }
    deleteMsgBox.setInformativeText("Are you sure you want to cancel the selcted plan/s?");
    deleteMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    deleteMsgBox.setDefaultButton(QMessageBox::No);
    int answer =  deleteMsgBox.exec();

    switch (answer) {
      case QMessageBox::Yes:
          dontSave = true;
          break;
      case QMessageBox::No:
          dontSave = false;
          break;
    }

    if(dontSave){

        for(int i = 0; i<numItems; i++){
            bool isChecked = ui->list->item(i)->checkState();
            if(isChecked == true){
                  for(int idx = 0; idx<k; idx++){
                    if (plans[idx] == ui->list->item(i)->text()){
                        plans[idx] = plans[idx+1];
                        domains[idx] = domains[idx+1];
                        problems[idx]= problems[idx+1];
                        k = k-1;
                        for (int idx2 = idx+1; idx2 < k; idx2++ ){
                              plans[idx2] = plans[idx2+1];
                              domains[idx2] = domains[idx2+1];
                              problems[idx2]= problems[idx2+1];

                        }
                    }
                }
           }
        }
        QMessageBox::information(this,"Information: ","The plan selected will be deleted.");
        ui->list->clear();
        numItems = 0;
        for(int i = 0; i<k;i++){
                  QListWidgetItem * checkB = new QListWidgetItem(plans[i]);
                  checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                  checkB->setCheckState(Qt::Unchecked);
                  ui->list->addItem(checkB);
                  counter = i;
                  numItems = numItems+1;
        }
         numItemsConstant = numItems;
         dontSave = false;
    }else{
      QMessageBox::information(this,"Information:","Nothing has been deleted.");
    }
}


void Selection::on_visualiseButton_clicked()
{
    numChecked = 0;
    for(int i = 0; i<numItemsConstant; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
            for(int z = 0; z<k; z++){
                if (plans[z] == ui->list->item(i)->text()){
                    IDs[numChecked] = z;
                    numChecked ++;
                 }
            }
        }
    }
    ui->list->clear();


    if ( k == 0){
        QMessageBox::warning(this,"Visualise Plan","Ops! It looks like there are not saved plans..");
        numItems = 0;
        QWidget *parent = this->parentWidget();
        parent->show();
        this->hide();
    }else {
        if(numChecked == 0){
            id = k-1;
            Plan = plansContent[id];
            visualise = new Visualisation(this);
            visualise->show();
            this->hide();
        }else if (numChecked == 1) {
            numChecked = numChecked - 1;
            Plan = plansContent[id];
            visualise = new Visualisation(this);
            visualise->show();
            this->hide();
        }else {
            QMessageBox::warning(this,"Visualise Plan","Ops! It looks like you have selected too many plans. You can select maximum 1 plan.");            
        }
    }
}


void Selection::on_saveButton_clicked()
{
    if(saveClicked){
        numItems = 1;
    }
    int d = 0;
    for(int i = 0; i<numItems; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
            for(int z = 0; z<k; z++){
                //QMessageBox::information(this,"a",plans[z]+" "+ ui->list->item(i)->text());
                if (plans[z] == ui->list->item(i)->text()){
                    IDs[d] = z;
                    d = d +1;
                 }
            }
        }
    }
    id = IDs[d];
    if(d == 0){
        QMessageBox::warning(this,"Rename plan error:", "You need to choose a plan from the list.");
    }else if (d>1){
        QMessageBox::warning(this,"Rename plan error:", "You need to select only one plan from the list.");
    }else{
        QString plan_name = ui->NamePlanLine->text();
        int counter = 0;                                       // used to check if the name given to the plan is unique
        if( ui->NamePlanLine->text().isEmpty()) {
            QMessageBox::warning(this,"Give your plan a title:","Ops! You need to give a title to the plan. ");
        } else {
            for (int i = 0; i<k; i++){
                if(plan_name == plans[i]){
                   QMessageBox::warning(this,"Give your plan a title:","Ops! You have already used this name for a plan ");
                   counter = counter + 1;                       //if it is not, the counter increases
                }
            }
            if(counter == 0){                                   // if the counter is == 0, the name is saved
                QString oldName = plans[id];
                plans[id] = plan_name;
                ui->list->clear();
                QListWidgetItem *checkB = new QListWidgetItem(plans[id]);
                checkB->setCheckState(Qt::Checked);
                ui->list->addItem(checkB);
                ui->renamedPlanLabel->setText("You have renamed '" + oldName + "' with '" + plan_name + "'");
            }
        }
    }
    saveClicked = true;
}

void Selection::on_backButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
