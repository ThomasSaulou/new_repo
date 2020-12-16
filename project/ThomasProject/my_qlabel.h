#ifndef MY_QLABEL_H
#define MY_QLABEL_H

#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QEvent>
#include <QMouseEvent>



class my_qlabel : public QLabel
{
    Q_OBJECT

public:
    explicit my_qlabel(QWidget *parent=0);

    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *);

    int x,y;

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();
    void Mouse_Released();








};

#endif // MY_QLABEL_H
