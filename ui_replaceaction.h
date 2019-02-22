/********************************************************************************
** Form generated from reading UI file 'replaceaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEACTION_H
#define UI_REPLACEACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ReplaceAction
{
public:
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *selectButton;
    QPushButton *replaceButton;
    QPushButton *homeButton;
    QLabel *title_label;
    QTextEdit *planArea;
    QPushButton *valButton;
    QPushButton *existingButton;
    QListWidget *list;
    QLabel *label;
    QPushButton *doneButton;
    QPushButton *replaceActionsButton;
    QPushButton *restoreButton;

    void setupUi(QDialog *ReplaceAction)
    {
        if (ReplaceAction->objectName().isEmpty())
            ReplaceAction->setObjectName(QString::fromUtf8("ReplaceAction"));
        ReplaceAction->resize(640, 480);
        visualiseButton = new QPushButton(ReplaceAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(ReplaceAction);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        selectButton = new QPushButton(ReplaceAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        replaceButton = new QPushButton(ReplaceAction);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(280, 0, 71, 41));
        homeButton = new QPushButton(ReplaceAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        title_label = new QLabel(ReplaceAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(190, 100, 371, 17));
        planArea = new QTextEdit(ReplaceAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(190, 120, 381, 361));
        valButton = new QPushButton(ReplaceAction);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(580, 430, 51, 31));
        existingButton = new QPushButton(ReplaceAction);
        existingButton->setObjectName(QString::fromUtf8("existingButton"));
        existingButton->setGeometry(QRect(10, 90, 111, 31));
        list = new QListWidget(ReplaceAction);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(10, 160, 161, 201));
        label = new QLabel(ReplaceAction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 140, 161, 20));
        doneButton = new QPushButton(ReplaceAction);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(110, 380, 61, 25));
        replaceActionsButton = new QPushButton(ReplaceAction);
        replaceActionsButton->setObjectName(QString::fromUtf8("replaceActionsButton"));
        replaceActionsButton->setGeometry(QRect(100, 430, 71, 25));
        restoreButton = new QPushButton(ReplaceAction);
        restoreButton->setObjectName(QString::fromUtf8("restoreButton"));
        restoreButton->setGeometry(QRect(10, 430, 71, 25));
        planArea->raise();
        visualiseButton->raise();
        modifyButton->raise();
        selectButton->raise();
        replaceButton->raise();
        homeButton->raise();
        title_label->raise();
        valButton->raise();
        existingButton->raise();
        list->raise();
        label->raise();
        doneButton->raise();
        replaceActionsButton->raise();
        restoreButton->raise();

        retranslateUi(ReplaceAction);

        QMetaObject::connectSlotsByName(ReplaceAction);
    } // setupUi

    void retranslateUi(QDialog *ReplaceAction)
    {
        ReplaceAction->setWindowTitle(QApplication::translate("ReplaceAction", "Dialog", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("ReplaceAction", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("ReplaceAction", "Modify", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("ReplaceAction", "Select", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("ReplaceAction", "Replace", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("ReplaceAction", "Home", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("ReplaceAction", "TextLabel", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("ReplaceAction", "VAL", 0, QApplication::UnicodeUTF8));
        existingButton->setText(QApplication::translate("ReplaceAction", "Existing", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ReplaceAction", "List of existing actions:", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("ReplaceAction", "Done", 0, QApplication::UnicodeUTF8));
        replaceActionsButton->setText(QApplication::translate("ReplaceAction", "Replace", 0, QApplication::UnicodeUTF8));
        restoreButton->setText(QApplication::translate("ReplaceAction", "Restore", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReplaceAction: public Ui_ReplaceAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEACTION_H
