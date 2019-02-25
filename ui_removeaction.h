/********************************************************************************
** Form generated from reading UI file 'removeaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEACTION_H
#define UI_REMOVEACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RemoveAction
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *removeButton;
    QTextEdit *planArea;
    QLabel *title_label;
    QLabel *label_4;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QPushButton *removePlanButton;
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *removeFileButton;
    QPushButton *restoreButton;

    void setupUi(QDialog *RemoveAction)
    {
        if (RemoveAction->objectName().isEmpty())
            RemoveAction->setObjectName(QString::fromUtf8("RemoveAction"));
        RemoveAction->resize(640, 480);
        homeButton = new QPushButton(RemoveAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(RemoveAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(RemoveAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(RemoveAction);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        removeButton = new QPushButton(RemoveAction);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(280, 0, 71, 41));
        planArea = new QTextEdit(RemoveAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(80, 170, 381, 311));
        title_label = new QLabel(RemoveAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(80, 150, 371, 17));
        label_4 = new QLabel(RemoveAction);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 70, 67, 17));
        frame = new QFrame(RemoveAction);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 50, 311, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 311, 21));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 20, 311, 17));
        removePlanButton = new QPushButton(frame);
        removePlanButton->setObjectName(QString::fromUtf8("removePlanButton"));
        removePlanButton->setGeometry(QRect(10, 40, 131, 31));
        frame_2 = new QFrame(RemoveAction);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(330, 50, 301, 80));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 291, 21));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 20, 291, 17));
        removeFileButton = new QPushButton(frame_2);
        removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
        removeFileButton->setGeometry(QRect(160, 40, 131, 31));
        restoreButton = new QPushButton(RemoveAction);
        restoreButton->setObjectName(QString::fromUtf8("restoreButton"));
        restoreButton->setGeometry(QRect(490, 440, 131, 31));

        retranslateUi(RemoveAction);

        QMetaObject::connectSlotsByName(RemoveAction);
    } // setupUi

    void retranslateUi(QDialog *RemoveAction)
    {
        RemoveAction->setWindowTitle(QApplication::translate("RemoveAction", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("RemoveAction", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("RemoveAction", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("RemoveAction", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("RemoveAction", "Modify", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("RemoveAction", "Remove", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("RemoveAction", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label->setText(QApplication::translate("RemoveAction", " Delete actions from the text area and use the", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RemoveAction", " button below to see the modified plan:", 0, QApplication::UnicodeUTF8));
        removePlanButton->setText(QApplication::translate("RemoveAction", "Remove from plan", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RemoveAction", " Remove an action directly from the domain", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RemoveAction", " file:", 0, QApplication::UnicodeUTF8));
        removeFileButton->setText(QApplication::translate("RemoveAction", "Remove from file", 0, QApplication::UnicodeUTF8));
        restoreButton->setText(QApplication::translate("RemoveAction", "Restore Plan", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RemoveAction: public Ui_RemoveAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEACTION_H
