import QtQuick

import demo.Wallet 1.0
import demo.Transactions 1.0

Item {
    WalletModule {
    }

    property Transaction transaction

    Text {
        text: `Executing transaction with amount: ${transaction.amount}`
    }
}
