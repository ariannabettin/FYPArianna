#include "replaceaction.h"

/*Replace is a window which allows the user to select which action from the plan should be
 removed and which action from the list of existing action should be added. */

ReplaceAction::ReplaceAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReplaceAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    this->setFixedSize(800,600);

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton_2->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->replaceButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->replaceActionsButton->setStyleSheet("background-color:#235d5e; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->existingButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
        ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    }else if(themeColor == "black"){

        ui->existingButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");

    }
    /*Code which displays the plan in the text area. Every action is displayed with its execution time
     and a check box.
     START ->*/
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty()){
            /* Code which addes check boxes dynamically. Taken from:
             * Isira (2012). Adding list of check boxes in a single widget in Qt. [Blog] stack overflow.
             Available at: https://stackoverflow.com/questions/4066023/adding-list-of-check-boxes-in-a-single-widget-in-qt.

            ! I have used this piece of code quite often during the implmentation of this window. Please refer to this citation
             when you read the following number: [1]*/
            QListWidgetItem * checkB = new QListWidgetItem(line[i]);
            checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
            checkB->setCheckState(Qt::Unchecked);
            ui->planArea->addItem(checkB);
            count++;
        }
     }
//<- END.
}

ReplaceAction::~ReplaceAction()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void ReplaceAction::on_homeButton_2_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void ReplaceAction::on_selectButton_2_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void ReplaceAction::on_visualiseButton_2_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Modify window.
void ReplaceAction::on_modifyButton_2_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

//Button which lists all the actions that have been implemeneted in the domain file.
void ReplaceAction::on_existingButton_clicked()
{
    //variable which gets value graeter than 0 when the button is clicked. Prevent the program from crashing
    isClicked++;

    //Code which reads the content of the domain file and stores it in the "text" variable
    /*Code which saves changes made on the file taken from:
     * C++ Qt 12 - QFile. (2011). [video] Directed by VoidRealms.
    https://www.youtube.com/watch?v=4Mg6bw1MmAE&t=134s: YouTube.*/
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
    //The first "if statemenet" checks if the loaded file is an actual domain. If it is not, the user is warned.
    if(text.contains("action")){
        isDomain++;
        /*If the file is a domain file, the following code splits the "text" variable in lines
        and looks for those lines which contain the word "action".*/
        if(isDomain == 1){
            QStringList line = t.split("\n");
            for(int i = 0; i<line.size(); i++ ){
                if(line[i].contains("action")){
                    QStringList word = line[i].split(" ");
                    for(int j = 0; j<word.size(); j++ ){
                        if(word[j].contains("action")){
                            /*When a line with the word "action" is found, the program displays the
                             word right after it in the widget list. The word displayed refers to the action name
                             and is associated to a check box*/
                            if(firstActionInvalid){
                                    //[1]
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

/*Button which checks that the user selects the right number of action from each list and opens
the Compare window.*/
void ReplaceAction::on_replaceActionsButton_clicked()
{
    int numChecked = 0;
    //if "Existing has been clicked...
    if(isClicked > 0){

        //Check which action the user wants to add and warns the user if more than one has been selected.
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

             //If one action from the list has been selected, check which action from the plan the user has chosen.
             // It has to be 1.
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
                         /*Code which opens a child window taken from:
                          * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
                          Available at:https://www.youtube. com/watch?v=tP70B-pdTH0*/
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

//Button which links the current window with the previous window, in this case Modify Window.
void ReplaceAction::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
