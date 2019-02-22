#include "removeaction.h"
#include "ui_removeaction.h"
#include "newaction.h"
#include "gloabal.h"
#include "comparison.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include "gloabal.h"

RemoveAction::RemoveAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
}

RemoveAction::~RemoveAction()
{
    delete ui;
}

void RemoveAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void RemoveAction::on_removePlanButton_clicked()
{
    Plan2 = ui->planArea->toPlainText();
    compareButtonName = "Remove";
    compare = new Comparison(this);
    compare->show();
    this->hide();
}

void RemoveAction::on_valButton_clicked()
{
    //validator
}

void RemoveAction::on_removeFileButton_clicked()
{
    file  = new fileClass(this);
    file->show();

}


void RemoveAction::on_removeButton_clicked()
{
    ui->planArea->setText(Plan);
}

void RemoveAction::on_restoreButton_clicked()
{
    ui->planArea->setText(Plan);
}

void RemoveAction::on_planArea_selectionChanged()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.removeSelectedText();
}
