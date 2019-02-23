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
    QListWidget *list;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *showAllButton;
    QPushButton *showLastButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;
    QPushButton *visualiseButton;

    void setupUi(QDialog *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QString::fromUtf8("Selection"));
        Selection->resize(640, 480);
        homeButton = new QPushButton(Selection);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(Selection);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        groupBox = new QGroupBox(Selection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 571, 261));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        list = new QListWidget(groupBox);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout_2->addWidget(list);

        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
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

        visualiseButton = new QPushButton(frame);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));

        horizontalLayout->addWidget(visualiseButton);


        horizontalLayout_2->addWidget(frame);


        verticalLayout_2->addLayout(horizontalLayout_2);


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
        deleteButton->setText(QApplication::translate("Selection", "Delete", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("Selection", "Clear", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Selection", "Visualise", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
