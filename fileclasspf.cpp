#include "fileclasspf.h"

/*fileClassPF displays the content of the problem file and allow the user to modify it. It also
allows the user to replace the loaded file with the modified one.*/

fileclassPF::fileclassPF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileclassPF)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
    ui->title_label->setText(" "+plans[id]);

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->newFile->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->openFileButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->saveButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->close->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->replaceButton->setStyleSheet("background-color:#25245e; color: #FFFFFF");


        ui->planArea->setStyleSheet("background-color: #eae8f4; color: #282827;");
        ui->groupBox_2->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->groupBox->setStyleSheet("background-color: #c6c3dd; color: #282827;");


    }else if(themeColor == "black"){

        ui->newFile->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->openFileButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->saveButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->close->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->replaceButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->groupBox_2->setStyleSheet("background-color: #92afd3; color: #000000;");
        ui->groupBox->setStyleSheet("background-color: #92afd3; color: #000000;");

    }

    /*This part of the code adds the content of the domain file to the text area of the window.
    START ->*/
    QFile file(problems[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
    //<- END.
}


fileclassPF::~fileclassPF()
{
    delete ui;
}

//Button which opens the domain file loaded by the user
void fileclassPF::on_openFileButton_clicked()
{
    /*Code which displays the content of the file taken from:
     * C++ Qt 12 - QFile. (2011). [video] Directed by VoidRealms.
    https://www.youtube.com/watch?v=4Mg6bw1MmAE&t=134s: YouTube.*/

    QFile file(problems[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}

//Button which saves changes made on the domain file.
void fileclassPF::on_saveButton_clicked()
{
    /*Code which saves changes made on the file taken from:
     * C++ Qt 12 - QFile. (2011). [video] Directed by VoidRealms.
    https://www.youtube.com/watch?v=4Mg6bw1MmAE&t=134s: YouTube.*/

    QFile file("newPF_AIP.pddl");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
    }
    QTextStream out(&file);
    QString text = ui->planArea->toPlainText();
    out<< text;
    file.flush();
    file.close();
}

//Button which opens a copy of the file with the modifications made by the user.
void fileclassPF::on_newFile_clicked()
{
    /*Code which displays the content of the new file taken from:
     * C++ Qt 12 - QFile. (2011). [video] Directed by VoidRealms.
    https://www.youtube.com/watch?v=4Mg6bw1MmAE&t=134s: YouTube.*/

    QFile file("newPF_AIP.pddl");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}

//Button which closes the domainFile window.
void fileclassPF::on_close_clicked()
{
     this->hide();
}

//Button which replaces the loaded file with the modified one.
void fileclassPF::on_replaceButton_clicked()
{
    domains[id] = "newPF_AIP.pddl";
}


