#include "domainfile.h"



domainFile::domainFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::domainFile)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
    ui->title_label->setText(" "+ plans[id]);

    if(themeColor == "white"){

        ui->newFile->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->openFileButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->saveButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->close->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
        ui->groupBox_2->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->groupBox->setStyleSheet("background-color: #c6c3dd; color: #282827;");


    }else if(themeColor == "black"){

        ui->newFile->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->openFileButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->saveButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->close->setStyleSheet("background-color: #498AA0; color: #FFFFFF");


        ui->planArea->setStyleSheet("background-color: #eae8f4; color: #282827;");
        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->groupBox_2->setStyleSheet("background-color: #92afd3; color: #000000;");
        ui->groupBox->setStyleSheet("background-color: #92afd3; color: #000000;");

    }

    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
}

domainFile::~domainFile()
{
    delete ui;
}


void domainFile::on_openFileButton_clicked()
{
    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}


void domainFile::on_saveButton_clicked()
{
    QFile file("newDomainAIP.pddl");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
    }
    QTextStream out(&file);
    QString text = ui->planArea->toPlainText();
    out<< text;
    file.flush();
    file.close();
}


void domainFile::on_newFile_clicked()
{
    QFile file("newDomainAIP.pddl");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}


void domainFile::on_close_clicked()
{
    this->hide();
}
