/********************************************************************************
** Form generated from reading UI file 'result_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_WINDOW_H
#define UI_RESULT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_result_window
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *name;
    QLabel *age;
    QLabel *gender;
    QLabel *password;

    void setupUi(QMainWindow *result_window)
    {
        if (result_window->objectName().isEmpty())
            result_window->setObjectName("result_window");
        result_window->resize(1024, 576);
        result_window->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix2/smallized/show_data_after_signin copy.jpg);"));
        centralwidget = new QWidget(result_window);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(420, 100, 401, 201));
        label->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 24pt \"Roboto\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 260, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 290, 41, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(320, 350, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 320, 71, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        name = new QLabel(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(390, 260, 271, 31));
        name->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        age = new QLabel(centralwidget);
        age->setObjectName("age");
        age->setGeometry(QRect(370, 290, 71, 31));
        age->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        gender = new QLabel(centralwidget);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(400, 320, 91, 31));
        gender->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        password = new QLabel(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(420, 350, 281, 31));
        password->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 12pt \"Roboto\";"));
        result_window->setCentralWidget(centralwidget);

        retranslateUi(result_window);

        QMetaObject::connectSlotsByName(result_window);
    } // setupUi

    void retranslateUi(QMainWindow *result_window)
    {
        result_window->setWindowTitle(QCoreApplication::translate("result_window", "Dotta", nullptr));
        label->setText(QCoreApplication::translate("result_window", "Wellcome", nullptr));
        label_2->setText(QCoreApplication::translate("result_window", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("result_window", "Age:", nullptr));
        label_5->setText(QCoreApplication::translate("result_window", "Password:", nullptr));
        label_6->setText(QCoreApplication::translate("result_window", "Gender:", nullptr));
        name->setText(QCoreApplication::translate("result_window", "Name:", nullptr));
        age->setText(QCoreApplication::translate("result_window", "Age:", nullptr));
        gender->setText(QCoreApplication::translate("result_window", "Gender:", nullptr));
        password->setText(QCoreApplication::translate("result_window", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class result_window: public Ui_result_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_WINDOW_H
