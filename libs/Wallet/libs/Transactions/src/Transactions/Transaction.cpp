#include "Transaction.h"

float Transaction::amount() const
{
    return m_amount;
}

void Transaction::setAmount(float newAmount)
{
    if (m_amount == newAmount)
        return;
    m_amount = newAmount;
    emit amountChanged();
}
