#include "mainwindow.h"
#include "map.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test = c.createconnect();
    MainWindow w;
    Map m;
    if (test)
    {
        w.show();
        m.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                                 QObject::tr("connection successful.\n"
                                             "Click Cancel to exit."),
                                 QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                              QObject::tr("connection failed.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);

    return a.exec();
}
