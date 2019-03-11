/********************************************************************************
** Form generated from reading UI file 'beforeafter.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFOREAFTER_H
#define UI_BEFOREAFTER_H

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

class Ui_BeforeAfter
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *optionA;
    QRadioButton *optionB;
    QRadioButton *optionC;
    QRadioButton *optionD;
    QLabel *statement;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *stepsLine;
    QPushButton *doneButton;
    QPushButton *closeButton;
    QLabel *label;
    QListWidget *list;

    void setupUi(QDialog *BeforeAfter)
    {
        if (BeforeAfter->objectName().isEmpty())
            BeforeAfter->setObjectName(QString::fromUtf8("BeforeAfter"));
        BeforeAfter->resize(567, 356);
        layoutWidget = new QWidget(BeforeAfter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 251, 338));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        optionA = new QRadioButton(groupBox_2);
        optionA->setObjectName(QString::fromUtf8("optionA"));

        verticalLayout->addWidget(optionA);

        optionB = new QRadioButton(groupBox_2);
        optionB->setObjectName(QString::fromUtf8("optionB"));

        verticalLayout->addWidget(optionB);

        optionC = new QRadioButton(groupBox_2);
        optionC->setObjectName(QString::fromUtf8("optionC"));

        verticalLayout->addWidget(optionC);

        optionD = new QRadioButton(groupBox_2);
        optionD->setObjectName(QString::fromUtf8("optionD"));

        verticalLayout->addWidget(optionD);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_4->addWidget(frame);

        statement = new QLabel(layoutWidget);
        statement->setObjectName(QString::fromUtf8("statement"));

        verticalLayout_4->addWidget(statement);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        stepsLine = new QLineEdit(groupBox);
        stepsLine->setObjectName(QString::fromUtf8("stepsLine"));

        verticalLayout_3->addWidget(stepsLine);


        verticalLayout_4->addWidget(groupBox);

        doneButton = new QPushButton(layoutWidget);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        verticalLayout_4->addWidget(doneButton);

        closeButton = new QPushButton(layoutWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout_4->addWidget(closeButton);

        label = new QLabel(BeforeAfter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 10, 201, 20));
        list = new QListWidget(BeforeAfter);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(300, 40, 211, 281));

        retranslateUi(BeforeAfter);

        QMetaObject::connectSlotsByName(BeforeAfter);
    } // setupUi

    void retranslateUi(QDialog *BeforeAfter)
    {
        BeforeAfter->setWindowTitle(QApplication::translate("BeforeAfter", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("BeforeAfter", "Choose an option: ", 0, QApplication::UnicodeUTF8));
        optionA->setText(QApplication::translate("BeforeAfter", "before", 0, QApplication::UnicodeUTF8));
        optionB->setText(QApplication::translate("BeforeAfter", "after", 0, QApplication::UnicodeUTF8));
        optionC->setText(QApplication::translate("BeforeAfter", "before n steps", 0, QApplication::UnicodeUTF8));
        optionD->setText(QApplication::translate("BeforeAfter", "after n steps", 0, QApplication::UnicodeUTF8));
        statement->setText(QApplication::translate("BeforeAfter", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("BeforeAfter", "  Set number of steps", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("BeforeAfter", "Done", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("BeforeAfter", "Save", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BeforeAfter", "List of parameter actions:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BeforeAfter: public Ui_BeforeAfter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFOREAFTER_H
