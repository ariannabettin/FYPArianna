/********************************************************************************
** Form generated from reading UI file 'reschdulewindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESCHDULEWINDOW_H
#define UI_RESCHDULEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reschduleWindow
{
public:
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lW1;
    QLabel *label_3;
    QLineEdit *lW2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lW1_2;
    QLabel *label_4;
    QLineEdit *lW2_2;
    QPushButton *visualiseButton;
    QPushButton *selectButton;
    QPushButton *homeButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *optionA;
    QRadioButton *optionB;
    QRadioButton *optionC;
    QPushButton *Button;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QLabel *label_2;
    QPushButton *modifyButton;
    QLabel *label_5;
    QPushButton *doneButton;
    QPushButton *windowButton;
    QPushButton *backButton;

    void setupUi(QDialog *reschduleWindow)
    {
        if (reschduleWindow->objectName().isEmpty())
            reschduleWindow->setObjectName(QString::fromUtf8("reschduleWindow"));
        reschduleWindow->resize(797, 598);
        reschduleWindow->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        frame_3 = new QFrame(reschduleWindow);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(70, 360, 101, 91));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lW1 = new QLineEdit(frame_3);
        lW1->setObjectName(QString::fromUtf8("lW1"));

        horizontalLayout_3->addWidget(lW1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lW2 = new QLineEdit(frame_3);
        lW2->setObjectName(QString::fromUtf8("lW2"));

        horizontalLayout_3->addWidget(lW2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lW1_2 = new QLineEdit(frame_3);
        lW1_2->setObjectName(QString::fromUtf8("lW1_2"));

        horizontalLayout_4->addWidget(lW1_2);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lW2_2 = new QLineEdit(frame_3);
        lW2_2->setObjectName(QString::fromUtf8("lW2_2"));

        horizontalLayout_4->addWidget(lW2_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        visualiseButton = new QPushButton(reschduleWindow);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        selectButton = new QPushButton(reschduleWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        homeButton = new QPushButton(reschduleWindow);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        frame = new QFrame(reschduleWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 170, 661, 103));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        optionA = new QRadioButton(frame);
        optionA->setObjectName(QString::fromUtf8("optionA"));

        verticalLayout->addWidget(optionA);

        optionB = new QRadioButton(frame);
        optionB->setObjectName(QString::fromUtf8("optionB"));

        verticalLayout->addWidget(optionB);

        optionC = new QRadioButton(frame);
        optionC->setObjectName(QString::fromUtf8("optionC"));

        verticalLayout->addWidget(optionC);


        verticalLayout_2->addLayout(verticalLayout);

        Button = new QPushButton(reschduleWindow);
        Button->setObjectName(QString::fromUtf8("Button"));
        Button->setGeometry(QRect(290, 0, 91, 41));
        layoutWidget_2 = new QWidget(reschduleWindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(70, 80, 518, 42));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_7->addWidget(label_2);

        modifyButton = new QPushButton(reschduleWindow);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 81, 41));
        label_5 = new QLabel(reschduleWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 320, 231, 17));
        doneButton = new QPushButton(reschduleWindow);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(680, 490, 51, 41));
        windowButton = new QPushButton(reschduleWindow);
        windowButton->setObjectName(QString::fromUtf8("windowButton"));
        windowButton->setGeometry(QRect(380, 0, 71, 41));
        backButton = new QPushButton(reschduleWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(690, 10, 89, 25));

        retranslateUi(reschduleWindow);

        QMetaObject::connectSlotsByName(reschduleWindow);
    } // setupUi

    void retranslateUi(QDialog *reschduleWindow)
    {
        reschduleWindow->setWindowTitle(QApplication::translate("reschduleWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("reschduleWindow", "  : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("reschduleWindow", "  : ", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("reschduleWindow", "Visualise", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("reschduleWindow", "Select", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("reschduleWindow", "Home", 0, QApplication::UnicodeUTF8));
        optionA->setText(QApplication::translate("reschduleWindow", "If possible, execute action in the given window and nowhere else.", 0, QApplication::UnicodeUTF8));
        optionB->setText(QApplication::translate("reschduleWindow", "Execute action at least once in the given window.", 0, QApplication::UnicodeUTF8));
        optionC->setText(QApplication::translate("reschduleWindow", "Execute action at least once in the given window and nowhere else.", 0, QApplication::UnicodeUTF8));
        Button->setText(QApplication::translate("reschduleWindow", "Reschedule", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("reschduleWindow", " Do you want your action/s to happen within a specific time window?", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("reschduleWindow", " If so select one of the following options and set the time window:", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("reschduleWindow", "Questions", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("reschduleWindow", "Set time window:", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("reschduleWindow", "Next", 0, QApplication::UnicodeUTF8));
        windowButton->setText(QApplication::translate("reschduleWindow", "Window", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("reschduleWindow", "go back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class reschduleWindow: public Ui_reschduleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCHDULEWINDOW_H
