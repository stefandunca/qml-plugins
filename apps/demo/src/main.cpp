#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QtDebug>

int main(int argc, char *argv[])
{
    //qputenv("QML_IMPORT_TRACE", "1");

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    engine.addPluginPath(QCoreApplication::applicationDirPath() + "/../../libs/Chat");
    engine.addPluginPath(QCoreApplication::applicationDirPath() + "/../../libs/Wallet");

    engine.addImportPath("qrc:/");

    const QUrl url("qrc:/main.qml");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
