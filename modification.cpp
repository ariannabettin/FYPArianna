#include "modification.h"


Modification::Modification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modification)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
    route = 0;

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");


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

void Modification::on_homeButton_clicked()                                          //goes back to the home window
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void Modification::on_selectButton_clicked()                                        // goes back to the selection window
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void Modification::on_visualiseButton_clicked()                                     // goes back to the visualisation window
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void Modification::on_removeButton_clicked()                                         // goes to the the remove action window
{
    remove = new RemoveAction(this);
    remove->show();
    this->hide();
}


void Modification::on_addButton_clicked()                                            // goes to the the add action window
{
    add = new AddAction(this);
    add->show();
    this->hide();
}


void Modification::on_replaceButton_clicked()                                        // goes to the the replace action window
{
    replace = new ReplaceAction(this);
    replace->show();
}


void Modification::on_rescheduleButton_clicked()                                     // goes to the the reschedule action window
{
    reschedule = new RescheduleAction(this);
    reschedule->show();
    this->hide();
}


void Modification::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();

}
