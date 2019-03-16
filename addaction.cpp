#include "addaction.h"


AddAction::AddAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);

    ui->addButton_2->setStyleSheet("border-image:url(checkIcon.jpeg);");

    ui->comboBox_1->addItem("1");
    ui->comboBox_1->addItem("2");
    ui->comboBox_1->addItem("3");
    ui->comboBox_1->addItem("4");
    ui->comboBox_1->addItem("5");
    ui->comboBox_1->addItem("--");
    ui->comboBox_1->setCurrentIndex(ui->comboBox_1->findText("1"));

     ui->comboBox_2->addItem("1");
     ui->comboBox_2->addItem("2");
     ui->comboBox_2->addItem("3");
     ui->comboBox_2->addItem("4");
     ui->comboBox_2->addItem("5");
     ui->comboBox_2->addItem("--");
     ui->comboBox_2->setCurrentIndex(ui->comboBox_2->findText("2"));

     ui->comboBox_3->addItem("1");
     ui->comboBox_3->addItem("2");
     ui->comboBox_3->addItem("3");
     ui->comboBox_3->addItem("4");
     ui->comboBox_3->addItem("5");
     ui->comboBox_3->addItem("--");
     ui->comboBox_3->setCurrentIndex(ui->comboBox_3->findText("3"));

     ui->comboBox_4->addItem("1");
     ui->comboBox_4->addItem("2");
     ui->comboBox_4->addItem("3");
     ui->comboBox_4->addItem("4");
     ui->comboBox_4->addItem("5");
     ui->comboBox_4->addItem("--");
     ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("4"));

     ui->comboBox_5->addItem("1");
     ui->comboBox_5->addItem("2");
     ui->comboBox_5->addItem("3");
     ui->comboBox_5->addItem("4");
     ui->comboBox_5->addItem("5");
     ui->comboBox_5->addItem("--");
     ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("5"));

     ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
     ui->addButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");



     if(themeColor == "white"){

         ui->existinButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
         ui->doneButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
         ui->newActionButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");


         ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_1->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_2->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_3->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_4->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->comboBox_5->setStyleSheet("background-color: #6d76a3; color: #ffffff;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label1->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label2->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label3->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label4->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
         ui->label5->setStyleSheet("background-color: #eae8f4; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");


     }else if(themeColor == "black"){

         ui->existinButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
         ui->doneButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

         ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_1->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_2->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_3->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_4->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->comboBox_5->setStyleSheet("background-color: #b6bcc4; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label1->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label2->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label3->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label4->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
         ui->label5->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
     }
}

AddAction::~AddAction()
{
    delete ui;
}

void AddAction::on_homeButton_clicked()                                                             //goes back to the home
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void AddAction::on_selectButton_clicked()                                                           //goes back to the selection window
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void AddAction::on_visualiseButton_clicked()                                                        //goes back to the visualisation window
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void AddAction::on_modifyButton_clicked()                                                          //goes back to the modification window                                                   //goes back to the modification window
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void AddAction::on_newActionButton_clicked()                                                        //opens the domain file and allows users to modify the domain file and add an action
{
    file  = new domainFile(this);
    file->show();

}


void AddAction::on_existinButton_clicked()
{
    isClicked++;
    QFont f( "Arial",8);
    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    int act = 0;
    int isDomain = 0;
    bool firstActionInvalid  = false;
    if(text.contains("action")){
        isDomain++;

        if(isDomain == 1){
            QStringList line = text.split("\n");
            for(int i = 0; i<line.size(); i++ ){
                if(line[i].contains("action")){
                    QStringList word = line[i].split(" ");
                    for(int j = 0; j<word.size(); j++ ){
                        if(word[j].contains("action")){
                            if(firstActionInvalid){
                                if(!Plan.contains(word[j+1])){
                                    QListWidgetItem * checkB = new QListWidgetItem(word[j+1]);
                                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                                    checkB->setCheckState(Qt::Unchecked);
                                    ui->list->addItem(checkB);
                                    ui->list->setFont(f);
                                    act = act + 1;
                                }
                            }
                            firstActionInvalid = true;
                        }
                    }
                }
            }

        }else{
            QMessageBox::information(this, "Error: ", "Are you sure that the file you uploaded is a domain file?");
        }

       numItems = act;

       file.close();
}

}


void AddAction::on_doneButton_clicked()                                                             // finds the checked actions and adds them to the edit lines.
{
    isClicked2++;
   if(isClicked>0){

       for (int i = 0;i<5;i++){
           action[i]=" ";
       }

        numChecked = 0;
        for(int i = 0; i<numItems; i++){
            bool isChecked = ui->list->item(i)->checkState();
            if(isChecked == true){
                        action[numChecked] = ui->list->item(i)->text();
                        numChecked++;
             }
         }

        QFont f( "Arial",8);

        if(numChecked>5){
            QMessageBox::information(this,"Error:","You can not add more than 5 actions at the same time.");
        }else if(numChecked == 0){
            QMessageBox::information(this,"Error:","Please, select at least one action");
        }else{
           ui->label1->setText(action[0]);
           ui->label1->setFont(f);
           ui->label2->setText(action[1]);
           ui->label2->setFont(f);
           ui->label3->setText(action[2]);
           ui->label3->setFont(f);
           ui->label4->setText(action[3]);
           ui->label4->setFont(f);
           ui->label5->setText(action[4]);
           ui->label5->setFont(f);

           if(numChecked == 1){
               ui->comboBox_2->setCurrentIndex(ui->comboBox_2->findText("--"));
               ui->comboBox_3->setCurrentIndex(ui->comboBox_3->findText("--"));
               ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("--"));
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }else if(numChecked == 2){
               ui->comboBox_3->setCurrentIndex(ui->comboBox_3->findText("--"));
               ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("--"));
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }else if(numChecked == 3){
               ui->comboBox_4->setCurrentIndex(ui->comboBox_4->findText("--"));
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }else if(numChecked == 4){
               ui->comboBox_5->setCurrentIndex(ui->comboBox_5->findText("--"));
           }





        }

    }else{
             QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }

}


void AddAction::on_addButton_2_clicked()                                                                  // adds the selected action to the global variable Plan2 and opens the comparison window
{
    if(isClicked>0 && isClicked2 > 0){

        bool doubleIndex = false;
        bool wrongIndex = false;

        QString val1 = ui->comboBox_1->currentText();
        QString val2 = ui->comboBox_2->currentText();
        QString val3 = ui->comboBox_3->currentText();
        QString val4 = ui->comboBox_3->currentText();
        QString val5 = ui->comboBox_3->currentText();

        QString actionArray[5]={ui->label1->text(),ui->label2->text(),ui->label3->text(),ui->label4->text(),ui->label5->text()};
        QString valuesArray[5] ={val1,val2,val3,val4,val5};

        for (int i = 0; i<valuesArray->size();i++){
            for (int j = 0;j<valuesArray->size();j++){
                if(valuesArray[i] == valuesArray[k]){
                    doubleIndex = true;
                }
            }
        }
        if(!doubleIndex){
            for(int i = 0;i<numChecked;i++){
                QString index = QString::number(i+1);
                for(int k = 0; k < numChecked; k++){
                    if(valuesArray[k] == index){
                          toAdd[i]=actionArray[k];
                       }
                 }
          }
           for(int i = 0; i<numChecked; i++){
               if(toAdd[i].isEmpty()){
                   wrongIndex = true;
               }
            }
            if(!wrongIndex){

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//               Not part of the interface, I will use this for the presentation
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                Plan2 =Plan;

                    QStringList a = Plan2.split("\n");
                    for(int i = 0; i<4; i++){
                        if(i == 0){
                            Plan2 = a[0];
                        }else{
                            Plan2 = Plan2 + "\n"+ a[i];
                        }
                    }
                    for(int i = 0; i< 1; i++){
                                Plan2 = Plan2 + "\n" + toAdd[i];
                        }
                    for(int i = 4; i<7; i++){
                        if(i == 0){
                            Plan2 = a[0];
                        }else{
                            Plan2 = Plan2 + "\n"+ a[i];
                        }
                    }
                    for(int i = 1; i< numChecked; i++){
                                Plan2 = Plan2 + "\n" + toAdd[i];
                        }
                    for(int i = 7; i<a.size(); i++){
                            if(i == 0){
                                Plan2 = a[0];
                            }else{
                                Plan2 = Plan2 + "\n"+ a[i];
                            }
                        }
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

                    Plan2 = Plan2 + "\n";


                    compareButtonName = "Add";
                    compare = new Comparison(this);
                    compare->show();
                    this->hide();
               }else{
                    QMessageBox::warning(this,"Error:","You have assigned a wrong position");
               }

        }else{
            QMessageBox::warning(this,"Error:","You have assigned the same position twice.");
        }
      }else{
        if(isClicked == 0){
            QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
        }else if(isClicked2 == 0){
            QMessageBox::warning(this,"Error","You forgot to click 'Done'");
        }else if(isClicked == 0 && isClicked2 == 0){
            QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
        }

      }
}


void AddAction::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();

}
