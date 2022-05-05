#include "TransactionsPlugin.h"

#include "Transaction.h"

#include <QQmlEngine>

#include <QDebug>

void
TransactionsPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(QString(uri) == "demo.Transactions");

    qmlRegisterType<Transaction>(uri, 1, 0, "Transaction");
}

void TransactionsPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    //engine->addImportPath("qrc:/...");
}
