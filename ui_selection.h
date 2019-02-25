/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_H
#define UI_SELECTION_H

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
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QListWidget *list;
    QVBoxLayout *verticalLayout;
    QPushButton *showAllButton;
    QPushButton *showLastButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;
    QPushButton *visualiseButton;
    QLabel *renamedPlanLabel;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *NamePlanLine;
    QPushButton *saveButton;

    void setupUi(QDialog *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QString::fromUtf8("Selection"));
        Selection->resize(640, 592);
        homeButton = new QPushButton(Selection);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(Selection);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        groupBox = new QGroupBox(Selection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 581, 301));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QListWidget(frame);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout->addWidget(list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        showAllButton = new QPushButton(frame);
        showAllButton->setObjectName(QString::fromUtf8("showAllButton"));

        verticalLayout->addWidget(showAllButton);

        showLastButton = new QPushButton(frame);
        showLastButton->setObjectName(QString::fromUtf8("showLastButton"));

        verticalLayout->addWidget(showLastButton);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        clearButton = new QPushButton(frame);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout->addWidget(clearButton);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(frame);


        verticalLayout_2->addLayout(horizontalLayout_2);

        visualiseButton = new QPushButton(Selection);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(559, 534, 51, 41));
        renamedPlanLabel = new QLabel(Selection);
        renamedPlanLabel->setObjectName(QString::fromUtf8("renamedPlanLabel"));
        renamedPlanLabel->setGeometry(QRect(70, 520, 541, 16));
        frame_2 = new QFrame(Selection);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(60, 370, 331, 131));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        NamePlanLine = new QLineEdit(groupBox_2);
        NamePlanLine->setObjectName(QString::fromUtf8("NamePlanLine"));

        verticalLayout_3->addWidget(NamePlanLine);

        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout_3->addWidget(saveButton);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(groupBox_2);


        retranslateUi(Selection);
        QObject::connect(clearButton, SIGNAL(clicked()), list, SLOT(clear()));

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QDialog *Selection)
    {
        Selection->setWindowTitle(QApplication::translate("Selection", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Selection", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Selection", "Select", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Selection", " Use buttons below to see the plans that you saved:", 0, QApplication::UnicodeUTF8));
        showAllButton->setText(QApplication::translate("Selection", "Show all", 0, QApplication::UnicodeUTF8));
        showLastButton->setText(QApplication::translate("Selection", "Show last", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QString());
        clearButton->setText(QString());
        visualiseButton->setText(QString());
        renamedPlanLabel->setText(QApplication::translate("Selection", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Selection", " Rename the selected plan:", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("Selection", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
