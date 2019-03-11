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
    QPushButton *existingButton;
    QListWidget *list;
    QLabel *label;
    QPushButton *replaceActionsButton;
    QListWidget *planArea;
    QTextEdit *plan;

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
        title_label->setGeometry(QRect(40, 100, 371, 17));
        existingButton = new QPushButton(ReplaceAction);
        existingButton->setObjectName(QString::fromUtf8("existingButton"));
        existingButton->setGeometry(QRect(460, 50, 111, 30));
        list = new QListWidget(ReplaceAction);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(390, 120, 231, 261));
        label = new QLabel(ReplaceAction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 100, 161, 20));
        replaceActionsButton = new QPushButton(ReplaceAction);
        replaceActionsButton->setObjectName(QString::fromUtf8("replaceActionsButton"));
        replaceActionsButton->setGeometry(QRect(570, 410, 51, 41));
        planArea = new QListWidget(ReplaceAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(40, 120, 321, 361));
        plan = new QTextEdit(ReplaceAction);
        plan->setObjectName(QString::fromUtf8("plan"));
        plan->setGeometry(QRect(10, 450, 21, 20));

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
        existingButton->setText(QApplication::translate("ReplaceAction", "Existing", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ReplaceAction", "List of existing actions:", 0, QApplication::UnicodeUTF8));
        replaceActionsButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReplaceAction: public Ui_ReplaceAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEACTION_H
