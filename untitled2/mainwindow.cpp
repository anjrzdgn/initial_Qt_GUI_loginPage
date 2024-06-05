#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sign_in_window.h"
#include "sign_up_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix2/smallized/ico_file.ico"));
    this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sign_in_clicked()
{
    sign_in_window* Sign_in = new sign_in_window(this);
    Sign_in->show();
}


void MainWindow::on_sign_up_clicked()
{
    sign_up_window* Sign_up = new sign_up_window(this);
    Sign_up->show();
}

