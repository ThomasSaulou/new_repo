#include "mousetrack.h"



MouseTrack::MouseTrack(QWidget *parent): QLabel(parent)
{

}

MouseTrack::~MouseTrack()
{

}

void MouseTrack::mouseMoveEvent(QMouseEvent *ev)
{
    QPoint mouse_pos = ev->pos();

    if (mouse_pos.x()<=this->size().width() && mouse_pos.y()<=this->size().height()){
        if(mouse_pos.x()>0 && mouse_pos.y()>0)
        {
            emit sendMousePosition(mouse_pos);
        }
    }
}
