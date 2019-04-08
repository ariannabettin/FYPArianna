#include "modification.h"

/*Modify lists the fouR operationS that the user is allowed to perform on the plan in order to
 receive answers to his questions.
The four actions are: ADD, REMOVE, REPLACE and RESCHEFULE.*/

Modification::Modification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modification)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
    route = 0;

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->addButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->removeButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->replaceButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->rescheduleButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");


    }else if(themeColor == "black"){


        ui->addButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->removeButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->replaceButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->rescheduleButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
    }

}

Modification::~Modification()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void Modification::on_homeButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void Modification::on_selectButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void Modification::on_visualiseButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

//Button which opens the Remove Window
void Modification::on_removeButton_clicked()
{
    /*Code which opens a child window taken from:
     * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
     Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

    ! I have referred to this citation quite often during the implmentation of this window.
    Please check it when you see number: [2] */
    remove = new RemoveAction(this);
    remove->show();
    this->hide();
}

//Button which opens the Add Window
void Modification::on_addButton_clicked()
{
    //[2]
    add = new AddAction(this);
    add->show();
    this->hide();
}

//Button which opens the Replace Window
void Modification::on_replaceButton_clicked()
{
    //[2]
    replace = new ReplaceAction(this);
    replace->show();
    this->hide();
}

//Button which opens the Reschedule Window
void Modification::on_rescheduleButton_clicked()
{
    //[2]
    reschedule = new RescheduleAction(this);
    reschedule->show();
    this->hide();
}

//Button which links the current window with the previous window, in this case Visualise Window.
void Modification::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();

}
