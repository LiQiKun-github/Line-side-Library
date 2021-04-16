#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //ui->accountLineEdit->setStyleSheet("border: none;");



    mainWindow = new MainWindow();
    registerWidget = new RegisterWidget();
    connect(this,Widget::openWindows,mainWindow,MainWindow::openWindows);
    connect(this,Widget::openRegisterWidget,registerWidget,RegisterWidget::openRegisterWidget);
    connect(registerWidget,RegisterWidget::closeRegisterWidget,this,Widget::show_registerWidget);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_loginPushButton_clicked()
{
    this->hide();
    emit openWindows();
    //this->show();
}

void Widget::on_pushButton_clicked()
{
    this->hide();
    emit openRegisterWidget();
}

void Widget::show_registerWidget()
{
    this->show();
}
