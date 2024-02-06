#include "tool.h"
#include <QDebug>

tool::tool() {}

void tool::decimalization(QString s)
{
    double t=0;
    QString q=" null";
    if(s.lastIndexOf(".")!=-1){
        int a=s.length()-s.indexOf(".")-1;
        t=QString::number(s.toDouble(),'f',a).toDouble();
        qDebug()<< "digital:"<<s<<"number of decimal places:"<<a;
    }else{
        t=QString::number(s.toDouble(),'f',0).toDouble();
        qDebug()<<"digital:"+s+"It's not a small number.";
    }
}
