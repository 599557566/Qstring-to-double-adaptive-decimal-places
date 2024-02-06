#include <QCoreApplication>
#include "tool.h"
#include <QString>
#include <QTextStream>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    tool to;

    QTextStream qin(stdin);
    QTextStream qout(stdout);

    QString qstr;
    qout<<"Please enter a decimal:"<<endl;
    qin>>qstr;

    to.decimalization(qstr);


    return a.exec();
}
