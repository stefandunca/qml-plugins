#include "ChatPlugin.h"

//#include "ChatModule.h"

#include <QQmlEngine>

void
ChatPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(QString(uri) == "demo");

    //qmlRegisterType<ChatModule>(uri, 1, 0, "ChatModule");
}

void ChatPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    engine->addImportPath("qrc:///");
}
