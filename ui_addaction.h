/********************************************************************************
** Form generated from reading UI file 'addaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACTION_H
#define UI_ADDACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAction
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *addButton;
    QTextEdit *planArea;
    QLabel *title_label;
    QListWidget *list;
    QLabel *label;
    QPushButton *doneButton;
    QPushButton *addButton_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *newActionButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *existinButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *label1;
    QComboBox *comboBox_1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *label2;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *label3;
    QComboBox *comboBox_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *label4;
    QComboBox *comboBox_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *label5;
    QComboBox *comboBox_5;

    void setupUi(QDialog *AddAction)
    {
        if (AddAction->objectName().isEmpty())
            AddAction->setObjectName(QString::fromUtf8("AddAction"));
        AddAction->resize(632, 520);
        homeButton = new QPushButton(AddAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(AddAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(AddAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(AddAction);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        addButton = new QPushButton(AddAction);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(280, 0, 71, 41));
        planArea = new QTextEdit(AddAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(40, 160, 381, 251));
        title_label = new QLabel(AddAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(40, 130, 371, 17));
        list = new QListWidget(AddAction);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(440, 160, 161, 201));
        label = new QLabel(AddAction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 130, 161, 20));
        doneButton = new QPushButton(AddAction);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(540, 370, 61, 31));
        addButton_2 = new QPushButton(AddAction);
        addButton_2->setObjectName(QString::fromUtf8("addButton_2"));
        addButton_2->setGeometry(QRect(570, 440, 51, 41));
        frame = new QFrame(AddAction);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 60, 551, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newActionButton = new QPushButton(frame);
        newActionButton->setObjectName(QString::fromUtf8("newActionButton"));

        horizontalLayout->addWidget(newActionButton);

        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        existinButton = new QPushButton(frame);
        existinButton->setObjectName(QString::fromUtf8("existinButton"));

        horizontalLayout->addWidget(existinButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        layoutWidget = new QWidget(AddAction);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 430, 541, 71));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label1 = new QLineEdit(layoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));

        verticalLayout->addWidget(label1);

        comboBox_1 = new QComboBox(layoutWidget);
        comboBox_1->setObjectName(QString::fromUtf8("comboBox_1"));

        verticalLayout->addWidget(comboBox_1);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label2 = new QLineEdit(layoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));

        verticalLayout_2->addWidget(label2);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label3 = new QLineEdit(layoutWidget);
        label3->setObjectName(QString::fromUtf8("label3"));

        verticalLayout_3->addWidget(label3);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        verticalLayout_3->addWidget(comboBox_3);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label4 = new QLineEdit(layoutWidget);
        label4->setObjectName(QString::fromUtf8("label4"));

        verticalLayout_4->addWidget(label4);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        verticalLayout_4->addWidget(comboBox_4);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label5 = new QLineEdit(layoutWidget);
        label5->setObjectName(QString::fromUtf8("label5"));

        verticalLayout_5->addWidget(label5);

        comboBox_5 = new QComboBox(layoutWidget);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        verticalLayout_5->addWidget(comboBox_5);


        horizontalLayout_3->addLayout(verticalLayout_5);


        retranslateUi(AddAction);

        QMetaObject::connectSlotsByName(AddAction);
    } // setupUi

    void retranslateUi(QDialog *AddAction)
    {
        AddAction->setWindowTitle(QApplication::translate("AddAction", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("AddAction", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("AddAction", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("AddAction", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("AddAction", "Modify", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("AddAction", "Add", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("AddAction", "title", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddAction", "List of existing actions:", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("AddAction", "Done", 0, QApplication::UnicodeUTF8));
        addButton_2->setText(QString());
        newActionButton->setText(QApplication::translate("AddAction", "New Action", 0, QApplication::UnicodeUTF8));
        existinButton->setText(QApplication::translate("AddAction", "Existing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddAction: public Ui_AddAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACTION_H
