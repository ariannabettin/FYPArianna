/********************************************************************************
** Form generated from reading UI file 'removeaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEACTION_H
#define UI_REMOVEACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RemoveAction
{
public:
    QPushButton *homeButton;
    QPushButton *selecyButton;
    QPushButton *visualiseButton;
    QPushButton *selectButton;
    QPushButton *removeButton;
    QPushButton *removePlanButton;
    QPushButton *removeFileButton;
    QTextEdit *planArea;
    QLabel *title_label;
    QPushButton *valButton;
    QScrollBar *verticalScrollBar;

    void setupUi(QDialog *RemoveAction)
    {
        if (RemoveAction->objectName().isEmpty())
            RemoveAction->setObjectName(QString::fromUtf8("RemoveAction"));
        RemoveAction->resize(640, 480);
        homeButton = new QPushButton(RemoveAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selecyButton = new QPushButton(RemoveAction);
        selecyButton->setObjectName(QString::fromUtf8("selecyButton"));
        selecyButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(RemoveAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        selectButton = new QPushButton(RemoveAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(210, 0, 71, 41));
        removeButton = new QPushButton(RemoveAction);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(280, 0, 71, 41));
        removePlanButton = new QPushButton(RemoveAction);
        removePlanButton->setObjectName(QString::fromUtf8("removePlanButton"));
        removePlanButton->setGeometry(QRect(0, 40, 131, 31));
        removeFileButton = new QPushButton(RemoveAction);
        removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
        removeFileButton->setGeometry(QRect(0, 70, 131, 31));
        planArea = new QTextEdit(RemoveAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(130, 120, 381, 361));
        title_label = new QLabel(RemoveAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(130, 100, 371, 17));
        valButton = new QPushButton(RemoveAction);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(560, 430, 51, 31));
        verticalScrollBar = new QScrollBar(RemoveAction);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(500, 120, 16, 361));
        verticalScrollBar->setOrientation(Qt::Vertical);

        retranslateUi(RemoveAction);

        QMetaObject::connectSlotsByName(RemoveAction);
    } // setupUi

    void retranslateUi(QDialog *RemoveAction)
    {
        RemoveAction->setWindowTitle(QApplication::translate("RemoveAction", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("RemoveAction", "Home", 0, QApplication::UnicodeUTF8));
        selecyButton->setText(QApplication::translate("RemoveAction", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("RemoveAction", "Visualise", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("RemoveAction", "Modify", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("RemoveAction", "Remove", 0, QApplication::UnicodeUTF8));
        removePlanButton->setText(QApplication::translate("RemoveAction", "Remove from plan", 0, QApplication::UnicodeUTF8));
        removeFileButton->setText(QApplication::translate("RemoveAction", "Remove from file", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("RemoveAction", "TextLabel", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("RemoveAction", "VAL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RemoveAction: public Ui_RemoveAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEACTION_H
