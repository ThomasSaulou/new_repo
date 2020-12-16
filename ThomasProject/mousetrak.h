#ifndef MOUSETRACK_H
#define MOUSETRACK_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QPoint>

class MouseTrack : public QLabel
{
public:
    MouseTrack(QWidget *parent=0);
    ~MouseTrack();






protected:
    void mouseMoveEvent(QMouseEvent *mouse_event);



signals:
    void sendMousePosition(QPoint&);




};

#endif // MOUSETRACK_H
