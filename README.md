# Line-side-Library
车间线边库管理系统

QT版本：5.9.0

QT连接mysql：https://www.codeprj.com/blog/a950671.html

```
#include "widget.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    Widget w;
//    w.show();


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");//设置你远程服务器的IP
        db.setDatabaseName("test");//数据库名
        db.setUserName("root");//数据库用户名和密码
        db.setPassword("123456");
        if (!db.open())
            qDebug() << "Failed to connect to mysql";
        else
            qDebug() << "success!";
    //return a.exec();
}

```

窗口高级设置：https://www.bilibili.com/video/BV14t411b7EL?p=2

