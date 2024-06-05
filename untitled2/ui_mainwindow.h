/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sign_in;
    QPushButton *sign_up;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 576);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix2/smallized/main_menu copy.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sign_in = new QPushButton(centralwidget);
        sign_in->setObjectName("sign_in");
        sign_in->setEnabled(true);
        sign_in->setGeometry(QRect(350, 200, 131, 71));
        sign_in->setCursor(QCursor(Qt::PointingHandCursor));
        sign_in->setAcceptDrops(false);
        sign_in->setAutoFillBackground(false);
        sign_in->setStyleSheet(QString::fromUtf8("\n"
"    background-color: transparent;\n"
"\n"
"\n"
"\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        sign_in->setIconSize(QSize(50, 20));
        sign_up = new QPushButton(centralwidget);
        sign_up->setObjectName("sign_up");
        sign_up->setEnabled(true);
        sign_up->setGeometry(QRect(540, 200, 131, 71));
        sign_up->setCursor(QCursor(Qt::PointingHandCursor));
        sign_up->setAcceptDrops(false);
        sign_up->setAutoFillBackground(false);
        sign_up->setStyleSheet(QString::fromUtf8("\n"
"    background-color: transparent;\n"
"\n"
"\n"
"\n"
"background-image: url(:/new/prefix2/smallized/tranc.png);"));
        sign_up->setIconSize(QSize(50, 20));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dotta", nullptr));
        sign_in->setText(QString());
        sign_up->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
