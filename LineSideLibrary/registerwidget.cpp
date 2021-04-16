#include "registerwidget.h"
#include "ui_registerwidget.h"

RegisterWidget::RegisterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWidget)
{
    ui->setupUi(this);
}

RegisterWidget::~RegisterWidget()
{
    delete ui;
}

void RegisterWidget::openRegisterWidget()
{
    this->show();
}

void RegisterWidget::on_pushButton_2_clicked()
{
    this->hide();
    emit closeRegisterWidget();
}
