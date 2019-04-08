/********************************************************************************
** Form generated from reading UI file 'rescheduleaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESCHEDULEACTION_H
#define UI_RESCHEDULEACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RescheduleAction
{
public:
    QPushButton *selectButton;
    QPushButton *homeButton;
    QPushButton *visualiseButton;
    QLabel *title_label;
    QPushButton *RescheduleButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *timeWindow;
    QPushButton *BAButton;
    QPushButton *modifyButton;
    QListWidget *list;
    QLabel *label;
    QTextEdit *planArea;
    QPushButton *reschButton;
    QPushButton *backButton;
    QLabel *label_2;

    void setupUi(QDialog *RescheduleAction)
    {
        if (RescheduleAction->objectName().isEmpty())
            RescheduleAction->setObjectName(QString::fromUtf8("RescheduleAction"));
        RescheduleAction->resize(800, 623);
        RescheduleAction->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        selectButton = new QPushButton(RescheduleAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        homeButton = new QPushButton(RescheduleAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        visualiseButton = new QPushButton(RescheduleAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        title_label = new QLabel(RescheduleAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(370, 110, 371, 20));
        RescheduleButton = new QPushButton(RescheduleAction);
        RescheduleButton->setObjectName(QString::fromUtf8("RescheduleButton"));
        RescheduleButton->setGeometry(QRect(290, 0, 101, 41));
        frame = new QFrame(RescheduleAction);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 430, 301, 117));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        timeWindow = new QPushButton(groupBox);
        timeWindow->setObjectName(QString::fromUtf8("timeWindow"));

        verticalLayout->addWidget(timeWindow);

        BAButton = new QPushButton(groupBox);
        BAButton->setObjectName(QString::fromUtf8("BAButton"));

        verticalLayout->addWidget(BAButton);


        verticalLayout_2->addWidget(groupBox);

        modifyButton = new QPushButton(RescheduleAction);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 81, 41));
        list = new QListWidget(RescheduleAction);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(40, 140, 301, 271));
        label = new QLabel(RescheduleAction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 110, 321, 20));
        planArea = new QTextEdit(RescheduleAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(370, 140, 371, 341));
        reschButton = new QPushButton(RescheduleAction);
        reschButton->setObjectName(QString::fromUtf8("reschButton"));
        reschButton->setGeometry(QRect(690, 530, 51, 41));
        backButton = new QPushButton(RescheduleAction);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 10, 89, 25));
        label_2 = new QLabel(RescheduleAction);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 611, 17));
        modifyButton->raise();
        selectButton->raise();
        homeButton->raise();
        visualiseButton->raise();
        title_label->raise();
        RescheduleButton->raise();
        frame->raise();
        list->raise();
        label->raise();
        planArea->raise();
        reschButton->raise();
        backButton->raise();
        label_2->raise();

        retranslateUi(RescheduleAction);

        QMetaObject::connectSlotsByName(RescheduleAction);
    } // setupUi

    void retranslateUi(QDialog *RescheduleAction)
    {
        RescheduleAction->setWindowTitle(QApplication::translate("RescheduleAction", "Dialog", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("RescheduleAction", "Select", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("RescheduleAction", "Home", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("RescheduleAction", "Visualise", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("RescheduleAction", "title", 0, QApplication::UnicodeUTF8));
        RescheduleButton->setText(QApplication::translate("RescheduleAction", "Reschedule", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RescheduleAction", "Method:", 0, QApplication::UnicodeUTF8));
        timeWindow->setText(QApplication::translate("RescheduleAction", "time window", 0, QApplication::UnicodeUTF8));
        BAButton->setText(QApplication::translate("RescheduleAction", "before-after", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("RescheduleAction", "Modify", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RescheduleAction", "List of actions to reschedule (3 max):", 0, QApplication::UnicodeUTF8));
        reschButton->setText(QApplication::translate("RescheduleAction", "Next", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("RescheduleAction", "go back", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RescheduleAction", "Select the action/s that you want to reshedule and the method you want to use.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RescheduleAction: public Ui_RescheduleAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCHEDULEACTION_H
