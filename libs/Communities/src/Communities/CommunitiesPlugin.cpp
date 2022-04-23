#include "CommunitiesPlugin.h"

#include "CommunitiesModule.h"

#include <QQmlEngine>

void
CommunitiesPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(QString(uri) == "demo.Communities");

    qmlRegisterType<CommunitiesModule>(uri, 1, 0, "CommunitiesModule");
}
