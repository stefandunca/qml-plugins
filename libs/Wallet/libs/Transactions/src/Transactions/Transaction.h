#pragma once

#include <QObject>

class Transaction: public QObject {
    Q_OBJECT

    Q_PROPERTY(float amount READ amount WRITE setAmount NOTIFY amountChanged)
public:

    float amount() const;
    void setAmount(float newAmount);

signals:
    void amountChanged();

private:
    float m_amount = 0;
};
