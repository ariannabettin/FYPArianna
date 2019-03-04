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
    QGroupBox *groupBox;
    QPushButton *timeWindow;
    QPushButton *BAButton;
    QFrame *frame_2;
    QGroupBox *groupBox_2;
    QPushButton *timeWindowSequence;
    QPushButton *BAButtonSeq;
    QPushButton *modifyButton;
    QListWidget *list;
    QLabel *label;
    QPushButton *doneButton;
    QPushButton *listButton;
    QTextEdit *planArea;
    QPushButton *reschButton;

    void setupUi(QDialog *RescheduleAction)
    {
        if (RescheduleAction->objectName().isEmpty())
            RescheduleAction->setObjectName(QString::fromUtf8("RescheduleAction"));
        RescheduleAction->resize(640, 480);
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
        title_label->setGeometry(QRect(220, 200, 381, 17));
        RescheduleButton = new QPushButton(RescheduleAction);
        RescheduleButton->setObjectName(QString::fromUtf8("RescheduleButton"));
        RescheduleButton->setGeometry(QRect(280, 0, 91, 41));
        frame = new QFrame(RescheduleAction);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 60, 251, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 91));
        timeWindow = new QPushButton(groupBox);
        timeWindow->setObjectName(QString::fromUtf8("timeWindow"));
        timeWindow->setGeometry(QRect(10, 30, 201, 25));
        BAButton = new QPushButton(groupBox);
        BAButton->setObjectName(QString::fromUtf8("BAButton"));
        BAButton->setGeometry(QRect(10, 60, 201, 25));
        frame_2 = new QFrame(RescheduleAction);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(350, 60, 251, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 221, 91));
        timeWindowSequence = new QPushButton(groupBox_2);
        timeWindowSequence->setObjectName(QString::fromUtf8("timeWindowSequence"));
        timeWindowSequence->setGeometry(QRect(10, 30, 201, 25));
        BAButtonSeq = new QPushButton(groupBox_2);
        BAButtonSeq->setObjectName(QString::fromUtf8("BAButtonSeq"));
        BAButtonSeq->setGeometry(QRect(10, 60, 201, 25));
        modifyButton = new QPushButton(RescheduleAction);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        list = new QListWidget(RescheduleAction);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(20, 230, 161, 201));
        label = new QLabel(RescheduleAction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 200, 161, 20));
        doneButton = new QPushButton(RescheduleAction);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(110, 440, 71, 31));
        listButton = new QPushButton(RescheduleAction);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        listButton->setGeometry(QRect(20, 440, 71, 31));
        planArea = new QTextEdit(RescheduleAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(220, 230, 331, 261));
        reschButton = new QPushButton(RescheduleAction);
        reschButton->setObjectName(QString::fromUtf8("reschButton"));
        reschButton->setGeometry(QRect(570, 430, 51, 41));
        modifyButton->raise();
        selectButton->raise();
        homeButton->raise();
        visualiseButton->raise();
        title_label->raise();
        RescheduleButton->raise();
        frame->raise();
        frame_2->raise();
        list->raise();
        label->raise();
        doneButton->raise();
        listButton->raise();
        planArea->raise();
        reschButton->raise();

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
        groupBox->setTitle(QApplication::translate("RescheduleAction", "Action:", 0, QApplication::UnicodeUTF8));
        timeWindow->setText(QApplication::translate("RescheduleAction", "time window", 0, QApplication::UnicodeUTF8));
        BAButton->setText(QApplication::translate("RescheduleAction", "before-after", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("RescheduleAction", "Sequence:", 0, QApplication::UnicodeUTF8));
        timeWindowSequence->setText(QApplication::translate("RescheduleAction", "time window", 0, QApplication::UnicodeUTF8));
        BAButtonSeq->setText(QApplication::translate("RescheduleAction", "before-after", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("RescheduleAction", "Modify", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RescheduleAction", "List of existing actions:", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("RescheduleAction", "Done", 0, QApplication::UnicodeUTF8));
        listButton->setText(QApplication::translate("RescheduleAction", "List", 0, QApplication::UnicodeUTF8));
        reschButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RescheduleAction: public Ui_RescheduleAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCHEDULEACTION_H
