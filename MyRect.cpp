#include "MyRect.h"
#include <QKeyEvent>
#include <iostream>
#include <cmath>
#include "Bullet.h"
#include <QSet>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if (event->key()==Qt::Key_Right)
    {
        horizontalInput = 1;
    }
    else if (event->key()==Qt::Key_Left)
    {
        horizontalInput = -1;
    }
    if (event -> key() == Qt::Key_Down)
    {
        verticalInput = 1;
    }
    else if (event -> key() == Qt::Key_Up)
    {
        verticalInput = -1;
    }
    setPos(x()+horizontalInput*speed,y()+verticalInput*speed);
}
void MyRect::keyReleaseEvent(QKeyEvent *event)
{
    if (event -> key() == Qt::Key_Up) verticalInput = 0;
    if (event -> key() == Qt::Key_Down) verticalInput = 0;
    if (event -> key() == Qt::Key_Right) horizontalInput = 0;
    if (event -> key() == Qt::Key_Left) horizontalInput = 0;
}

