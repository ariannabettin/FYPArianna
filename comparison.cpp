#include "comparison.h"

/*Comparison allows the user to compare the original plan and the XPlan, highlighting equalities and differences.
 It also allows the user to save the XPlan and validate it.*/

Comparison::Comparison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Comparison)
{
    ui->setupUi(this);
    ui->title_label->setText("Original Plan: " + plans[id]);
    ui->title_label2->setText("New XPlan: " + plans[id]+" 2");
    ui->planArea->setText(Plan);                                               // displays the old and the new plan
    ui->planArea_2->setText(Plan2);
    ui->instruction->setText("Please, save the plan if you want to keep working on it after the modification.");
    this->setFixedSize(800,600);

    //set red colour for components of the tracking bar in the left corner of the window
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->compareButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->noChangesButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->newsButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->replacedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->removedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->saveButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->valButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");


        ui->planArea->setStyleSheet("background-color: #ffffff; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->planArea_2->setStyleSheet("background-color: #ffffff; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");

    }else if(themeColor == "black"){

        ui->noChangesButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->newsButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->replacedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->removedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->saveButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->valButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #ffffff; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->planArea_2->setStyleSheet("background-color: #ffffff; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");

    }

    /*This part of the code checks the length of the original plan and the XPlan and resizes the
    shortest one in order to prevent the program from crashing.
    START ->*/
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    if (newPlan.size() > originalPlan.size()){
        int diff = newPlan.size()-originalPlan.size();
        for(int i = 0; i<diff; i++){
            Plan = Plan + "\n";
        }
        QStringList originalPlan = Plan.split("\n");
    }else {
        int diff = originalPlan.size()-newPlan.size();
        for(int i = 0; i<diff; i++){
            Plan2 = Plan2 + "\n";
        }
        QStringList newPlan = Plan2.split("\n");
    }
    //<- END.

    //Variables which check if text is highlighted or not.
    /*When these are true, it means that the background is white, while when these are false
     the background is coloured.*/
    cNoChanges = true;
    cNews = true;
    cReplaced = true;
    cRemoved = true;
}

Comparison::~Comparison()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void Comparison::on_homeButton_clicked()
{
    numItems = 0;
     QStringList originalPlan = Plan.split("\n");
     for(int i = 0; i< originalPlan.size(); i++){
         if(!originalPlan[i].isEmpty()){
             if(i == 0){
                 Plan = originalPlan[i];
             }else{
                 Plan = Plan + "\n" + originalPlan[i];
             }
         }
     }

    ui->planArea->clear();
    ui->planArea_2->clear();

    Plan2 = " ";
     // [*]
    if(route == 1){
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }else if(route == 2){
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }else{
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }
    this->hide();

}

//Tracking bar component which links the current window with the Select window.
void Comparison::on_selectButton_clicked()
{
    numItems = 0;
    QStringList originalPlan = Plan.split("\n");
    for(int i = 0; i< originalPlan.size(); i++){
        if(!originalPlan[i].isEmpty() || originalPlan[i] == " "){
            if(i == 0){
                Plan = originalPlan[i];
            }else{
                Plan = Plan + "\n" + originalPlan[i];
            }
        }
    }

    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";

     // [*]
    if(route == 1){
       QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
       parent->show();
    }else if(route == 2){
       QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
       parent->show();
    }else{
       QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
       parent->show();
    }


    this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void Comparison::on_visualiseButton_clicked()
{
    QStringList originalPlan = Plan.split("\n");
    for(int i = 0; i< originalPlan.size(); i++){
        if(!originalPlan[i].isEmpty() || originalPlan[i] == " "){
            if(i == 0){
                Plan = originalPlan[i];
            }else{
                Plan = Plan + "\n" +  originalPlan[i];
            }
        }
    }

    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";

     // [*]
    if(route == 1){
        QWidget *parent = this->parentWidget()->parentWidget();
        parent->show();
    }else if(route == 2){
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }else{
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }
     this->hide();
}

//Button which opens the Validate Plan window
void Comparison::on_valButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    valid = new validPlan(this);
    valid->show();
    this->hide();
}

/*If the plan is valid, the user can choose to replace the original plan with the XPlan and keep
working on the modified plan.*/
void Comparison::on_saveButton_clicked()
{
    /*If the plan is valid, the user will be allowed to replace the original plan with
     the XPlan and keep editing it.
     Empty lines will be deleted when the plan is saved.*/
    if(isValid == true){
        QStringList newPlan = Plan2.split("\n");
        for(int i = 0; i< newPlan.size(); i++){
            if(!newPlan[i].isEmpty()){
                if(i == 0){
                    Plan = newPlan[i];
                }else{
                    Plan = Plan + "\n" + newPlan[i];
                }
            }
        }
        Plan = Plan2;
        plansContent[id] = Plan2;
        Plan2 = " ";

    }else{
        QMessageBox::warning(this,"Error:","You can't save this plan because it is invalid.");
    }
    ui->planArea->setText(Plan);
    ui->planArea_2->clear();

}

//Button which finds equalities between the original plan and the XPlan.
void Comparison::on_noChangesButton_clicked()
{
    Plan = Plan + "\n";
    Plan2 = Plan2 + "\n";
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");

    /*Parts of this method related to the cursor are based on the following codes:
     * titoaii (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     * Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.

     *  Lykurg (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     * Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.*/

    /*Parts related to the change of the background and to the cursor are based on the following code:
     * mrjj (2018). Trying to select one line in QPlainTextEdit using QTextCursor. [online] Qt Forum.
     Available at: https://forum.qt.io/topic/89365/trying-to-select-one-line-in-qplaintextedit-using-qtextcursor.*/

    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);

    int changes = 0;

    if(cNoChanges){
        ui->noChangesButton->setText("Hide what has changed");
        /*"next" is a variable which allows the program to skip lines where something has been added or removed
        and compare lines of code which are not on the same row.*/
        int next = 0; 
        if (originalPlan.size() == newPlan.size()){
            ui->noChangesButton->setStyleSheet("background-color: #88a7d8; color: #000000;");
            for(int i = 0; i<newPlan.size(); i++){
                //if the two lines are equal and none of them is empty, the button color and background color change...
                if(newPlan[i] == originalPlan[i-next]){
                     QTextBlockFormat f;
                     f.setBackground(QColor(136, 167, 216));
                     if(!newPlan[i].isEmpty()){
                         cur2.select(QTextCursor::LineUnderCursor);
                         cur2.setBlockFormat(f);
                         changes++;
                     }
                     if(!originalPlan[i-next].isEmpty()){
                         cur.select(QTextCursor::LineUnderCursor);
                         cur.setBlockFormat(f);
                         changes++;
                     }
                }else{
                    /*...else there is the need to check if previous lines or next lines are equal and if we need to move the
                    cursor. If the cursor is moved, "next" will be incremented.
                    If the line that we are analysing is the firts one or the last one the program checks  only the successor or
                    predecessor.*/
                    if(i != 0){
                        if(newPlan[i] == originalPlan[i-1]){
                            QTextBlockFormat f;
                            cur.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            changes++;

                        }else if(newPlan[i-1] == originalPlan[i]){
                            QTextBlockFormat f;
                            cur2.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            changes++;
                        }else{
                            bool stillEqual = false;
                            for(int k = i+1; k<newPlan.size(); k++){
                                if(originalPlan[i] == newPlan[k]){
                                    stillEqual = true;
                                    next++;
                                }
                            }
                            if(stillEqual){
                                cur.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            }
                        }
                    }else{
                        if(newPlan[i] == originalPlan[i+1]){
                            QTextBlockFormat f;
                            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            changes++;

                        }else if(newPlan[i+1] == originalPlan[i]){
                            QTextBlockFormat f;
                            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur2.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            changes++;
                        }
                    }
                }
                // Once everything is complete, the cursor is moved down by 1.
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            }
            cNoChanges = false;
            }else{
                QMessageBox::information(this, "Error:","Probably something went wrong. Please try again!");
            }
    }else if(!cNoChanges){
            /*If text is highlighted and the button is clicked again, the background returns white and the button gets
             its original colour.*/
            ui->noChangesButton->setText("What has not changed?");
            ui->removedButton->setText("What has been removed?");
            ui->newsButton->setText("What is new?");
            ui->replacedButton->setText("What has been replaced?");
            if(themeColor == "white"){
                ui->noChangesButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
                ui->replacedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
                ui->newsButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
                ui->removedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            }else{
                ui->noChangesButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->replacedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->newsButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->removedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            }
            for(int i = 0; i< newPlan.size(); i++){
                QTextBlockFormat f;
                f.setBackground(QColor(255, 255, 255));
                cur.select(QTextCursor::LineUnderCursor);
                cur.setBlockFormat(f);
                cur2.select(QTextCursor::LineUnderCursor);
                cur2.setBlockFormat(f);
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                changes++;
            }
            cNoChanges = true;
        }
    /*Variable "change" checks if any part of the plan has been coloured. If it remains 0, the
    button values change and informs the user.*/
    if(changes == 0){
        ui->noChangesButton->setText("No unchanged parts.");
    }
    changes = 0;

}

//Button which finds actions that have been added in the XPlan.
void Comparison::on_newsButton_clicked()
{
    /*Parts related to the cursor are based on the following codes:
     * titoaii (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.

     *  Lykurg (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.*/

    /*Parts related to the change of the background and to the cursor are based on the following code:
     * mrjj (2018). Trying to select one line in QPlainTextEdit using QTextCursor. [online] Qt Forum.
     Available at: https://forum.qt.io/topic/89365/trying-to-select-one-line-in-qplaintextedit-using-qtextcursor.*/

    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);

    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    QTextBlockFormat f;
    f.setBackground(QColor(209, 197, 72));


    int changes = 0;

    if(cNews){
            ui->newsButton->setText("Hide what is new");
            int next = 0;
            for(int i = 0; i<newPlan.size()-1; i++){
                /*if the lines compare are different and we know that the difference is not representing something
                that has been removed or replace...*/
                if(newPlan[i] != originalPlan[i-next]) {
                            bool isNotReplacement = false;
                            if(newPlan[i] != originalPlan[i+1]){

                                for(int k = i+1; k<newPlan.size();k++){
                                    if(originalPlan[i] == newPlan[k]){
                                        isNotReplacement = true;
                                    }
                                }
                                if(isNotReplacement){
                                    //...the background colour and the button colour change.
                                    cur2.select(QTextCursor::LineUnderCursor);
                                    cur2.setBlockFormat(f);
                                    ui->newsButton->setStyleSheet("background-color: #d1c548; color: #000000");

                                    changes++;
                                    if(i+next+1 <= newPlan.size()){
                                       next++;
                                    }
                                }

                            }
                    }
                // Once everything is complete, the cursor is moved down by 1.
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            }
            cNews = false;
    }else if(!cNews){
            /*If text is highlighted and the button is clicked again, the background returns white and the button gets
            its original colour.*/
            ui->newsButton->setText("What is new?");
            ui->removedButton->setText("What has been removed?");
            ui->noChangesButton->setText("What has not changed?");
            ui->replacedButton->setText("What has been replaced?");
            if(themeColor == "white"){
                ui->noChangesButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
                ui->replacedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
                ui->newsButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
                ui->removedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            }else{
                ui->noChangesButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->replacedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->newsButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->removedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            }
            for(int i = 0; i< newPlan.size(); i++){
                QTextBlockFormat f;
                f.setBackground(QColor(255, 255, 255));
                cur.select(QTextCursor::LineUnderCursor);
                cur.setBlockFormat(f);
                cur2.select(QTextCursor::LineUnderCursor);
                cur2.setBlockFormat(f);
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                changes++;
            }
            cNews = true;
    }
    /*Variable "change" checks if any part of the plan has been coloured. If it remains 0, the
    button values change and informs the user.*/
    if(changes == 0){
        ui->newsButton->setText("No additions have been made.");
    }
    changes = 0;

 }

//Button which finds what has been replaced in the two plans.
void Comparison::on_replacedButton_clicked()
{
    /*Parts related to the cursor are based on the following codes:
     * titoaii (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.

     *  Lykurg (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.*/

    /*Parts related to the change of the background and to the cursor are based on the following code:
     * mrjj (2018). Trying to select one line in QPlainTextEdit using QTextCursor. [online] Qt Forum.
     Available at: https://forum.qt.io/topic/89365/trying-to-select-one-line-in-qplaintextedit-using-qtextcursor.*/

    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    int changes = 0;
    QTextBlockFormat f;
    f.setBackground(QColor(121, 196, 117));


    if(cReplaced){
        ui->replacedButton->setText("Hide what has been replaced");
        for(int i = 0; i<newPlan.size(); i++){
            /*If there is a difference between the compared lines, the successors and predecessors are checked.
            If those are equal the difference represents a replacement.
            If the lines analysed are the first ones or the last ones, only the successor or predecessor are analysed.*/
            if(newPlan[i] != originalPlan[i]){
                if(i==0){
                    if(originalPlan[i+1] == newPlan[i+1] && (!originalPlan[i].isEmpty() || !newPlan[i].isEmpty())){
                        cur2.select(QTextCursor::LineUnderCursor);
                        cur2.setBlockFormat(f);
                        cur.select(QTextCursor::LineUnderCursor);
                        cur.setBlockFormat(f);
                        ui->replacedButton->setStyleSheet("background-color: #79c475; color: #000000");
                        changes++;
                    }
                }else if(i+1>=newPlan.size()){
                    if(originalPlan[i-1] == newPlan[i-1] && (!originalPlan[i].isEmpty() || !newPlan[i].isEmpty())){
                        cur2.select(QTextCursor::LineUnderCursor);
                        cur2.setBlockFormat(f);
                        cur.select(QTextCursor::LineUnderCursor);
                        cur.setBlockFormat(f);
                         ui->replacedButton->setStyleSheet("background-color: #79c475; color: #000000");
                        changes++;
                    }
                }else{
                    if(originalPlan[i+1] == newPlan[i+1] && originalPlan[i-1] == newPlan[i-1]){
                         if(!newPlan[i].isEmpty() && !originalPlan[i].isEmpty()){
                             cur.select(QTextCursor::LineUnderCursor);
                             cur.setBlockFormat(f);
                             cur2.select(QTextCursor::LineUnderCursor);
                             cur2.setBlockFormat(f);
                             ui->replacedButton->setStyleSheet("background-color: #79c475; color: #000000");
                             changes++;
                         }
                    }
                }
            }
            // Once everything is complete, the cursor is moved down by 1.
            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
        }

        cReplaced = false;
    }else if(!cReplaced){
        /*If text is highlighted and the button is clicked again, the background returns white and the button gets
         its original colour.*/
        ui->replacedButton->setText("What has been replaced?");
        ui->newsButton->setText("What is new?");
        ui->removedButton->setText("What has been removed?");
        ui->noChangesButton->setText("What has not changed?");
        if(themeColor == "white"){
            ui->noChangesButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
            ui->replacedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            ui->newsButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
            ui->removedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        }else{
            ui->noChangesButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            ui->replacedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            ui->newsButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            ui->removedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        }
        for(int i = 0; i< newPlan.size(); i++){
            QTextBlockFormat f;
            f.setBackground(QColor(255, 255, 255));
            cur.select(QTextCursor::LineUnderCursor);
            cur.setBlockFormat(f);
            cur2.select(QTextCursor::LineUnderCursor);
            cur2.setBlockFormat(f);
            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            changes++;
        }
        cReplaced = true;
    }
    /*Variable "change" checks if any part of the plan has been coloured. If it remains 0, the
    button values change and informs the user.*/
    if(changes == 0){
        ui->replacedButton->setText("No replaced parts.");
    }
    changes = 0;

}

//Button which finds what has been removed from the orginal plan.
void Comparison::on_removedButton_clicked()
{
    /*Parts related to the cursor are based on the following codes:
     * titoaii (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.

     *  Lykurg (2010). Setting textCursor position with line and column. [online] Qtcentre.org.
     Available at: https://www.qtcentre.org/threads/29863-Setting-textCursor-position-with-line-and-column.*/

    /*Parts related to the change of the background and to the cursor are based on the following code:
     * mrjj (2018). Trying to select one line in QPlainTextEdit using QTextCursor. [online] Qt Forum.
     Available at: https://forum.qt.io/topic/89365/trying-to-select-one-line-in-qplaintextedit-using-qtextcursor.*/

    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);
    QTextBlockFormat f;
    f.setBackground(QColor(229, 94, 150));


    int next = 0;
    Plan = Plan + "\n";
    Plan2 =Plan2 + "\n";
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    int changes = 0;

    if(cRemoved){
            ui->removedButton->setText("Hide what has been removed");
            for(int i = 0; i<newPlan.size()-1; i++){
                /*If there is a difference between the compared lines, check if the successor of the
                 original plan is equal to the current line of the XPlan. If it does, it means that something has
                been removed.*/
                if(newPlan[i-next] != originalPlan[i]) {
                    if(originalPlan[i+1] == newPlan[i-next]){
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            ui->removedButton->setStyleSheet("background-color: #e55e96; color: #000000");
                            changes++;
                            next++;
                    }
                }
                // Once everything is complete, the cursor is moved down by 1.
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            }
            cRemoved = false;

    }else if(!cRemoved){
            /*If text is highlighted and the button is clicked again, the background returns white and the button gets
            its original colour.*/
            ui->removedButton->setText("What has been removed?");
            ui->newsButton->setText("What is new?");
            ui->noChangesButton->setText("What has not changed?");
            ui->replacedButton->setText("What has been replaced?");
            if(themeColor == "white"){
                ui->noChangesButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
                ui->replacedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
                ui->newsButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
                ui->removedButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            }else{
                ui->noChangesButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->replacedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->newsButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
                ui->removedButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            }
            for(int i = 0; i< newPlan.size(); i++){
                QTextBlockFormat f;
                f.setBackground(QColor(255, 255, 255));
                cur.select(QTextCursor::LineUnderCursor);
                cur.setBlockFormat(f);
                cur2.select(QTextCursor::LineUnderCursor);
                cur2.setBlockFormat(f);
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                changes++;
            }
            cRemoved = true;
    }
    /*Variable "change" checks if any part of the plan has been coloured. If it remains 0, the
    button values change and informs the user.*/
    if(changes == 0){
        ui->removedButton->setText("No removed parts.");
    }
    changes = 0;
}


