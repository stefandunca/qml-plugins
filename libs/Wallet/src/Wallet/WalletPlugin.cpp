#include "WalletPlugin.h"

#include "WalletModule.h"

#include <QQmlEngine>

void
WalletPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(QString(uri) == "demo.Wallet");

    qmlRegisterType<WalletModule>(uri, 1, 0, "WalletModule");
}
