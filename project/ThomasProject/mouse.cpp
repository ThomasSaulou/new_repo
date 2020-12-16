#include "mouse.h"

Mouse::Mouse(QWidget *parent):
    QLabel(parent)
{

}

void Mouse::mouseMoveEvent(QMouseEvent *ev)
{
    this->x=ev->x();
    this->y=ev->y();
    emit Mouse_Pos();
}

void Mouse::mousePressEvent(QMouseEvent *ev)
{
    emit Mouse_Pressed();

}

void Mouse::LeaveEvent(QEvent *)
{
    emit Mouse_Left();
}
