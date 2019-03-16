/********************************************************************************
** Form generated from reading UI file 'reschedulequestion.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESCHEDULEQUESTION_H
#define UI_RESCHEDULEQUESTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RescheduleQuestion
{
public:
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *Button;
    QPushButton *modifyButton;
    QPushButton *homeButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *windowButton;
    QPushButton *BAButton;
    QPushButton *backButton;

    void setupUi(QDialog *RescheduleQuestion)
    {
        if (RescheduleQuestion->objectName().isEmpty())
            RescheduleQuestion->setObjectName(QString::fromUtf8("RescheduleQuestion"));
        RescheduleQuestion->resize(650, 480);
        RescheduleQuestion->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        selectButton = new QPushButton(RescheduleQuestion);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(RescheduleQuestion);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        Button = new QPushButton(RescheduleQuestion);
        Button->setObjectName(QString::fromUtf8("Button"));
        Button->setGeometry(QRect(290, 0, 91, 41));
        modifyButton = new QPushButton(RescheduleQuestion);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 81, 41));
        homeButton = new QPushButton(RescheduleQuestion);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        frame = new QFrame(RescheduleQuestion);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 100, 541, 37));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        frame_2 = new QFrame(RescheduleQuestion);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(30, 170, 541, 37));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        windowButton = new QPushButton(RescheduleQuestion);
        windowButton->setObjectName(QString::fromUtf8("windowButton"));
        windowButton->setGeometry(QRect(580, 100, 41, 31));
        BAButton = new QPushButton(RescheduleQuestion);
        BAButton->setObjectName(QString::fromUtf8("BAButton"));
        BAButton->setGeometry(QRect(580, 170, 41, 31));
        backButton = new QPushButton(RescheduleQuestion);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 10, 89, 25));

        retranslateUi(RescheduleQuestion);

        QMetaObject::connectSlotsByName(RescheduleQuestion);
    } // setupUi

    void retranslateUi(QDialog *RescheduleQuestion)
    {
        RescheduleQuestion->setWindowTitle(QApplication::translate("RescheduleQuestion", "Dialog", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("RescheduleQuestion", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("RescheduleQuestion", "Visualise", 0, QApplication::UnicodeUTF8));
        Button->setText(QApplication::translate("RescheduleQuestion", "Reschedule", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("RescheduleQuestion", "Questions", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("RescheduleQuestion", "Home", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RescheduleQuestion", " Do you want your action/s to happen within a specific time window?", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RescheduleQuestion", "Do you want your action/s to happen before or after another action?", 0, QApplication::UnicodeUTF8));
        windowButton->setText(QString());
        BAButton->setText(QString());
        backButton->setText(QApplication::translate("RescheduleQuestion", "go back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RescheduleQuestion: public Ui_RescheduleQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCHEDULEQUESTION_H
