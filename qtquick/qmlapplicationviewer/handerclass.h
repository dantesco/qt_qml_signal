#ifndef HANDERCLASS_H
#define HANDERCLASS_H

#include <QObject>
#include <QVariant>

class HanderClass : public QObject
{
    Q_OBJECT
public:
    explicit HanderClass(QObject *parent = 0);
    //Q_INVOKABLE void doThisAndThat(QString myString);
    //    Q_INVOKABLE QString getThisAndThat();
    
signals:
    void data(QVariant text);
    //void data(QString text);
    
public slots:
    void getData();
    void getData(QVariant var);
    void getData(QString text);
    
};

#endif // HANDERCLASS_H
