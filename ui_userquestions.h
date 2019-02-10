/********************************************************************************
** Form generated from reading UI file 'userquestions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERQUESTIONS_H
#define UI_USERQUESTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_UserQuestions
{
public:
    QPlainTextEdit *planArea;
    QPushButton *doneButton;
    QPushButton *homeButton;
    QPushButton *questionsButton;
    QPushButton *visualiseButton;
    QPushButton *selectButton;
    QLabel *question_label;
    QLabel *question_label1;
    QListWidget *list;
    QGroupBox *groupBox;
    QRadioButton *addOption;
    QRadioButton *removeOption;
    QRadioButton *replaceOption;
    QRadioButton *windowOption;
    QRadioButton *actionOption;
    QRadioButton *actionOption2;
    QPushButton *choiceButton;
    QPushButton *completeButton;
    QLabel *question_label0;
    QPushButton *addButton_2;

    void setupUi(QDialog *UserQuestions)
    {
        if (UserQuestions->objectName().isEmpty())
            UserQuestions->setObjectName(QString::fromUtf8("UserQuestions"));
        UserQuestions->resize(640, 480);
        planArea = new QPlainTextEdit(UserQuestions);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(10, 360, 16, 20));
        doneButton = new QPushButton(UserQuestions);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(450, 280, 61, 25));
        homeButton = new QPushButton(UserQuestions);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        questionsButton = new QPushButton(UserQuestions);
        questionsButton->setObjectName(QString::fromUtf8("questionsButton"));
        questionsButton->setGeometry(QRect(210, 0, 89, 41));
        visualiseButton = new QPushButton(UserQuestions);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        selectButton = new QPushButton(UserQuestions);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        question_label = new QLabel(UserQuestions);
        question_label->setObjectName(QString::fromUtf8("question_label"));
        question_label->setGeometry(QRect(60, 330, 41, 17));
        question_label1 = new QLabel(UserQuestions);
        question_label1->setObjectName(QString::fromUtf8("question_label1"));
        question_label1->setGeometry(QRect(180, 330, 311, 20));
        list = new QListWidget(UserQuestions);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(440, 70, 161, 201));
        groupBox = new QGroupBox(UserQuestions);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 371, 221));
        addOption = new QRadioButton(groupBox);
        addOption->setObjectName(QString::fromUtf8("addOption"));
        addOption->setGeometry(QRect(20, 40, 471, 23));
        removeOption = new QRadioButton(groupBox);
        removeOption->setObjectName(QString::fromUtf8("removeOption"));
        removeOption->setGeometry(QRect(20, 70, 481, 23));
        replaceOption = new QRadioButton(groupBox);
        replaceOption->setObjectName(QString::fromUtf8("replaceOption"));
        replaceOption->setGeometry(QRect(20, 100, 491, 23));
        windowOption = new QRadioButton(groupBox);
        windowOption->setObjectName(QString::fromUtf8("windowOption"));
        windowOption->setGeometry(QRect(20, 130, 461, 23));
        actionOption = new QRadioButton(groupBox);
        actionOption->setObjectName(QString::fromUtf8("actionOption"));
        actionOption->setGeometry(QRect(20, 160, 501, 23));
        actionOption2 = new QRadioButton(groupBox);
        actionOption2->setObjectName(QString::fromUtf8("actionOption2"));
        actionOption2->setGeometry(QRect(20, 190, 221, 23));
        choiceButton = new QPushButton(groupBox);
        choiceButton->setObjectName(QString::fromUtf8("choiceButton"));
        choiceButton->setGeometry(QRect(260, 190, 89, 25));
        completeButton = new QPushButton(UserQuestions);
        completeButton->setObjectName(QString::fromUtf8("completeButton"));
        completeButton->setGeometry(QRect(530, 280, 71, 25));
        question_label0 = new QLabel(UserQuestions);
        question_label0->setObjectName(QString::fromUtf8("question_label0"));
        question_label0->setGeometry(QRect(90, 330, 67, 17));
        addButton_2 = new QPushButton(UserQuestions);
        addButton_2->setObjectName(QString::fromUtf8("addButton_2"));
        addButton_2->setGeometry(QRect(540, 360, 61, 25));

        retranslateUi(UserQuestions);

        QMetaObject::connectSlotsByName(UserQuestions);
    } // setupUi

    void retranslateUi(QDialog *UserQuestions)
    {
        UserQuestions->setWindowTitle(QApplication::translate("UserQuestions", "Dialog", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("UserQuestions", "List", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("UserQuestions", "Home", 0, QApplication::UnicodeUTF8));
        questionsButton->setText(QApplication::translate("UserQuestions", "Questions", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("UserQuestions", "Visualise", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("UserQuestions", "Select", 0, QApplication::UnicodeUTF8));
        question_label->setText(QApplication::translate("UserQuestions", "-", 0, QApplication::UnicodeUTF8));
        question_label1->setText(QApplication::translate("UserQuestions", "1", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("UserQuestions", "Select one of the following question:", 0, QApplication::UnicodeUTF8));
        addOption->setText(QApplication::translate("UserQuestions", "Why A is not involved in the plan?", 0, QApplication::UnicodeUTF8));
        removeOption->setText(QApplication::translate("UserQuestions", "Why A is involved in the plan?", 0, QApplication::UnicodeUTF8));
        replaceOption->setText(QApplication::translate("UserQuestions", "Why A insted of B? ", 0, QApplication::UnicodeUTF8));
        windowOption->setText(QApplication::translate("UserQuestions", "Why A not at time t[i]?", 0, QApplication::UnicodeUTF8));
        actionOption->setText(QApplication::translate("UserQuestions", "Why A not before B?", 0, QApplication::UnicodeUTF8));
        actionOption2->setText(QApplication::translate("UserQuestions", "Why A not after B?", 0, QApplication::UnicodeUTF8));
        choiceButton->setText(QApplication::translate("UserQuestions", "Continue", 0, QApplication::UnicodeUTF8));
        completeButton->setText(QApplication::translate("UserQuestions", "Done", 0, QApplication::UnicodeUTF8));
        question_label0->setText(QApplication::translate("UserQuestions", "0", 0, QApplication::UnicodeUTF8));
        addButton_2->setText(QApplication::translate("UserQuestions", "Add", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserQuestions: public Ui_UserQuestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERQUESTIONS_H
