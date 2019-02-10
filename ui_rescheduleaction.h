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
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RescheduleAction
{
public:
    QPushButton *valButton;
    QPushButton *homeButton_2;
    QTextEdit *planArea;
    QPushButton *homeButton;
    QPushButton *visualiseButton;
    QScrollBar *verticalScrollBar;
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
    QPushButton *selectButton;

    void setupUi(QDialog *RescheduleAction)
    {
        if (RescheduleAction->objectName().isEmpty())
            RescheduleAction->setObjectName(QString::fromUtf8("RescheduleAction"));
        RescheduleAction->resize(640, 480);
        valButton = new QPushButton(RescheduleAction);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(560, 440, 51, 31));
        homeButton_2 = new QPushButton(RescheduleAction);
        homeButton_2->setObjectName(QString::fromUtf8("homeButton_2"));
        homeButton_2->setGeometry(QRect(70, 0, 71, 41));
        planArea = new QTextEdit(RescheduleAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(130, 199, 381, 281));
        homeButton = new QPushButton(RescheduleAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        visualiseButton = new QPushButton(RescheduleAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        verticalScrollBar = new QScrollBar(RescheduleAction);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(500, 200, 20, 281));
        verticalScrollBar->setOrientation(Qt::Vertical);
        title_label = new QLabel(RescheduleAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(130, 180, 381, 17));
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
        selectButton = new QPushButton(RescheduleAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(210, 0, 71, 41));

        retranslateUi(RescheduleAction);

        QMetaObject::connectSlotsByName(RescheduleAction);
    } // setupUi

    void retranslateUi(QDialog *RescheduleAction)
    {
        RescheduleAction->setWindowTitle(QApplication::translate("RescheduleAction", "Dialog", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("RescheduleAction", "VAL", 0, QApplication::UnicodeUTF8));
        homeButton_2->setText(QApplication::translate("RescheduleAction", "Select", 0, QApplication::UnicodeUTF8));
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
        selectButton->setText(QApplication::translate("RescheduleAction", "Modify", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RescheduleAction: public Ui_RescheduleAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCHEDULEACTION_H
