/********************************************************************************
** Form generated from reading UI file 'addaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACTION_H
#define UI_ADDACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddAction
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *addButton;
    QPushButton *existinButton;
    QPushButton *newActionButton;
    QTextEdit *planArea;
    QLabel *title_label;
    QPushButton *valButton;
    QListWidget *list;
    QLabel *label;
    QPushButton *doneButton;
    QLabel *label1;
    QLineEdit *actionToAdd;
    QLineEdit *actionToAdd2;
    QPushButton *addButton_2;

    void setupUi(QDialog *AddAction)
    {
        if (AddAction->objectName().isEmpty())
            AddAction->setObjectName(QString::fromUtf8("AddAction"));
        AddAction->resize(632, 504);
        homeButton = new QPushButton(AddAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(AddAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(AddAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(AddAction);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        addButton = new QPushButton(AddAction);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(280, 0, 71, 41));
        existinButton = new QPushButton(AddAction);
        existinButton->setObjectName(QString::fromUtf8("existinButton"));
        existinButton->setGeometry(QRect(440, 60, 111, 31));
        newActionButton = new QPushButton(AddAction);
        newActionButton->setObjectName(QString::fromUtf8("newActionButton"));
        newActionButton->setGeometry(QRect(40, 60, 111, 31));
        planArea = new QTextEdit(AddAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(30, 130, 381, 301));
        title_label = new QLabel(AddAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(30, 110, 371, 17));
        valButton = new QPushButton(AddAction);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(540, 390, 61, 31));
        list = new QListWidget(AddAction);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(440, 130, 161, 201));
        label = new QLabel(AddAction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 110, 161, 20));
        doneButton = new QPushButton(AddAction);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(540, 340, 61, 25));
        label1 = new QLabel(AddAction);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 440, 121, 20));
        actionToAdd = new QLineEdit(AddAction);
        actionToAdd->setObjectName(QString::fromUtf8("actionToAdd"));
        actionToAdd->setGeometry(QRect(140, 440, 471, 21));
        actionToAdd2 = new QLineEdit(AddAction);
        actionToAdd2->setObjectName(QString::fromUtf8("actionToAdd2"));
        actionToAdd2->setGeometry(QRect(140, 470, 371, 21));
        addButton_2 = new QPushButton(AddAction);
        addButton_2->setObjectName(QString::fromUtf8("addButton_2"));
        addButton_2->setGeometry(QRect(540, 470, 61, 25));

        retranslateUi(AddAction);

        QMetaObject::connectSlotsByName(AddAction);
    } // setupUi

    void retranslateUi(QDialog *AddAction)
    {
        AddAction->setWindowTitle(QApplication::translate("AddAction", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("AddAction", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("AddAction", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("AddAction", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("AddAction", "Modify", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("AddAction", "Add", 0, QApplication::UnicodeUTF8));
        existinButton->setText(QApplication::translate("AddAction", "Existing", 0, QApplication::UnicodeUTF8));
        newActionButton->setText(QApplication::translate("AddAction", "New Action", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("AddAction", "title", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("AddAction", "VAL", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddAction", "List of existing actions:", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("AddAction", "Done", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("AddAction", "Action/s to add:", 0, QApplication::UnicodeUTF8));
        addButton_2->setText(QApplication::translate("AddAction", "Add", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddAction: public Ui_AddAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACTION_H
