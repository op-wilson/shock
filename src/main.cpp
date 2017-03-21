#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QQmlContext>

#include "MyClass.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    MyClass myClass;  // A class containing my functions

    myClass.init();
    engine.rootContext()->setContextProperty("_myClass", &myClass);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
