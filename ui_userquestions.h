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
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserQuestions
{
public:
    QPlainTextEdit *planArea;
    QPushButton *homeButton;
    QPushButton *questionsButton;
    QPushButton *visualiseButton;
    QPushButton *selectButton;
    QPushButton *addButton_2;
    QLabel *question_label3;
    QFrame *frame;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *addOption;
    QRadioButton *removeOption;
    QRadioButton *replaceOption;
    QRadioButton *rescheduleOption;
    QLabel *label_2;
    QLabel *statementLabel;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QListWidget *list;
    QHBoxLayout *horizontalLayout;
    QPushButton *doneButton;
    QPushButton *completeButton;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *question_label;
    QPushButton *backButton;
    QLabel *label_3;

    void setupUi(QDialog *UserQuestions)
    {
        if (UserQuestions->objectName().isEmpty())
            UserQuestions->setObjectName(QString::fromUtf8("UserQuestions"));
        UserQuestions->resize(798, 584);
        UserQuestions->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        planArea = new QPlainTextEdit(UserQuestions);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(0, 460, 20, 20));
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
        addButton_2 = new QPushButton(UserQuestions);
        addButton_2->setObjectName(QString::fromUtf8("addButton_2"));
        addButton_2->setGeometry(QRect(660, 520, 111, 31));
        question_label3 = new QLabel(UserQuestions);
        question_label3->setObjectName(QString::fromUtf8("question_label3"));
        question_label3->setGeometry(QRect(490, 340, 67, 17));
        frame = new QFrame(UserQuestions);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 100, 381, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 351, 221));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 331, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addOption = new QRadioButton(layoutWidget);
        addOption->setObjectName(QString::fromUtf8("addOption"));

        verticalLayout->addWidget(addOption);

        removeOption = new QRadioButton(layoutWidget);
        removeOption->setObjectName(QString::fromUtf8("removeOption"));

        verticalLayout->addWidget(removeOption);

        replaceOption = new QRadioButton(layoutWidget);
        replaceOption->setObjectName(QString::fromUtf8("replaceOption"));

        verticalLayout->addWidget(replaceOption);

        rescheduleOption = new QRadioButton(layoutWidget);
        rescheduleOption->setObjectName(QString::fromUtf8("rescheduleOption"));

        verticalLayout->addWidget(rescheduleOption);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 309, 25));
        statementLabel = new QLabel(UserQuestions);
        statementLabel->setObjectName(QString::fromUtf8("statementLabel"));
        statementLabel->setGeometry(QRect(470, 60, 291, 17));
        layoutWidget1 = new QWidget(UserQuestions);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(470, 90, 291, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        list = new QListWidget(layoutWidget1);
        list->setObjectName(QString::fromUtf8("list"));
        list->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        doneButton = new QPushButton(layoutWidget1);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        horizontalLayout->addWidget(doneButton);

        completeButton = new QPushButton(layoutWidget1);
        completeButton->setObjectName(QString::fromUtf8("completeButton"));

        horizontalLayout->addWidget(completeButton);


        verticalLayout_3->addLayout(horizontalLayout);

        frame_2 = new QFrame(UserQuestions);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(60, 410, 481, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        question_label = new QLabel(frame_2);
        question_label->setObjectName(QString::fromUtf8("question_label"));
        question_label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        verticalLayout_2->addWidget(question_label);


        verticalLayout_4->addLayout(verticalLayout_2);

        backButton = new QPushButton(UserQuestions);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 10, 89, 25));
        label_3 = new QLabel(UserQuestions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 60, 391, 17));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        retranslateUi(UserQuestions);

        QMetaObject::connectSlotsByName(UserQuestions);
    } // setupUi

    void retranslateUi(QDialog *UserQuestions)
    {
        UserQuestions->setWindowTitle(QApplication::translate("UserQuestions", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("UserQuestions", "Home", 0, QApplication::UnicodeUTF8));
        questionsButton->setText(QApplication::translate("UserQuestions", "Questions", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("UserQuestions", "Visualise", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("UserQuestions", "Select", 0, QApplication::UnicodeUTF8));
        addButton_2->setText(QApplication::translate("UserQuestions", "Add", 0, QApplication::UnicodeUTF8));
        question_label3->setText(QString());
        groupBox->setTitle(QString());
        addOption->setText(QApplication::translate("UserQuestions", "Why action A is not involved in the plan?", 0, QApplication::UnicodeUTF8));
        removeOption->setText(QApplication::translate("UserQuestions", "Why action A is involved in the plan?", 0, QApplication::UnicodeUTF8));
        replaceOption->setText(QApplication::translate("UserQuestions", "Why action A rather than action B? ", 0, QApplication::UnicodeUTF8));
        rescheduleOption->setText(QApplication::translate("UserQuestions", "Why action A at this time? ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserQuestions", "Do you want to know:", 0, QApplication::UnicodeUTF8));
        statementLabel->setText(QApplication::translate("UserQuestions", "List of actions:", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("UserQuestions", "List", 0, QApplication::UnicodeUTF8));
        completeButton->setText(QApplication::translate("UserQuestions", "Done", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserQuestions", "Is this your question? ", 0, QApplication::UnicodeUTF8));
        question_label->setText(QApplication::translate("UserQuestions", "TextLabel", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("UserQuestions", "go back", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UserQuestions", "Select one of the following question and click \"List\":", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserQuestions: public Ui_UserQuestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERQUESTIONS_H
