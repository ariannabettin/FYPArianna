#include "rescheduleaction.h"
#include "ui_rescheduleaction.h"
#include "gloabal.h"
#include "window.h"

RescheduleAction::RescheduleAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescheduleAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
}

RescheduleAction::~RescheduleAction()
{
    delete ui;
}

void RescheduleAction::on_timeWindow_clicked()
{
    window = new Window(this);
    window->show();
}

void RescheduleAction::on_timeWindowSequence_clicked()
{
    window2 = new Window(this);
    window2->show();
}

void RescheduleAction::on_BAButton_clicked()
{
    befaft= new BeforeAfter(this);
    befaft->show();
}

void RescheduleAction::on_BAButtonSeq_clicked()
{
    befaft2= new BeforeAfter(this);
    befaft2->show();
}

void RescheduleAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RescheduleAction::on_homeButton_2_clicked()
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

void RescheduleAction::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
