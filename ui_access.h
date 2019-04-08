/********************************************************************************
** Form generated from reading UI file 'access.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESS_H
#define UI_ACCESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Access
{
public:
    QPushButton *accessButton;
    QPushButton *homeButton;
    QPushButton *selecyButton;
    QPushButton *visualiseButton;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QPushButton *domainButton;
    QPushButton *problemButton;
    QFrame *line;
    QPushButton *backButton;

    void setupUi(QDialog *Access)
    {
        if (Access->objectName().isEmpty())
            Access->setObjectName(QString::fromUtf8("Access"));
        Access->resize(792, 569);
        Access->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        accessButton = new QPushButton(Access);
        accessButton->setObjectName(QString::fromUtf8("accessButton"));
        accessButton->setGeometry(QRect(210, 0, 91, 41));
        homeButton = new QPushButton(Access);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selecyButton = new QPushButton(Access);
        selecyButton->setObjectName(QString::fromUtf8("selecyButton"));
        selecyButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(Access);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        frame = new QFrame(Access);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(120, 160, 561, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 261, 20));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 10, 261, 17));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));
        domainButton = new QPushButton(frame);
        domainButton->setObjectName(QString::fromUtf8("domainButton"));
        domainButton->setGeometry(QRect(70, 60, 121, 31));
        problemButton = new QPushButton(frame);
        problemButton->setObjectName(QString::fromUtf8("problemButton"));
        problemButton->setGeometry(QRect(370, 60, 121, 31));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(270, 0, 20, 121));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        backButton = new QPushButton(Access);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(680, 10, 89, 25));

        retranslateUi(Access);

        QMetaObject::connectSlotsByName(Access);
    } // setupUi

    void retranslateUi(QDialog *Access)
    {
        Access->setWindowTitle(QApplication::translate("Access", "Dialog", 0, QApplication::UnicodeUTF8));
        accessButton->setText(QApplication::translate("Access", " Access File", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Access", "Home", 0, QApplication::UnicodeUTF8));
        selecyButton->setText(QApplication::translate("Access", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Access", "Visualise", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Access", " Access Domain File using this button:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Access", "Access Problem File using this button:", 0, QApplication::UnicodeUTF8));
        domainButton->setText(QApplication::translate("Access", "Domain File", 0, QApplication::UnicodeUTF8));
        problemButton->setText(QApplication::translate("Access", "Problem File", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("Access", "go back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Access: public Ui_Access {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESS_H
