#include "reschedulequestion.h"

/*RescheduleQuestion window explains, with a simple sentence, the difference between the reschduling
using a "parameter action" and a "time window".*/

RescheduleQuestion::RescheduleQuestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescheduleQuestion)
{
    ui->setupUi(this);


    ui->windowButton->setStyleSheet("border-image:url(forward.jpeg);");
    ui->BAButton->setStyleSheet("border-image:url(forward.jpeg);");
    this->setFixedSize(800,600);

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->Button->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
        ui->frame_2->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    }else if(themeColor == "black"){

        ui->frame->setStyleSheet("background-color: #92afd; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->frame_2->setStyleSheet("background-color: #92afd; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");

    }


    route = 2;
}

RescheduleQuestion::~RescheduleQuestion()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void RescheduleQuestion::on_homeButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void RescheduleQuestion::on_selectButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void RescheduleQuestion::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the User Question window.
void RescheduleQuestion::on_modifyButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

//Button which opens the pop up window Window
void RescheduleQuestion::on_windowButton_clicked()
{
    /*Code which opens a child window taken from:
     * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
     Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

    ! I have referred to this citation quite often during the implmentation of this window.
    Please check it when you see number: [2] */
    rescheduleW = new reschduleWindow(this);
    rescheduleW->show();
    this->hide();
}

//Button which opens the pop up window BeforeAfter
void RescheduleQuestion::on_BAButton_clicked()
{
    //[2]
    rescheduleBA = new reschduleBeforeAfter(this);
    rescheduleBA->show();
    this->hide();
}

//Button which links the current window with the previous window, in this case User Questions Window.
void RescheduleQuestion::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
