/********************************************************************************
** Form generated from reading UI file 'sign_up_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_WINDOW_H
#define UI_SIGN_UP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_up_window
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *sign_up_window)
    {
        if (sign_up_window->objectName().isEmpty())
            sign_up_window->setObjectName("sign_up_window");
        sign_up_window->resize(1024, 576);
        sign_up_window->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix2/smallized/sign_up copy.jpg);"));
        centralwidget = new QWidget(sign_up_window);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(510, 150, 241, 48));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 700 24pt \"Roboto\";\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(510, 218, 241, 48));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 700 24pt \"Roboto\";\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(510, 280, 241, 48));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 700 24pt \"Roboto\";\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(510, 350, 241, 48));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 700 24pt \"Roboto\";\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(510, 420, 241, 48));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 700 24pt \"Roboto\";\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 498, 161, 51));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"    background-color: transparent;\n"
"\n"
"\n"
"\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 380, 401, 201));
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 9pt \"Roboto\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 380, 401, 201));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 9pt \"Roboto\";"));
        sign_up_window->setCentralWidget(centralwidget);

        retranslateUi(sign_up_window);

        QMetaObject::connectSlotsByName(sign_up_window);
    } // setupUi

    void retranslateUi(QMainWindow *sign_up_window)
    {
        sign_up_window->setWindowTitle(QCoreApplication::translate("sign_up_window", "Dotta", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("sign_up_window", "Registraion Complete", nullptr));
        label_2->setText(QCoreApplication::translate("sign_up_window", "Registraion Faild", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_up_window: public Ui_sign_up_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_WINDOW_H
