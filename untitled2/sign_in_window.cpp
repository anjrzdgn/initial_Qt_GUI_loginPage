#include "sign_in_window.h"
#include "ui_sign_in_window.h"
#include "universal_header.h"
#include "result_window.h"

sign_in_window::sign_in_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sign_in_window)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    ui->label_2->setVisible(false);
}

sign_in_window::~sign_in_window()
{
    delete ui;
}

void sign_in_window::on_pushButton_clicked()
{
    QString tmp_user_name = ui->input_usrnm->text();
    QString tmp_password = ui->input_psswrd->text();

    if (tmp_user_name == personal_data.user_name && tmp_password == personal_data.passwd)
    {
        result_window* Result = new result_window(this);
        Result->show();
    }
    else
    {
        ui->label_2->setVisible(true);
    }
}

