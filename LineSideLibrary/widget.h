#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"mainwindow.h"
#include"registerwidget.h"

class MainWindow;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_loginPushButton_clicked();

    void on_pushButton_clicked();

    void show_registerWidget();

signals:
    void openWindows();
    void openRegisterWidget();
private:
    Ui::Widget *ui;
    MainWindow *mainWindow;
    RegisterWidget *registerWidget;
};

#endif // WIDGET_H
