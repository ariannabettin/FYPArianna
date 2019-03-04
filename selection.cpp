#include "selection.h"
#include "ui_selection.h"
#include "gloabal.h"
#include "visualisation.h"
#include <QMessageBox>
#include <QListWidgetItem>


Selection::Selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);
    ui->renamedPlanLabel->setText(" ");

    QPixmap pixmap1("binIcon.jpeg");
    QIcon ButtonIcon1(pixmap1);
    ui->deleteButton->setIcon(ButtonIcon1);
    ui->deleteButton->setIconSize(QSize(25, 25));

    QPixmap pixmap2("clearIcon.jpeg");
    QIcon ButtonIcon2(pixmap2);
    ui->clearButton->setIcon(ButtonIcon2);
    ui->clearButton->setIconSize(QSize(25, 25));

    QPixmap pixmap3("doneIcon.png");
    QIcon ButtonIcon3(pixmap3);
    ui->visualiseButton->setIcon(ButtonIcon3);
    ui->visualiseButton->setIconSize(QSize(35, 45));
}

Selection::~Selection()
{
    delete ui;
}

void Selection::on_showAllButton_clicked()
{
    if(k == 0){
        QMessageBox::warning(this,"Select Plans:","Ops! It looks like there are not saved plans..");
    }else{
        if(counter == 0){
            numItems = 0;
            ui->list->clear();
            for(int i = 0; i<k;i++){
                      QListWidgetItem * checkB = new QListWidgetItem(plans[i]);    // Add checked boxes with all the plans stored in the array, if the list widget is empty
                      checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                      checkB->setCheckState(Qt::Unchecked);
                      ui->list->addItem(checkB);
                      counter = i;
                      numItems = numItems+1;
            }
        }else{
            for(int i = counter+1; i<k;i++){
                      QListWidgetItem *checkB = new QListWidgetItem(plans[i]);     // Add checked boxes with the remaining plans stored in the array, which are not already listed
                      checkB->setCheckState(Qt::Unchecked);
                      ui->list->addItem(checkB);
                      counter = i;
                      numItems = numItems+1;
            }
        }
    }
    counter = 0;

}



void Selection::on_showLastButton_clicked()
{
    if(k == 0){
        QMessageBox::warning(this,"Select Plans:","Ops! It looks like there are not saved plans..");
    }else {
        ui->list->clear();
        QListWidgetItem *checkB = new QListWidgetItem(plans[k-1]);                  // Shows only the last plan added, the one with index k-1
        checkB->setCheckState(Qt::Unchecked);
        ui->list->addItem(checkB);
        counter = 0;
        numItems = 1;
    }
}

void Selection::on_clearButton_clicked()
{
    counter = 0;                                                                   // As the button "Clear" clears the list widget, both "counter" and "numItem" are set on 0.
    numItems = 0;
}



void Selection::on_deleteButton_clicked()
{
    QMessageBox::warning(this,"Warning!","The plans selected will be deleted!");

    for(int i = 0; i<numItems; i++){
        bool isChecked = ui->list->item(i)->checkState();                         // check which check boxes are checked
        if(isChecked == true){                                                  // if one is checked
            for(int idx = 0; idx<k; idx++){
                if (plans[idx] == ui->list->item(i)->text()){                     // check if text of check box is equal to one of the plan names store in the array
                    plans[idx] = plans[idx+1];                                  // overwrite the selected plan name, domain path and problem path with the data stored in the next cell
                    domains[idx] = domains[idx+1];
                    problems[idx]= problems[idx+1];
                    k = k-1;                                                    // decrease number of elements stored
                    for (int idx2 = idx+1; idx2 < k; idx2++ ){
                          plans[idx2] = plans[idx2+1];                          // shift all other elements of the arrays
                          domains[idx2] = domains[idx2+1];
                          problems[idx2]= problems[idx2+1];

                    }
                }
            }
       }
    }
    ui->list->clear();                                                             //clear the widget list
    numItems = 0;
    for(int i = 0; i<k;i++){
              QListWidgetItem * checkB = new QListWidgetItem(plans[i]);          // Add checked boxes with all the remaining plans stored in the array
              checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
              checkB->setCheckState(Qt::Unchecked);
              ui->list->addItem(checkB);
              counter = i;
              numItems = numItems+1;
    }
}




void Selection::on_visualiseButton_clicked()
{
    j = 0;
    for(int i = 0; i<numItems; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
            for(int z = 0; z<k; z++){
                if (plans[z] == ui->list->item(i)->text()){
                    IDs[j] = z;
                    j = j +1;
                 }
            }
        }
    }

    if ( k == 0){
        QMessageBox::warning(this,"Visualise Plan","Ops! It looks like there are not saved plans..");
        QWidget *parent = this->parentWidget();
        parent->show();
        this->hide();
    }else {
        if(j == 0){
            Plan = plansContent[k-1];
            id = k-1;
            visualise = new Visualisation(this);
            visualise->show();
            this->hide();
        }else if (j == 1) {
            j = j - 1;                                                          //if there is only one plan selected open the visualisation window.
            id = IDs[0];
            Plan = plansContent[id];
            visualise = new Visualisation(this);
            visualise->show();
            this->hide();
        }else {                                                                 // if more than 1 warn the user
            QMessageBox::warning(this,"Visualise Plan","Ops! It looks like you have selected too many plans. You can select maximum 1 plan.");
            j = 0;
        }
    }
}


void Selection::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();

}

void Selection::on_saveButton_clicked()
{
    int d = 0;
    for(int i = 0; i<numItems; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
            for(int z = 0; z<k; z++){
                QMessageBox::information(this,"a",plans[z]+" "+ ui->list->item(i)->text());
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
                QListWidgetItem *checkB = new QListWidgetItem(plans[id]);                  // Shows only the last plan added, the one with index k-1
                checkB->setCheckState(Qt::Checked);
                ui->list->addItem(checkB);
                ui->renamedPlanLabel->setText("You have renamed '" + oldName + "' with '" + plan_name + "'");
            }
        }
    }
}
