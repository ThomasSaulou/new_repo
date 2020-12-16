#ifndef LINE_H
#define LINE_H

#include <QImage>
#include <QObject>
#include <QMainWindow>
#include <QFileDialog>
#include <vector>
using namespace std;

class Line : public QObject
{
    Q_OBJECT
public:
    //explicit Line(QObject *parent = nullptr, int rho=0, int theta=0, int h=0, int w=0);
    explicit Line(int rho=0, int theta=0, int h=0, int w=0);
    //explicit Line();
    void pointChoose(int rho,int thetadeg, int h, int w);
    void LinePoints( int Px1, int Py1,int Px2, int Py2);
    void calculMiddlePoint(void);
    void calculAngle(void);
    void calculAB(void);


    vector<vector<int>> getListPoint(void);
    vector<int> getMiddlePoint(void);
    double getAngleRad(void);
    double getAngleDeg(void);
    double getA(void);
    double getB(void);


    void setRho(double rho);
    void setTheta(double theta);
    void setH(int h);
    void setW(int w);
    void setAll(double rho, double theta, int h, int w);
    void setAllFromPx(int Px1, int Py1, int Px2, int Py2, int h, int w);
    void setAllFromAMiddle(double a, int x1,  int y1, int h, int w);



    void changeLinePosition(int x, int y);







private:
    int m_rho=0;
    int m_theta=0;

    int m_h=0;
    int m_w=0;
    double Px1=0;
    double Py1=0;
    double Px2=0;
    double Py2=0;
    double m_a=0;
    double m_b=0;
    double m_angleRad=0;
    double m_angleDeg=0;
    vector<int> m_middlePoint;

    vector<vector<int>> m_listPoint;




signals:

public slots:
};

#endif // LINE_H
