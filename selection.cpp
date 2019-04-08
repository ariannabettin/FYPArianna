#include "selection.h"

/*Select window lists all the plans saved by the user, in a widget list, and allow the user to manage them.
The user can cancel and rename plans and choose which one he wants to visualise.*/

Selection::Selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);
    ui->renamedPlanLabel->setText(" ");
    this->setFixedSize(800,600);

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#235d5e; color: #FFFFFF");


    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
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

        ui->NamePlanLine->setStyleSheet("background-color: #92afd3; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");

    }

    /* Code which addes check boxes dynamically. Taken from:
     * Isira (2012). Adding list of check boxes in a single widget in Qt. [Blog] stack overflow.
     Available at: https://stackoverflow.com/questions/4066023/adding-list-of-check-boxes-in-a-single-widget-in-qt.

    ! I have used this piece of code quite often during the implmentation of this window. Please refer to this citation
    when you read the following number: [1]*/
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

//Tracking bar component which links the current window with the Home window.
void Selection::on_homeButton_clicked()
{

    /*Code which opens the parent window/s based on:
     * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
     Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

     *Qt Forum. (2015). Show and hide parent window (QWidget) from child (QDialog). [online]
     Available at: https://forum.qt.io/topic/55606/show-and-hide-parent-window-qwidget-from-child-qdialog [Accessed 6 Apr. 2019].

    ! I have used this piece of code quite often during the implmentation of EACH window. The code links every window with all its
    parents. Please refer to this citation when you see the following symbol: [*].*/
    numItems = 0;
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

//Button which displays all the plans saved by the user
void Selection::on_showAllButton_clicked()
{
    /*If there is at least one plan saved, it will be displayed in the widget list.
     The list will display all the plans that the user has saved iterating through the array.*/
    saveClicked = false;
    if(k == 0){
        QMessageBox::warning(this,"Select Plans:","Ops! It looks like there are not saved plans..");
    }else{
        if(counter == 0){
            numItems = 0;
            ui->list->clear();
            for(int i = 0; i<k;i++){
                      //[1]
                      QListWidgetItem * checkB = new QListWidgetItem(plans[i]);
                      checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                      checkB->setCheckState(Qt::Unchecked);
                      ui->list->addItem(checkB);
                      counter = i;
                      numItems = numItems+1;
            }
        }else{
            //plans'name are displayed with an unchecked check box
            for(int i = counter+1; i<k;i++){
                      //[1]
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

//Button which displays the last plan saved by the user.
void Selection::on_showLastButton_clicked()
{
    //Only the last plan saved will be displayed thanks to this button. k has to be greater than 0.
    if(k == 0){
        QMessageBox::warning(this,"Select Plans:","Ops! It looks like there are not saved plans..");
    }else {
        ui->list->clear();
        //[1]
        QListWidgetItem *checkB = new QListWidgetItem(plans[k-1]);
        checkB->setCheckState(Qt::Unchecked);
        ui->list->addItem(checkB);
        counter = 0;
        numItems = 1;
    }
    numItemsConstant = numItems;
}

//Button which clears the widget list and removes all the plan displayed
void Selection::on_clearButton_clicked()
{
    counter = 0;
    numItems = 0;
    numItemsConstant = numItems;
}

//Button which deletes the plan/s selected by the user and the related source files.
void Selection::on_deleteButton_clicked()
{
    saveClicked = false;
    bool dontSave = false;

    /*Code related to the QMessageBox. Taken from:
     * Doc.qt.io. (2016). QMessageBox Class | Qt 4.8. [online]
     Available at: https://doc.qt.io/archives/qt-4.8/qmessagebox.html.*/

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

    /*If the user wants to save the plan/s, data saved in the selected position will be
     overwritten with the one in the next cell. */
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
        //Once all the data have been deleted, the widget list is updated with the remaining plans.
        QMessageBox::information(this,"Information: ","The plan selected will be deleted.");
        ui->list->clear();
        numItems = 0;
        for(int i = 0; i<k;i++){
                  //[1]
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

//Button which saves the ID of the chosen plan and opens the Visualise Window.
void Selection::on_visualiseButton_clicked()
{
    //the loop recovers the ID of the selected plan that the user wants to visualise.
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

    //if there are not saved plans, the user is warned.
    if ( k == 0){
        QMessageBox::warning(this,"Visualise Plan","Ops! It looks like there are not saved plans..");
        numItems = 0;
        QWidget *parent = this->parentWidget();
        parent->show();
        this->hide();
    }else {
        //If the user has not selected any plan, the last saved will be visualised...
        if(numChecked == 0){
            id = k-1;
            Plan = plansContent[id];
            /*Code which opens a child window taken from:
             * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
             Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

            ! I have referred to this citation quite often during the implmentation of this window.
             Please check it when you see number: [2] */
            visualise = new Visualisation(this);
            visualise->show();
            this->hide();
        }else if (numChecked == 1) {
            //...else the ID of the last saved will be stored
            numChecked = numChecked - 1;
            Plan = plansContent[id];
            //[2]
            visualise = new Visualisation(this);
            visualise->show();
            this->hide();
        }else {
            // The user can't visualise more than one plan at the same time.
            QMessageBox::warning(this,"Visualise Plan","Ops! It looks like you have selected too many plans. You can select maximum 1 plan.");            
        }
    }
}

/*Button which recovers the ID of the selected plan and replace the name assigned previously with the
new one typed in the associated edit line.*/
void Selection::on_saveButton_clicked()
{
    if(saveClicked){
        numItems = 1;
    }
    //Code which checks how many plans have been selected.
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

    /*If 0 or more than 1 plan have been selected, the user is warned, otherwise the corresponding cell of the array which
     stores plans'name is updated with the name typed by the user in the edit line.*/
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
                //[1]
                QListWidgetItem *checkB = new QListWidgetItem(plans[id]);
                checkB->setCheckState(Qt::Checked);
                ui->list->addItem(checkB);
                //The following label informs the user that he has succesfully renamed the plan.
                ui->renamedPlanLabel->setText("You have renamed '" + oldName + "' with '" + plan_name + "'");
            }
        }
    }
    saveClicked = true;
}

//Button which links the current window with the previous window, in this case Home Window.
void Selection::on_backButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
