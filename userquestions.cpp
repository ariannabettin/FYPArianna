#include "userquestions.h"

/*Window which lists the operations available to the user, ADD, REMOVE, REPLACE and RESCHEDULE,
using questions. In this way, for users with less knowledge in planning will be easier to understand
which operations suits better their doubts.*/

UserQuestions::UserQuestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserQuestions)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
    ui->question_label->setText(" ");
    ui->addButton_2->setText("Complete");
    route = 1;
    secondClick = true;

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->questionsButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->doneButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->completeButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->addButton_2->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->frame_2->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->doneButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->completeButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->addButton_2->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;");
        ui->frame->setStyleSheet("background-color: #92afd3; color: #000000;");
        ui->frame_2->setStyleSheet("background-color: #92afd3; color: #000000;");

    }

}

UserQuestions::~UserQuestions()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void UserQuestions::on_homeButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void UserQuestions::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void UserQuestions::on_visualiseButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

//Button which list actions in the widget list, basing the decision on the question selected.
// Value that appears on the window:"List".
void UserQuestions::on_doneButton_clicked()
{
    //list the actions in the list area
    isClicked ++;
    isClicked2++;

    /*If the first question is selected, the program will use the code implemented for Add Action Wndow
    which lists all those actions which have been implemented in the domain file but which have not been
    involved in the plan.*/
    if(ui->addOption->isChecked()){
        ui->statementLabel->setText("Choose action A:");
        ui->list->clear();
        ui->list->addItem("A:");
        QFont f( "Arial",4);
        /*Code which saves changes made on the file taken from:
         * C++ Qt 12 - QFile. (2011). [video] Directed by VoidRealms.
        https://www.youtube.com/watch?v=4Mg6bw1MmAE&t=134s: YouTube.

        ! I have referred to this citation quite often during the implmentation of this window.
        Please check it when you see number: [4]*/
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
                QStringList line = t.split("\n");
                for(int i = 0; i<line.size(); i++ ){
                    if(line[i].contains("action")){
                        QStringList word = line[i].split(" ");
                        for(int j = 0; j<word.size(); j++ ){
                            if(word[j].contains("action")){
                                if(firstActionInvalid){
                                    if(!Plan.contains(word[j+1])){
                                        /* Code which addes check boxes dynamically. Taken from:
                                         * Isira (2012). Adding list of check boxes in a single widget in Qt. [Blog] stack overflow.
                                         Available at: https://stackoverflow.com/questions/4066023/adding-list-of-check-boxes-in-a-single-widget-in-qt.

                                        ! I have used this piece of code quite often during the implmentation of this window. Please refer to this citation
                                        when you read the following number: [1]*/
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
    /*If the question selected are Question 2 and 4, which refer to REMOVE and RESCHEDULE operations, the program
    uses the code implemented for Remove Action and Reschedule Action. The following piece of code lists all the action
    involved in the plan with the related times. */
    }else if(ui->removeOption->isChecked()  || ui->rescheduleOption->isChecked()){
        ui->statementLabel->setText("Choose action A:");
        ui->list->clear();
        ui->list->addItem("A:");
        QFont f( "Arial",4);
        QStringList line = Plan.split("\n");
        for(int i = 0; i<line.size(); i++ ){
            if(!line[i].isEmpty() || line[i] == " "){
                //[1]
                QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                checkB->setCheckState(Qt::Unchecked);
                ui->list->addItem(checkB);
                ui->list->setFont(f);
                numItems = i;
            }
        }
        numItems = numItems+1;
    /*If the user selects the third question (REPLACE), the program needs to display 2 lists. The first
    list is the one produced by the code used for question 2 and 4, while the second one is the
    list obtained by the code used for question 1.
    The program also uses a bool variable which checks which list should be displayed. If the
    1. If the variable is true, the program will display the list of action to remove.
    2. If the variable is false, the program will displa the list of action to add.*/
    }else if(ui->replaceOption->isChecked()){
       if(secondClick){
            ui->statementLabel->setText("Choose action A:");
            ui->list->clear();
            ui->list->addItem("A:");
            QFont f( "Arial",8);
            QStringList line = Plan.split("\n");
            for(int i = 0; i<line.size(); i++ ){
                if(!line[i].isEmpty() || line[i] == " "){
                    //[1]
                    QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                    checkB->setCheckState(Qt::Unchecked);
                    ui->list->addItem(checkB);
                    numItems = i;
                }
            }
            numItems = numItems+1;
            secondClick = false;
    }else if(!secondClick){
                 ui->statementLabel->setText("Choose action B:");
                ui->list->addItem("B:");
                //[4]
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
                        QStringList line = t.split("\n");
                        for(int i = 0; i<line.size(); i++ ){
                            if(line[i].contains("action")){
                                QStringList word = line[i].split(" ");
                                for(int j = 0; j<word.size(); j++ ){
                                    if(word[j].contains("action")){
                                        if(firstActionInvalid){
                                                //[1]
                                                QListWidgetItem * checkB = new QListWidgetItem(word[j+1]);
                                                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                                                checkB->setCheckState(Qt::Unchecked);
                                                ui->list->addItem(checkB);
                                                //ui->list->setFont(f);
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
                secondClick = true;
            }

    }else{
        QMessageBox::information(this,"List of Action:","According to your question, the list of actions available will be different. Please, select the question first.");
    }


}

//Button which generates the final question integrating actions chosen by the user.
// Value that appears on the window:"Done".
void UserQuestions::on_completeButton_clicked()
{
    //If "List" button has been clicked the second button works, otherwise the user is warned.
   if(isClicked > 0){
        ui->question_label->clear();
        QString str1;
        QString str3;

        QString quest;
        QStringList list;
        oneAction = 0;
        twoActions = 0;

        numChecked = 0;
        //First loop checks how many actions the user has selected and stores them in the support array.
        for(int i = 0; i<numItems+1; i++){
            bool isChecked = ui->list->item(i)->checkState();
            if(isChecked == true){
                        action[numChecked] = ui->list->item(i)->text();
                        numChecked++;
             }
         }

        /*In any of the following options the text of the question selected by the user is split in two parts.
        The word "Why" is stored in "str1", the second and third word "action A" is replaced with the action chosen
        by the user, while the third string store the remaining words.

        The three strings initialised are then displayed in the "question_label".
        In this way the user will be able to read the question with the chosen action integrated. */
        if(numChecked == 1 && (ui->addOption->isChecked() || ui->removeOption->isChecked() || ui->rescheduleOption->isChecked())){
            if(ui->addOption->isChecked()){
                           quest = ui->addOption->text();
                           list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
                            str1 = list[0];
                            for(int i = 3; i<list.size(); i++){
                                str3= str3 + " " + list[i];
                            }
                            /*!! The button which sends data to the planner changes its value with the question selected.
                            If the selected question is the one that refers to ADD, the value displayed on the button
                            will be "Add".
                            -> The following line of code performs what described above. The same operation is repeated
                            for every question.*/
                            ui->addButton_2->setText("Add");
                            str2 = action[0];
                            toAdd[0] = str2;
                            ui->question_label->setText(str1 + " " + str2 + " " + str3);
                    }else if(ui->removeOption->isChecked()){
                            quest = ui->removeOption->text();
                            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
                            str1 = list[0];
                            for(int i = 3; i<list.size(); i++){
                                str3= str3 + " " + list[i];
                            }
                            ui->addButton_2->setText("Remove");
                            /*!!  When both the action name and the time are displayed and selected, there is the need to split the string in two parts.
                            Thanks to this operation, the question will display only the action name and will produce a nicer result.
                            ->The following lines perform the operation descibed above. The same operation is repated for Reschedule and Replace.*/
                            QStringList actionName = action[0].split(" ");
                            if(actionName.size() == 1){
                                QMessageBox::warning(this,"Error:","Probably you have selected an action from the wrong list. Please, click 'List' button again");
                            }else{
                                str2 = actionName[1];
                                toRemove = str2;
                                ui->question_label->setText(str1 + " " + str2 + " " + str3);
                            }
                     /*For the last question, reschedule, there is a small variation which also adds the time at which
                      the action has been executed. Indeed, in this case, not only "actionA" is replaced, but also the word "time", which
                       gets the value that represents the execution time*/
                    }else if(ui->rescheduleOption->isChecked()){
                            secondClick = false;
                            quest = ui->rescheduleOption->text();
                            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
                            str1 = list[0];
                            for(int i = 3; i<list.size()-2; i++){
                                str3= str3 + " " + list[i];
                            }
                            ui->addButton_2->setText("Reschedule");
                            QStringList actionName = action[0].split(" ");
                            if(actionName.size() == 1){
                                QMessageBox::warning(this,"Error:","Probably you have selected an action from the wrong list. Please, click 'List' button again");
                            }else{
                                str2 = actionName[1];
                                str4 = actionName[0];
                                toAdd[0] = action[0];
                                ui->question_label->setText(str1 + " " + str2 + " " + str3 + " " + str4 + " " + "?");
                            }
                    }

        /*The third question requires a small variation too.In this case,as the question requires two actions,
         the program needs to integrate two elements instead of one. One action will replace "action A", while
         the second action will replace "action B".
         The code uses the same boolean variable created for the button which lists actions.*/
        }else if(numChecked == 1 && ui->replaceOption->isChecked()){
            quest = ui->replaceOption->text();
            list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
            str1 = list[0];
            for(int i = 3; i<list.size()-2; i++){
                str3= str3 + " " + list[i];
            }
            ui->addButton_2->setText("Replace");
            if(!secondClick){
                //first action selected is stored in str2
                QStringList actionName = action[0].split(" ");
                to_compare = action[0];
                str2 = actionName[1];
                toRemove = str2;
                 ui->doneButton->setText("Click for B");
            }else if(secondClick){
                //second action selected is stored in str4
                str4 = action[0];
                toAdd[0] = str4;
                ui->doneButton->setText("List");
                if(str2 == str4){
                    QMessageBox::information(this,"Warning:","You have selected two identical actions. Be aware that your choices will have no effects on the planner's decisions.");
                }
                ui->question_label->setText(str1 + " " + str2 + " " + str3 + " " + str4 + " " + "?");
            }
        }else if(numChecked == 0){
             QMessageBox::warning(this,"Error:","Please select the number of action required.");
        }else{
            if(ui->rescheduleOption->isChecked()){
                 QMessageBox::warning(this,"Error:","Please select one actio from list A and one from list B.");
            }else{
                QMessageBox::warning(this,"Error:","You have selected the wrong number of action for this question.");
            }
            if(!secondClick){
                secondClick = true;
            } else if (secondClick){
                secondClick = false;
            }
        }
   }else{
       QMessageBox::information(this,"'List' not clicked","Please, click 'List' Button");
   }

   ui->list->clear();
   isClicked = 0;
   isClicked2++;
}


/*Button which links the current page with:
    - the Compare Window if question one, two or three is selected;
    - the RescheduleQuestion Window if question four is selected.*/
void UserQuestions::on_addButton_2_clicked()
{
    //If "Done" button has been clicked the third button works, otherwise the user is warned.
    if(isClicked2 > 0){
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

           if(ui->addButton_2->text() == "Add"){
                  compareButtonName = "Add";
                  Plan2 =Plan + action[numChecked-1] + "\n";
                  /*Code which opens a child window taken from:
                   * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
                   Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

                  ! I have referred to this citation quite often during the implmentation of this window.
                  Please check it when you see number: [2] */
                  compare = new Comparison(this);
                  compare->show();
                  this->hide();
           }else if(ui->addButton_2->text() == "Remove"){
                  compareButtonName = "Remove";
                  QStringList line = Plan.split("\n");
                  int helper = 0;
                  for(int i = 0; i<line.size(); i++){
                      if(line[i] == action[0]){
                          if(i == 0){
                             Plan2 =  line[1];
                             helper = 1;
                          }
                      }else{
                          if(i == 0){
                              Plan2 = line[0];
                          }else if(i == 1){
                              if(helper == 0){
                                 Plan2 = Plan2 + "\n" + line[i];
                              }
                          }else{
                              Plan2 = Plan2 + "\n" + line[i];
                          }
                      }
                 }
                  Plan2 = Plan2 + "\n";
                 //[2]
                  compare = new Comparison(this);
                  compare->show();
                  this->hide();
            }else if(ui->addButton_2->text() == "Reschedule"){
                  compareButtonName = "Reschedule";
                  //[2]
                  reschedule = new RescheduleQuestion(this);
                  reschedule->show();
                  this->hide();
            }else if(ui->addButton_2->text() == "Replace"){
                  compareButtonName = "Replace";
                  QStringList line = Plan.split("\n");                   //splits the text
                  for(int i = 0; i<line.size(); i++){
                      if(i==0){
                          if(line[0] != to_compare){
                             Plan2 = line[i];
                          }else{
                             Plan2 = str4;
                          }
                      }else{
                          if(line[i] != to_compare){
                              Plan2 = Plan2 + "\n" + line[i];
                          }else{
                              Plan2 = Plan2 + "\n" + str4;
                          }
                      }
                     }
                  //[2]
                  compare = new Comparison(this);
                  compare->show();
                  this->hide();
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
    //The commented code should be enabled when the interface will be integrated with ROSPlan.
    //It opens the right window depending on the action selected.
                /* if(ui->addButton_2->text() == "Reschedule"){
                    //[2]
                     * reschedule = new RescheduleQuestion(this);
                     * reschedule->show();
                     * this->hide();
                 * }else{
                 *   //[2]
                     * compare = new Comparison(this);
                     * compare->show();
                     * this->hide();
                  */
            }else{
                QMessageBox::warning(this,"Error:","Please, click 'Done' button to verify your question.");
            }

    }else{
        QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }
}

//Button which links the current window with the previous window, in this case Visualise Window.
void UserQuestions::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}
