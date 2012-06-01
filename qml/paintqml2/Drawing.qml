import "Canvas"
import QtQuick 1.1


Canvas {
    id:canvas
    color: "white"
    property int paintX
    property int paintY
    property int paintX0
    property int paintY0
    property int click1: 0
    property int count: 0
    property int lineWidth: 2
    property int lineWidth2: 100
    property variant drawColor: "black"
    property variant ctx: getContext("2d");

    MouseArea {
        id:mousearea
        hoverEnabled:true
        anchors.fill: parent
        onClicked: drawPoint();
        onPositionChanged:  {
            if (mousearea.pressed)
                drawLineSegment();
            paintX = mouseX;
            paintY = mouseY;
        }
    }
    states: [
        State {
            name: "Rect"
            PropertyChanges { target: mousearea; onClicked: drawRec(); onPositionChanged: {
                    if (mousearea.pressed)
                        if (click1 == 0)
                        {
                            click1 = 1;
                            paintX0 = mouseX;
                            paintY0 = mouseY;
                        }
                    }
                }
        },
        State {
            name: "Draw"
            PropertyChanges { target: mousearea; onClicked: drawPoint(); onPositionChanged: {if (mousearea.pressed)
                        drawLineSegment();
                    paintX = mouseX;
                    paintY = mouseY;}}
        },
        State {
            name: "Fill"
            PropertyChanges { target: mousearea; onClicked: drawRecFill(); onPositionChanged: {
                    if (mousearea.pressed)
                        if (click1 == 0)
                        {
                            click1 = 1;
                            paintX0 = mouseX;
                            paintY0 = mouseY;
                        }
                    }
                }
        }
    ]

    function drawLineSegment() {
        ctx.beginPath();
        ctx.strokeStyle = drawColor
        ctx.lineWidth = lineWidth
        ctx.moveTo(paintX, paintY);
        ctx.lineTo(mousearea.mouseX, mousearea.mouseY);
        ctx.stroke();
        ctx.closePath();
    }

    function drawPoint() {
        ctx.lineWidth = lineWidth
        ctx.fillStyle = drawColor
        ctx.fillRect(mousearea.mouseX, mousearea.mouseY, 2, 2);
    }

    function drawRec() {
        ctx.lineWidth = lineWidth2
        ctx.fillStyle = drawColor
        if (click1 == 1)
        {
        ctx.fillRect(paintX0, paintY0, (mousearea.mouseX - paintX0), 2);
        ctx.fillRect(paintX0, paintY0, 2, (mousearea.mouseY - paintY0));
        ctx.fillRect(paintX0, (mousearea.mouseY - 2), (mousearea.mouseX - paintX0), 2);
        ctx.fillRect((mousearea.mouseX - 2), paintY0, 2, (mousearea.mouseY - paintY0));
        }
        else
            ctx.fillRect(mousearea.mouseX, mousearea.mouseY, 2, 2);
        click1 = 0

    }
    function drawRecFill() {
        ctx.lineWidth = lineWidth2
        ctx.fillStyle = drawColor
        if (click1 == 1)
        {
        ctx.fillRect(paintX0, paintY0, (mousearea.mouseX - paintX0), (mousearea.mouseY - paintY0));
           }
        else
            ctx.fillRect(mousearea.mouseX, mousearea.mouseY, 2, 2);
        click1 = 0

    }

    function clear() {
        ctx.clearRect(0, 0, width, height);
    }
}
