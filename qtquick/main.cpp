#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include "handerclass.h"

#include <QGraphicsObject>
#include <QDeclarativeContext>
#include <QDebug>

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qml/qtquick/main.qml"));

    HanderClass myClass;
    QObject *rootObject = dynamic_cast<QObject*>(viewer.rootObject());
    qDebug()<<"main";
        QObject::connect(rootObject, SIGNAL(dataRequired(QString)), &myClass, SLOT(getData(QString)));
        QObject::connect(&myClass, SIGNAL(data(QVariant)), rootObject, SLOT(updateData(QVariant)));

    viewer.showExpanded();

    return app->exec();
}
