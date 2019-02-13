#include "newaction2.h"
#include "ui_newaction2.h"

NewAction2::NewAction2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAction2)
{
    ui->setupUi(this);
}

NewAction2::~NewAction2()
{
    delete ui;
}
