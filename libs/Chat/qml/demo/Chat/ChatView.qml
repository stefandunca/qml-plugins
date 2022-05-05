import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14

import demo.Chat 1.0
import demo.Wallet 1.0
import demo.Transactions 1.0

Item {
    id: root

    ChatModule {
        id: chatModule
    }

    signal processTransaction(Transaction transaction)

    ColumnLayout {
        anchors.fill: parent

        Transaction {
            id: transactionInfo
        }

        RowLayout {
            Text {
                text: "Amount"
            }

            Rectangle {
                Layout.preferredWidth: amountInput.implicitWidth * 1.3
                Layout.preferredHeight: amountInput.implicitHeight * 1.3

                border.width: 1

                TextInput {
                    id: amountInput

                    anchors.centerIn: parent

                    text: "30"
                }
            }
        }

        Button {
            text: "Process Transaction"
            onClicked: {
                transactionInfo.amount = parseInt(amountInput.text)
                root.processTransaction(transactionInfo)
            }
        }
        Item {
            Layout.fillHeight: true
        }
    }
}
