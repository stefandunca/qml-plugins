import QtQuick
import QtQuick.Window
import QtQuick.Controls

import demo.App
import demo.Chat
import demo.Wallet

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr(`QML Test: ${inAppQmlObject.cppValue}; ${inAppQmlComponent.qmlValue}`)


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

    InAppQmlObject {
        id: inAppQmlObject
    }

    InAppQmlComponent {
        id: inAppQmlComponent
    }
}
