/********************************************************************************
** Form generated from reading UI file 'changeaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEACTION_H
#define UI_CHANGEACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangeAction
{
public:
    QPushButton *homeButton_2;
    QPushButton *homeButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *addButton;
    QPushButton *valButton;

    void setupUi(QDialog *ChangeAction)
    {
        if (ChangeAction->objectName().isEmpty())
            ChangeAction->setObjectName(QString::fromUtf8("ChangeAction"));
        ChangeAction->resize(640, 480);
        homeButton_2 = new QPushButton(ChangeAction);
        homeButton_2->setObjectName(QString::fromUtf8("homeButton_2"));
        homeButton_2->setGeometry(QRect(70, 0, 71, 41));
        homeButton = new QPushButton(ChangeAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        visualiseButton = new QPushButton(ChangeAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(ChangeAction);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        addButton = new QPushButton(ChangeAction);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(280, 0, 71, 41));
        valButton = new QPushButton(ChangeAction);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(570, 430, 51, 31));

        retranslateUi(ChangeAction);

        QMetaObject::connectSlotsByName(ChangeAction);
    } // setupUi

    void retranslateUi(QDialog *ChangeAction)
    {
        ChangeAction->setWindowTitle(QApplication::translate("ChangeAction", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton_2->setText(QApplication::translate("ChangeAction", "Select", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("ChangeAction", "Home", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("ChangeAction", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("ChangeAction", "Modify", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("ChangeAction", "Change", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("ChangeAction", "VAL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChangeAction: public Ui_ChangeAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEACTION_H
