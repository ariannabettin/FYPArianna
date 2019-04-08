#include "addaction.h"

/*Add Action creates a window which gives the user two options. The first one allows the user
to implement a new action in the domain file, while the second one allows the user to add up to
5 existing actions to the plan.
The actions that the user can add, are all those actions that have not yet been involved in
the plan. Once the actions have been selected,the user can give them an order.*/

AddAction::AddAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
    this->setFixedSize(800,600);

    /*- The Check Icon is set up for addButton_2 -
    the Check Icon helps the user to understand which button has to be clicked once everything,
    on the current window, has been completed*/
     ui->addButton_2->setStyleSheet("background-color:#235d5e; color: #FFFFFF");

    /*Five comboboxes are initialised with values from 1 to 5. The comboxboxes will be used by
    the user for giving an order to the selected actions.*/

    /*Code related to comboboxes adapted from:
     * Herman, G. and Mateer, D. (2011). QComboBox drop-down list. [online] Stack Overflow.
     Available at: https://stackoverflow.com/questions/8417038/qcombobox-drop-down-list-set-selected-item-style.

    ! I have referred to this citation quite often during the implmentation of this window.
    Please check it when you see number: [3] */

     ui->comboBox_1->addItem("1");
     ui->comboBox_1->addItem("2");
     ui->comboBox_1->addItem("3");
     ui->comboBox_1->addItem("4");
     ui->comboBox_1->addItem("5");
     ui->comboBox_1->addItem("--");

     ui->comboBox_2->addItem("1");
     ui->comboBox_2->addItem("2");
     ui->comboBox_2->addItem("3");
     ui->comboBox_2->addItem("4");
     ui->comboBox_2->addItem("5");
     ui->comboBox_2->addItem("--");

     ui->comboBox_3->addItem("1");
     ui->comboBox_3->addItem("2");
     ui->comboBox_3->addItem("3");
     ui->comboBox_3->addItem("4");
     ui->comboBox_3->addItem("5");
     ui->comboBox_3->addItem("--");

     ui->comboBox_4->addItem("1");
     ui->comboBox_4->addItem("2");
     ui->comboBox_4->addItem("3");
     ui->comboBox_4->addItem("4");
     ui->comboBox_4->addItem("5");
     ui->comboBox_4->addItem("--");

     ui->comboBox_5->addItem("1");
     ui->comboBox_5->addItem("2");
     ui->comboBox_5->addItem("3");
     ui->comboBox_5->addItem("4");
     ui->comboBox_5->addItem("5");
     ui->comboBox_5->addItem("--");

     //Every combox has as initial value one of the five initilised
     ui->comboBox_1->setCurrentIndex(ui->comboBox_1->findText("1"));
     ui->comboBox_2->setCurrentIndex(ui->comboBox_2->findText("2"));
     ui->comboBox_3->setCurrentIndex(ui->comboBox_3->findText("3"));
     ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("4"));
     ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("5"));

     //set red colour for components of the tracking bar in the left corner of the window 
     /*Reference to the code:
      * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
      Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/

     ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->addButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

     //the themeColor value determines the theme that will be applied to the current window.
     /*Reference to the code:
      * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
      Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/

     if(themeColor == "white"){

         ui->existinButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
         ui->doneButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
         ui->newActionButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

         ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_1->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_2->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_3->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_4->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_5->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label1->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label2->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label3->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label4->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label5->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

     }else if(themeColor == "black"){

         ui->existinButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
         ui->doneButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

         ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_1->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_2->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_3->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_4->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_5->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label1->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label2->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label3->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label4->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label5->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
     }
}

AddAction::~AddAction()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void AddAction::on_homeButton_clicked()
{
    // [*]
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void AddAction::on_selectButton_clicked()
{
    numItems = 0;
    // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void AddAction::on_visualiseButton_clicked()
{
    // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Modify window.
void AddAction::on_modifyButton_clicked()
{
    // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

/*Button which opens the domainFile window.
The user can implement a new action which will be considered by the planner only for a single
session.

-> if any change is applied, the new version/copy of the domain file should be send to the planner.*/
void AddAction::on_newActionButton_clicked()
{
    /*Code which opens a child window taken from:
     * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
     Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

    ! I have referred to this citation quite often during the implmentation of this window.
    Please check it when you see number: [2] */
    file  = new domainFile(this);
    file->show();

}

/*Button which lists all the actions that have been implemented in the domain file, not yet involved
in the plan.*/
void AddAction::on_existinButton_clicked()
{
    //variable which gets value graeter than 0 when the button is clicked. Prevent the program from crashing
    isClicked++;

    QFont f( "Arial",8);

    //Code which reads the content of the domain file and stores it in the "text" variable
    /*Taken from:
     * C++ Qt 12 - QFile. (2011). [video] Directed by VoidRealms.
    https://www.youtube.com/watch?v=4Mg6bw1MmAE&t=134s: YouTube.*/
    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    int act = 0;
    int isDomain = 0;
    bool firstActionInvalid  = false;
    //The first "if statemenet" checks if the loaded file is an actual domain. If it is not, the user is warned.
    if(text.contains("action")){
        isDomain++;
        /*If the file is a domain file, the following code splits the "text" variable in lines
        and looks for those lines which contain the word "action".*/
        if(isDomain == 1){
            QStringList line = text.split("\n");
            for(int i = 0; i<line.size(); i++ ){
                if(line[i].contains("action")){
                    /*When a line with the word "action" is found, the program displays the
                     word right after it in the widget list. The word displayed refers to the action name
                     and is associated to a check box*/
                    QStringList word = line[i].split(" ");
                    for(int j = 0; j<word.size(); j++ ){
                        if(word[j].contains("action")){
                            /*Every domain file has an instance of the word "action" in the heading. This instance is not part of
                             the implementation of an action and therefore it does not preceeds an action name. In order to prevent the
                             program from listing a word which does not represents an action, I have involved a bolean variable "firstActionInvalid"
                             which skips the first instance of "action".*/
                            if(firstActionInvalid){
                                //Checks if the action name is already in the plan. If it does the action name is ignored.
                                if(!Plan.contains(word[j+1])){
                                    QListWidgetItem * checkB = new QListWidgetItem(word[j+1]);
                                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                                    checkB->setCheckState(Qt::Unchecked);
                                    ui->list->addItem(checkB);
                                    ui->list->setFont(f);
                                    act = act + 1;
                                }
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

//Button which adds the selected actions to the edit lines associated with the comboboxes.
void AddAction::on_doneButton_clicked()
{
   //variable which gets value graeter than 0 when the button is clicked. Prevent the program from crashing.
   isClicked2++;

   //checks if "exsiting" button has been clicked
   if(isClicked>0){

       //code which clears first 5 cells of action array
       for (int i = 0;i<5;i++){
           action[i]=" ";
       }
       //code which counts the number of actions selected in the widget list
        numChecked = 0;
        for(int i = 0; i<numItems; i++){
            bool isChecked = ui->list->item(i)->checkState();
            if(isChecked == true){
                        action[numChecked] = ui->list->item(i)->text();
                        numChecked++;
             }
         }

        QFont f( "Arial",8);
        /*If the number of action selected is smaller than 1 or greater than 5 the user is warned.
         * Otherwise, firts five elements of action array are displayd in the edit lines associated
           with combo boxes.*/
        if(numChecked>5){
            QMessageBox::information(this,"Error:","You can not add more than 5 actions at the same time.");
        }else if(numChecked == 0){
            QMessageBox::information(this,"Error:","Please, select at least one action");
        }else{
           ui->label1->setText(action[0]);
           ui->label1->setFont(f);
           ui->label2->setText(action[1]);
           ui->label2->setFont(f);
           ui->label3->setText(action[2]);
           ui->label3->setFont(f);
           ui->label4->setText(action[3]);
           ui->label4->setFont(f);
           ui->label5->setText(action[4]);
           ui->label5->setFont(f);

          /*Value of combo boxes varies with the number of action selected. This generates a
            default order that can be easily modified by the user.
            //[3]*/
           if(numChecked == 1){
               ui->comboBox_2->setCurrentIndex(ui->comboBox_2->findText("--"));
               ui->comboBox_3->setCurrentIndex(ui->comboBox_3->findText("--"));
               ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("--"));
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }else if(numChecked == 2){
               ui->comboBox_3->setCurrentIndex(ui->comboBox_3->findText("--"));
               ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("--"));
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }else if(numChecked == 3){
               ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("--"));
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }else if(numChecked == 4){
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }

        }

    }else{
             QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }

}


//Button which checks if every data required has been provided correctly and opens the Compare window.
void AddAction::on_addButton_2_clicked()
{
    /*if both, "existing" and "done" buttons have been clicked at least once, the values
    of the comboboxes (different from "--") are inserted in valuesArray. Even the name of the selected action are
    inserted in the corresponding cell of the actionArray */
    if(isClicked>0 && isClicked2 > 0){

        bool doubleIndex = false;
        bool wrongIndex = false;

        //[3]
        QString val1 = ui->comboBox_1->currentText();
        QString val2 = ui->comboBox_2->currentText();
        QString val3 = ui->comboBox_3->currentText();
        QString val4 = ui->comboBox_3->currentText();
        QString val5 = ui->comboBox_3->currentText();

        QString actionArray[5]={ui->label1->text(),ui->label2->text(),ui->label3->text(),ui->label4->text(),ui->label5->text()};
        QString valuesArray[5] ={val1,val2,val3,val4,val5};

        /*This loop checks if the same position has been assigned twice. If the doubleIndex
         variable is true, it means that the user has given the actions a wrong order.*/
        for (int i = 0; i<valuesArray->size();i++){
            for (int j = 0;j<valuesArray->size();j++){
                if(valuesArray[i] == valuesArray[k]){
                    doubleIndex = true;
                }
            }
        }
        //If doubleInddex remains false, action are added following the given order to the toAdd array.
        if(!doubleIndex){
            for(int i = 0;i<numChecked;i++){
                QString index = QString::number(i+1);
                for(int k = 0; k < numChecked; k++){
                    if(valuesArray[k] == index){
                          toAdd[i]=actionArray[k];
                       }
                 }
            }
         /*If the user has assigned a wrong position which exceeds the number of action selecetd, a cell of the
          toAdd array will reamin empty. Thanks to the following loop, the program checks if any mistake about the
          position has been made and warns the user*/
           for(int i = 0; i<numChecked; i++){
               if(toAdd[i].isEmpty()){
                   wrongIndex = true;
               }
            }

           //If everything looks fine, the compare window is opened, otherwise, the user is warned.
            if(!wrongIndex){

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//               Not part of the interface, I will use this for the presentation
//This part of the code simply adds the action selected to the original plan. It emulates what the planner should do.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                Plan2 =Plan;

                    QStringList a = Plan2.split("\n");
                    for(int i = 0; i<4; i++){
                        if(i == 0){
                            Plan2 = a[0];
                        }else{
                            Plan2 = Plan2 + "\n"+ a[i];
                        }
                    }
                    for(int i = 0; i< 1; i++){
                                Plan2 = Plan2 + "\n" + toAdd[i];
                        }
                    for(int i = 4; i<7; i++){
                        if(i == 0){
                            Plan2 = a[0];
                        }else{
                            Plan2 = Plan2 + "\n"+ a[i];
                        }
                    }
                    for(int i = 1; i< numChecked; i++){
                                Plan2 = Plan2 + "\n" + toAdd[i];
                        }
                    for(int i = 7; i<a.size(); i++){
                            if(i == 0){
                                Plan2 = a[0];
                            }else{
                                Plan2 = Plan2 + "\n"+ a[i];
                            }
                        }
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

                    Plan2 = Plan2 + "\n";

                    compareButtonName = "Add";
                    //[2]
                    compare = new Comparison(this);
                    compare->show();
                    this->hide();
               }else{
                    QMessageBox::warning(this,"Error:","You have assigned a wrong position");
               }

        }else{
            QMessageBox::warning(this,"Error:","You have assigned the same position twice.");
        }
      }else{
        if(isClicked == 0){
            QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
        }else if(isClicked2 == 0){
            QMessageBox::warning(this,"Error","You forgot to click 'Done'");
        }else if(isClicked == 0 && isClicked2 == 0){
            QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
        }

      }
}

//Button which links the current window with the previous window, in this case Modify Window.
void AddAction::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();

}
