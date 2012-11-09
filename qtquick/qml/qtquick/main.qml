// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    width: 360
    height: 360
    //signal dataRequired;
    signal dataRequired(string text);
    function updateData(text){ //slot
        text2.text = text;
    }
        Rectangle {
            id: rectangle1
            x: 119
            y: 109
            width: 123
            height: 40
            color: "#e62525"
            Text {
                id: text1
                text: qsTr("Saludo")
                anchors.centerIn: parent
            }
            MouseArea {
                anchors.fill: parent

                onClicked: {
                    dataRequired(text_edit1.text);
                    //text1.text="BYE";
                    console.log("clicked");
                }
        }
    }

    TextEdit {
        id: text_edit1
        x: 22
        y: 119
        width: 80
        height: 20
        text: qsTr("text edit")
        font.pixelSize: 12
    }

    Text {
        id: text2
        x: 102
        y: 222
        text: qsTr("")
        font.pixelSize: 12
    }
}
