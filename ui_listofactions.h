/********************************************************************************
** Form generated from reading UI file 'listofactions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTOFACTIONS_H
#define UI_LISTOFACTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ListOfActions
{
public:
    QListWidget *list;
    QPushButton *selectButton;
    QPushButton *listButton;

    void setupUi(QDialog *ListOfActions)
    {
        if (ListOfActions->objectName().isEmpty())
            ListOfActions->setObjectName(QString::fromUtf8("ListOfActions"));
        ListOfActions->resize(240, 320);
        list = new QListWidget(ListOfActions);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(30, 60, 181, 201));
        selectButton = new QPushButton(ListOfActions);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(138, 280, 71, 25));
        listButton = new QPushButton(ListOfActions);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        listButton->setGeometry(QRect(30, 280, 71, 25));

        retranslateUi(ListOfActions);

        QMetaObject::connectSlotsByName(ListOfActions);
    } // setupUi

    void retranslateUi(QDialog *ListOfActions)
    {
        ListOfActions->setWindowTitle(QApplication::translate("ListOfActions", "Dialog", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("ListOfActions", "Select", 0, QApplication::UnicodeUTF8));
        listButton->setText(QApplication::translate("ListOfActions", "List", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ListOfActions: public Ui_ListOfActions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTOFACTIONS_H
