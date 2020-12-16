#ifndef MOUSE_H
#define MOUSE_H

#include <QObject>
#include <QWidget>
#include <QMouseEvent>
#include <QDebug>
#include <QLabel>

class Mouse : public QLabel
{
    Q_OBJECT
public:
   explicit Mouse(QWidget *parent=0);

    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void LeaveEvent(QEvent *);

    int x,y;

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();


};
#endif // MOUSE_H
