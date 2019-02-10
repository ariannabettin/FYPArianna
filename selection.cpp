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
            QMessageBox::warning(this,"Visualise Plan","Ops! It looks like there are not selected plans..");
        }else if (j == 1) {
            j = j - 1;                                                          //if there is only one plan selected open the visualisation window.
            id = IDs[0];
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
