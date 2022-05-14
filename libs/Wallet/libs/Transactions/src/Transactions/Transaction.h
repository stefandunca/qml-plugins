#pragma once

#include <QObject>
#include <QtQml/qqmlregistration.h>

class Transaction: public QObject {
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(float amount READ amount WRITE setAmount NOTIFY amountChanged)
public:

    float amount() const;
    void setAmount(float newAmount);

signals:
    void amountChanged();

private:
    float m_amount = 0;
};
