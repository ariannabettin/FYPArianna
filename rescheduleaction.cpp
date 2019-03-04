#include "rescheduleaction.h"
#include "ui_rescheduleaction.h"
#include "gloabal.h"
#include "window.h"
#include "comparison.h"
#include <QListWidget>
#include <QMessageBox>

RescheduleAction::RescheduleAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescheduleAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);

    QPixmap pixmap1("doneIcon.png");
    QIcon ButtonIcon1(pixmap1);
    ui->reschButton->setIcon(ButtonIcon1);
    ui->reschButton->setIconSize(QSize(35, 45));

}

RescheduleAction::~RescheduleAction()
{
    delete ui;
}

void RescheduleAction::on_timeWindow_clicked()
{
    beforeafterOpt = " ";
    beforeafterAction = " ";
    window = new Window(this);
    window->show();
}

void RescheduleAction::on_timeWindowSequence_clicked()
{
    beforeafterOpt = " ";
    beforeafterAction = " ";
    window2 = new Window(this);
    window2->show();
}

void RescheduleAction::on_BAButton_clicked()
{
    windowOpt = " ";
    startTime = " ";
    endTime = " ";
    befaft= new BeforeAfter(this);
    befaft->show();
}

void RescheduleAction::on_BAButtonSeq_clicked()
{
    windowOpt = " ";
    startTime = " ";
    endTime = " ";
    befaft2= new BeforeAfter(this);
    befaft2->show();
}

void RescheduleAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RescheduleAction::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RescheduleAction::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleAction::on_doneButton_clicked()
{
    numChecked = 0;
    for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
                    action[numChecked] = ui->list->item(i)->text();
                    numChecked++;
         }
     }
    toAdd[0] = action[0];
    ui->planArea->setText("The action that you want to analyse is:\n" + toAdd[0]);
}

void RescheduleAction::on_listButton_clicked()
{
    isClicked ++;
    QFont f( "Arial",8);
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        QListWidgetItem * checkB = new QListWidgetItem(line[i]);
        checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
        checkB->setCheckState(Qt::Unchecked);
        ui->list->addItem(checkB);
        ui->list->setFont(f);
        numItems = i;
    }
}


void RescheduleAction::on_reschButton_clicked()
{
    if(isClicked > 0){
    if ( windowOpt.isEmpty()){
        Plan2 = Plan + "\n" + toAdd[0] + "\n" + beforeafterAction + " " + beforeafterOpt;
    }else{
        Plan2 = Plan + "\n" + toAdd[0] + "\n" + windowOpt + " " + startTime + " " + endTime;
    }

    compare = new Comparison(this);
    compare->show();
    this->hide();
    }else{
         QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }
}
