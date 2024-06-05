/********************************************************************************
** Form generated from reading UI file 'sign_in_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_WINDOW_H
#define UI_SIGN_IN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_in_window
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *input_usrnm;
    QLineEdit *input_psswrd;
    QLabel *label_2;

    void setupUi(QMainWindow *sign_in_window)
    {
        if (sign_in_window->objectName().isEmpty())
            sign_in_window->setObjectName("sign_in_window");
        sign_in_window->resize(1024, 576);
        sign_in_window->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix2/smallized/sign_in copy.jpg);"));
        centralwidget = new QWidget(sign_in_window);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 390, 161, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        input_usrnm = new QLineEdit(centralwidget);
        input_usrnm->setObjectName("input_usrnm");
        input_usrnm->setGeometry(QRect(510, 215, 241, 51));
        input_usrnm->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 700 24pt \"Roboto\";\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        input_psswrd = new QLineEdit(centralwidget);
        input_psswrd->setObjectName("input_psswrd");
        input_psswrd->setGeometry(QRect(510, 280, 241, 51));
        input_psswrd->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 700 24pt \"Roboto\";\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        input_psswrd->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 360, 401, 201));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);\n"
"font: 700 9pt \"Roboto\";"));
        sign_in_window->setCentralWidget(centralwidget);

        retranslateUi(sign_in_window);

        QMetaObject::connectSlotsByName(sign_in_window);
    } // setupUi

    void retranslateUi(QMainWindow *sign_in_window)
    {
        sign_in_window->setWindowTitle(QCoreApplication::translate("sign_in_window", "Dotta", nullptr));
        pushButton->setText(QString());
        input_psswrd->setText(QString());
        label_2->setText(QCoreApplication::translate("sign_in_window", "Access Denied", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_in_window: public Ui_sign_in_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_WINDOW_H
