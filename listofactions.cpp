#include "listofactions.h"
#include "ui_listofactions.h"
#include "gloabal.h"
#include <QRadioButton>
#include <QListWidgetItem>

ListOfActions::ListOfActions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListOfActions)
{
    ui->setupUi(this);
}

ListOfActions::~ListOfActions()
{
    delete ui;
}

void ListOfActions::on_listButton_clicked()
{
    QListWidgetItem *it;
    for (int i = 0; i<linesValue->size();i++ ){
        it = new QListWidgetItem(ui->list);
        ui->list->setItemWidget(it, new QRadioButton(tr("Item 1")));
    }

}
