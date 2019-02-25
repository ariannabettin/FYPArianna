/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lW1;
    QLineEdit *lW2;
    QLabel *label;
    QLineEdit *lW3;
    QLineEdit *lW4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lW1_2;
    QLineEdit *lW2_2;
    QLabel *label_2;
    QLineEdit *lW3_2;
    QLineEdit *lW4_2;
    QLabel *statementLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *optionA;
    QRadioButton *optionB;
    QRadioButton *optionC;
    QPushButton *doneButton;

    void setupUi(QDialog *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(301, 339);
        verticalLayout_3 = new QVBoxLayout(Window);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(Window);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lW1 = new QLineEdit(groupBox);
        lW1->setObjectName(QString::fromUtf8("lW1"));

        horizontalLayout_3->addWidget(lW1);

        lW2 = new QLineEdit(groupBox);
        lW2->setObjectName(QString::fromUtf8("lW2"));

        horizontalLayout_3->addWidget(lW2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lW3 = new QLineEdit(groupBox);
        lW3->setObjectName(QString::fromUtf8("lW3"));

        horizontalLayout_3->addWidget(lW3);

        lW4 = new QLineEdit(groupBox);
        lW4->setObjectName(QString::fromUtf8("lW4"));

        horizontalLayout_3->addWidget(lW4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lW1_2 = new QLineEdit(groupBox);
        lW1_2->setObjectName(QString::fromUtf8("lW1_2"));

        horizontalLayout_4->addWidget(lW1_2);

        lW2_2 = new QLineEdit(groupBox);
        lW2_2->setObjectName(QString::fromUtf8("lW2_2"));

        horizontalLayout_4->addWidget(lW2_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lW3_2 = new QLineEdit(groupBox);
        lW3_2->setObjectName(QString::fromUtf8("lW3_2"));

        horizontalLayout_4->addWidget(lW3_2);

        lW4_2 = new QLineEdit(groupBox);
        lW4_2->setObjectName(QString::fromUtf8("lW4_2"));

        horizontalLayout_4->addWidget(lW4_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        statementLabel = new QLabel(Window);
        statementLabel->setObjectName(QString::fromUtf8("statementLabel"));

        verticalLayout_3->addWidget(statementLabel);

        frame = new QFrame(Window);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
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


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_3->addWidget(frame);

        doneButton = new QPushButton(Window);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        verticalLayout_3->addWidget(doneButton);


        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QDialog *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Window", "Set time window:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Window", "  :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Window", "  :", 0, QApplication::UnicodeUTF8));
        statementLabel->setText(QApplication::translate("Window", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Window", "Choose an option: ", 0, QApplication::UnicodeUTF8));
        optionA->setText(QApplication::translate("Window", "constrain to window", 0, QApplication::UnicodeUTF8));
        optionB->setText(QApplication::translate("Window", "force at least once", 0, QApplication::UnicodeUTF8));
        optionC->setText(QApplication::translate("Window", "constrain and force", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("Window", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
