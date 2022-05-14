import QtQuick
import QtQuick.Window
import QtQuick.Controls

import demo.Chat 1.0
import demo.Wallet 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    StackView {
        id: stackView

        anchors.fill: parent

        initialItem: chatViewComponent
    }

    Component {
        id: chatViewComponent

        ChatView {
            onProcessTransaction: transaction => stackView.push(walletViewComponent.createObject(null, { transaction: transaction }))
        }
    }

    Component {
        id: walletViewComponent

        WalletView {
            id: walletView
        }
    }
}
