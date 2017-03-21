import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Controls 1.2

Window {
    visible: true
    width: 1024
    height: 600

    Button{
        id:button1
        x:30
        y:30
        width:100
        height:100
        text:"Quit"
        onClicked: {
            Qt.quit();
        }
    }
    Button{
        id:button2
        x:150
        y:30
        width:100
        height:100
        text:"start"
        onClicked: {
            _myClass.start(10,200);
        }
    }
    Button{
        id:button3
        x:270
        y:30
        width:100
        height:100
        text:"release"
        onClicked: {
            _myClass.release();
        }
    }
    Button{
        id:button4
        x:390
        y:30
        width:100
        height:100
        text:"pump"
        onClicked: {
            _myClass.pump();
        }
    }
}
