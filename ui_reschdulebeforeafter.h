/********************************************************************************
** Form generated from reading UI file 'reschdulebeforeafter.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESCHDULEBEFOREAFTER_H
#define UI_RESCHDULEBEFOREAFTER_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reschduleBeforeAfter
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *doneButton;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *optionD_2;
    QRadioButton *optionE_2;
    QRadioButton *optionF_2;
    QRadioButton *optionG_2;
    QPushButton *visualiseButton;
    QPushButton *selectButton;
    QPushButton *modifyButton;
    QPushButton *homeButton;
    QPushButton *Button;
    QPushButton *BAButton;
    QPushButton *backButton;
    QFrame *frame;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *stepsLine_2;
    QListWidget *list_2;

    void setupUi(QDialog *reschduleBeforeAfter)
    {
        if (reschduleBeforeAfter->objectName().isEmpty())
            reschduleBeforeAfter->setObjectName(QString::fromUtf8("reschduleBeforeAfter"));
        reschduleBeforeAfter->resize(640, 480);
        reschduleBeforeAfter->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        layoutWidget = new QWidget(reschduleBeforeAfter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 515, 42));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_7->addWidget(label_8);

        doneButton = new QPushButton(reschduleBeforeAfter);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(570, 400, 51, 41));
        frame_2 = new QFrame(reschduleBeforeAfter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(40, 140, 261, 131));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        optionD_2 = new QRadioButton(frame_2);
        optionD_2->setObjectName(QString::fromUtf8("optionD_2"));

        verticalLayout_11->addWidget(optionD_2);

        optionE_2 = new QRadioButton(frame_2);
        optionE_2->setObjectName(QString::fromUtf8("optionE_2"));

        verticalLayout_11->addWidget(optionE_2);

        optionF_2 = new QRadioButton(frame_2);
        optionF_2->setObjectName(QString::fromUtf8("optionF_2"));

        verticalLayout_11->addWidget(optionF_2);

        optionG_2 = new QRadioButton(frame_2);
        optionG_2->setObjectName(QString::fromUtf8("optionG_2"));

        verticalLayout_11->addWidget(optionG_2);


        verticalLayout_10->addLayout(verticalLayout_11);

        visualiseButton = new QPushButton(reschduleBeforeAfter);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        selectButton = new QPushButton(reschduleBeforeAfter);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        modifyButton = new QPushButton(reschduleBeforeAfter);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 81, 41));
        homeButton = new QPushButton(reschduleBeforeAfter);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        Button = new QPushButton(reschduleBeforeAfter);
        Button->setObjectName(QString::fromUtf8("Button"));
        Button->setGeometry(QRect(280, 0, 91, 41));
        BAButton = new QPushButton(reschduleBeforeAfter);
        BAButton->setObjectName(QString::fromUtf8("BAButton"));
        BAButton->setGeometry(QRect(370, 0, 131, 41));
        backButton = new QPushButton(reschduleBeforeAfter);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 10, 89, 25));
        frame = new QFrame(reschduleBeforeAfter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 300, 81, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 51, 81));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stepsLine_2 = new QLineEdit(groupBox);
        stepsLine_2->setObjectName(QString::fromUtf8("stepsLine_2"));

        horizontalLayout_2->addWidget(stepsLine_2);

        list_2 = new QListWidget(reschduleBeforeAfter);
        list_2->setObjectName(QString::fromUtf8("list_2"));
        list_2->setGeometry(QRect(340, 140, 251, 241));

        retranslateUi(reschduleBeforeAfter);

        QMetaObject::connectSlotsByName(reschduleBeforeAfter);
    } // setupUi

    void retranslateUi(QDialog *reschduleBeforeAfter)
    {
        reschduleBeforeAfter->setWindowTitle(QApplication::translate("reschduleBeforeAfter", "Dialog", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("reschduleBeforeAfter", "Do you want your action/s to happen before or after another action?", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("reschduleBeforeAfter", " If so select one of the following options, click \"List\" and choose B:", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QString());
        optionD_2->setText(QApplication::translate("reschduleBeforeAfter", "Execute A before B", 0, QApplication::UnicodeUTF8));
        optionE_2->setText(QApplication::translate("reschduleBeforeAfter", "Execute A after B", 0, QApplication::UnicodeUTF8));
        optionF_2->setText(QApplication::translate("reschduleBeforeAfter", "Execute A n step before B", 0, QApplication::UnicodeUTF8));
        optionG_2->setText(QApplication::translate("reschduleBeforeAfter", "Execute A n step after B", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("reschduleBeforeAfter", "Visualise", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("reschduleBeforeAfter", "Select", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("reschduleBeforeAfter", "Questions", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("reschduleBeforeAfter", "Home", 0, QApplication::UnicodeUTF8));
        Button->setText(QApplication::translate("reschduleBeforeAfter", "Reschedule", 0, QApplication::UnicodeUTF8));
        BAButton->setText(QApplication::translate("reschduleBeforeAfter", "Before and After", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("reschduleBeforeAfter", "go back", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("reschduleBeforeAfter", "n:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class reschduleBeforeAfter: public Ui_reschduleBeforeAfter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCHDULEBEFOREAFTER_H
