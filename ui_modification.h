/********************************************************************************
** Form generated from reading UI file 'modification.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICATION_H
#define UI_MODIFICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Modification
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QTextEdit *planArea;
    QLabel *title_label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *rescheduleButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *replaceButton;
    QPushButton *backButton;

    void setupUi(QDialog *Modification)
    {
        if (Modification->objectName().isEmpty())
            Modification->setObjectName(QString::fromUtf8("Modification"));
        Modification->resize(800, 574);
        Modification->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        homeButton = new QPushButton(Modification);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        homeButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        selectButton = new QPushButton(Modification);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        selectButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        visualiseButton = new QPushButton(Modification);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        visualiseButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        modifyButton = new QPushButton(Modification);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        modifyButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        planArea = new QTextEdit(Modification);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(150, 240, 501, 321));
        planArea->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));
        title_label = new QLabel(Modification);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(150, 210, 371, 17));
        title_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        frame = new QFrame(Modification);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(180, 70, 431, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));

        horizontalLayout->addWidget(addButton);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        rescheduleButton = new QPushButton(frame);
        rescheduleButton->setObjectName(QString::fromUtf8("rescheduleButton"));
        rescheduleButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));

        horizontalLayout->addWidget(rescheduleButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        removeButton = new QPushButton(frame);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));

        horizontalLayout_2->addWidget(removeButton);

        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        replaceButton = new QPushButton(frame);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));

        horizontalLayout_2->addWidget(replaceButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        backButton = new QPushButton(Modification);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(690, 10, 89, 25));
        backButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));

        retranslateUi(Modification);

        QMetaObject::connectSlotsByName(Modification);
    } // setupUi

    void retranslateUi(QDialog *Modification)
    {
        Modification->setWindowTitle(QApplication::translate("Modification", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Modification", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Modification", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Modification", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("Modification", "Modify", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("Modification", "TextLabel", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("Modification", "Add", 0, QApplication::UnicodeUTF8));
        rescheduleButton->setText(QApplication::translate("Modification", "Reschedule", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("Modification", "Remove", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("Modification", "Replace", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("Modification", "go back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Modification: public Ui_Modification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICATION_H
