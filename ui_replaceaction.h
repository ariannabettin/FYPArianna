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
    QLabel *title_label;
    QPushButton *existingButton;
    QListWidget *list;
    QLabel *label;
    QPushButton *replaceActionsButton;
    QListWidget *planArea;
    QTextEdit *plan;
    QPushButton *homeButton_2;
    QPushButton *modifyButton_2;
    QPushButton *replaceButton;
    QPushButton *visualiseButton_2;
    QPushButton *selectButton_2;
    QPushButton *backButton;

    void setupUi(QDialog *ReplaceAction)
    {
        if (ReplaceAction->objectName().isEmpty())
            ReplaceAction->setObjectName(QString::fromUtf8("ReplaceAction"));
        ReplaceAction->resize(640, 480);
        ReplaceAction->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        title_label = new QLabel(ReplaceAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(40, 100, 371, 17));
        existingButton = new QPushButton(ReplaceAction);
        existingButton->setObjectName(QString::fromUtf8("existingButton"));
        existingButton->setGeometry(QRect(460, 50, 111, 30));
        list = new QListWidget(ReplaceAction);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(390, 130, 231, 251));
        label = new QLabel(ReplaceAction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 100, 161, 20));
        replaceActionsButton = new QPushButton(ReplaceAction);
        replaceActionsButton->setObjectName(QString::fromUtf8("replaceActionsButton"));
        replaceActionsButton->setGeometry(QRect(570, 410, 51, 41));
        planArea = new QListWidget(ReplaceAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(40, 130, 321, 341));
        plan = new QTextEdit(ReplaceAction);
        plan->setObjectName(QString::fromUtf8("plan"));
        plan->setGeometry(QRect(10, 450, 21, 20));
        homeButton_2 = new QPushButton(ReplaceAction);
        homeButton_2->setObjectName(QString::fromUtf8("homeButton_2"));
        homeButton_2->setGeometry(QRect(0, 0, 71, 41));
        modifyButton_2 = new QPushButton(ReplaceAction);
        modifyButton_2->setObjectName(QString::fromUtf8("modifyButton_2"));
        modifyButton_2->setGeometry(QRect(210, 0, 71, 41));
        replaceButton = new QPushButton(ReplaceAction);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(280, 0, 71, 41));
        visualiseButton_2 = new QPushButton(ReplaceAction);
        visualiseButton_2->setObjectName(QString::fromUtf8("visualiseButton_2"));
        visualiseButton_2->setGeometry(QRect(140, 0, 71, 41));
        selectButton_2 = new QPushButton(ReplaceAction);
        selectButton_2->setObjectName(QString::fromUtf8("selectButton_2"));
        selectButton_2->setGeometry(QRect(70, 0, 71, 41));
        backButton = new QPushButton(ReplaceAction);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 10, 89, 25));

        retranslateUi(ReplaceAction);

        QMetaObject::connectSlotsByName(ReplaceAction);
    } // setupUi

    void retranslateUi(QDialog *ReplaceAction)
    {
        ReplaceAction->setWindowTitle(QApplication::translate("ReplaceAction", "Dialog", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("ReplaceAction", "TextLabel", 0, QApplication::UnicodeUTF8));
        existingButton->setText(QApplication::translate("ReplaceAction", "Existing", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ReplaceAction", "List of existing actions:", 0, QApplication::UnicodeUTF8));
        replaceActionsButton->setText(QString());
        homeButton_2->setText(QApplication::translate("ReplaceAction", "Home", 0, QApplication::UnicodeUTF8));
        modifyButton_2->setText(QApplication::translate("ReplaceAction", "Modify", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("ReplaceAction", "Replace", 0, QApplication::UnicodeUTF8));
        visualiseButton_2->setText(QApplication::translate("ReplaceAction", "Visualise", 0, QApplication::UnicodeUTF8));
        selectButton_2->setText(QApplication::translate("ReplaceAction", "Select", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("ReplaceAction", "go back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReplaceAction: public Ui_ReplaceAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEACTION_H
