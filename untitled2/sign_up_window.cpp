#include "sign_up_window.h"
#include "ui_sign_up_window.h"
#include "universal_header.h"

info personal_data;

sign_up_window::sign_up_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sign_up_window)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
}

sign_up_window::~sign_up_window()
{
    delete ui;
}

void sign_up_window::on_pushButton_clicked()
{
    QString tmp_name = ui->lineEdit->text();
    QString tmp_user_name = ui->lineEdit_2->text();
    QString tmp_password = ui->lineEdit_3->text();
    QString tmp_gender = ui->lineEdit_4->text();
    QString tmp_age = ui->lineEdit_5->text();


    if (tmp_name.size() != 0 &&
    tmp_user_name.size() != 0 &&
    tmp_age.size() != 0 &&
    tmp_password.size() != 0 &&
    (tmp_gender == "male" || tmp_gender == "female"))
    {
        personal_data.name = tmp_name;
        personal_data.user_name = tmp_user_name;
        personal_data.passwd = tmp_password;
        personal_data.gender = tmp_gender;
        personal_data.age = tmp_age;
        ui->label->setVisible(true);
    }
    else
    {
        ui->label_2->setVisible(true);
    }
}

