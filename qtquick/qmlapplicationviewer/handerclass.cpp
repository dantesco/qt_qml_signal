#include "handerclass.h"
#include <QDebug>

HanderClass::HanderClass(QObject *parent) :
    QObject(parent)
{
}

void HanderClass::getData()
{
    QString text("BYE");
    qDebug()<< "getData";
    emit data(QVariant(text));
}

void HanderClass::getData(QVariant var)
{
    QString text("BYE ");
    text.append(QString(var.toString()));
    qDebug()<< "getData"<< text;
    emit data(QVariant(text));
}


void HanderClass::getData(QString var)
{
    QString text("Hola ");
    text.append(var);
    qDebug()<< "getData"<< text;
    emit data(QVariant(text));
}
