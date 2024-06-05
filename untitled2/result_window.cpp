#include "result_window.h"
#include "ui_result_window.h"
#include "universal_header.h"

result_window::result_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::result_window)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    ui->age->setText(personal_data.age);
    ui->name->setText(personal_data.name);
    ui->password->setText(personal_data.passwd);
    ui->gender->setText(personal_data.gender);
}

result_window::~result_window()
{
    delete ui;
}
