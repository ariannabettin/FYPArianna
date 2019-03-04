#include "reschedulequestion.h"
#include "ui_reschedulequestion.h"
#include "gloabal.h"
#include <QMessageBox>
#include "comparison.h"

RescheduleQuestion::RescheduleQuestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescheduleQuestion)
{
    ui->setupUi(this);

    QPixmap pixmap1("doneIcon.png");
    QIcon ButtonIcon1(pixmap1);
    ui->windowButton->setIcon(ButtonIcon1);
    ui->windowButton->setIconSize(QSize(30, 40));

    QPixmap pixmap2("doneIcon.png");
    QIcon ButtonIcon2(pixmap2);
    ui->BAButton->setIcon(ButtonIcon2);
    ui->BAButton->setIconSize(QSize(30, 40));
}

RescheduleQuestion::~RescheduleQuestion()
{
    delete ui;
}


void RescheduleQuestion::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RescheduleQuestion::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RescheduleQuestion::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RescheduleQuestion::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void RescheduleQuestion::on_windowButton_clicked()
{
    rescheduleW = new reschduleWindow(this);
    rescheduleW->show();
    this->hide();
}

void RescheduleQuestion::on_BAButton_clicked()
{
    rescheduleBA = new reschduleBeforeAfter(this);
    rescheduleBA->show();
    this->hide();
}
