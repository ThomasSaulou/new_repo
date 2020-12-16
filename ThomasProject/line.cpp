#include "line.h"
#include "improcessing.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


/*Line::Line()
{

}
*/

Line::Line( int rho, int theta, int h, int w): m_rho(rho), m_theta(theta), m_h(h), m_w(w)
{
    pointChoose(m_rho,m_theta, m_h ,  m_w);
    LinePoints( Px1,  Py1,  Px2, Py2);
    calculMiddlePoint();
    calculAB();
    calculAngle();

}


void  Line::pointChoose(int rho,int thetadeg, int h, int w){

    double theta=double(thetadeg*M_PI/180);
   if (thetadeg<135 && thetadeg>45){
    Py1=0;
    Px1=int(rho/cos(theta));
    Py2=h;
    Px2=int((rho-w*cos(theta))/sin(theta));
 }
   else{
       Px1=0;
       Py1=int(rho/sin(theta));
       Px2=w;
       Py2=int((rho-h*sin(theta))/cos(theta));
   }

cout<<"thetadeg="<<thetadeg<<"Px1=" <<Px1 << " Py1="<<Py1<<" Px2=" <<Px2 << " Py2="<<Py2<< endl;






    int s=0;
     Px1=0;
     Py1=0;
     Px2=0;
     Py2=0;
    if (thetadeg==0){
        Px1=rho;
        Py1=0;
        Px2=rho;
        Py2=h;
    }
    else if ( thetadeg==90){
        Py1=rho;
        Px1=0;
        Py2=rho;
        Px2=w;

    }


    else {



        double sint = 100*sin(double(theta));


        if (rho/cos(theta)<w && rho/cos(theta)>0){
            if(s==0){

                Px1=int(rho/cos(theta));
                Py1=0;
                s=1;}

        }
        if (rho*100/sint<h && rho*100/sint>0){
            if(s==0){

                Px1=0;
                Py1=int(rho*100/sint);
                s=1;}
            else{

                Px2=0;
                Py2=int(rho*100/sint);
                s=2;
            }
        }
        if ((rho-h*sint/100)/cos(theta)<w &&(rho-h*sint/100)/cos(theta)>0){
            if(s==0){

                Px1=int((rho-h*sint/100)/cos(theta));
                Py1=h-1;
                s=1;
            }
            else if(s==1){

                Px2=int((rho-h*sint/100)/cos(theta));
                Py2=h-1;
                s=2;
            }

        }
        if (((rho-w*cos(theta))*100/sint<h) && ((rho-w*cos(theta))*100/sint>0)){
            if(s==0){

                Px1=w;
                Py1=int((rho-w*cos(theta))*100/sint);
                s=1;}
            else if (s==1){

                Px2=w;
                Py2=int((rho-w*cos(theta))*100/sint);
                s=2;
            }
        }


    }
    cout<<"@@@@@@@@   Px1=" <<Px1 << " Py1="<<Py1<<" Px2=" <<Px2 << " Py2="<<Py2<< endl;

}

void Line::LinePoints(int Px1, int Py1, int Px2, int Py2)
{
    m_listPoint.clear();
    int x=Px1,y=Py1,xAd=1,yAd=1;
    if (abs(Py2-Py1)<=0.1){
        for (int m=min(Px1,Px2);m<max(Px1,Px2); m++){
            m_listPoint.push_back({m,Py1});
          }

    }
    else if (abs(Px2-Px1)<=0.1){
        for (int m=min(Py1,Py2);m<max(Py1,Py2); m++){
            m_listPoint.push_back({Px1, m});}

    }
    else{
        int a=100*(Py2-Py1)/(Px2-Px1);
        int b=Py1*100-Px1*a;
        if (max(Px1,Px2)==Px1){
            xAd=-1;
        }
        if (max(Py1,Py2)==Py1){
            yAd=-1;
        }


        while(x>=min(Px1,Px2) && x<=max(Px1,Px2) && y>=min(Py1,Py2) && y<=max(Py1,Py2)){
            if( xAd*(x+xAd)-xAd*((y+yAd)*100-b)/a>0){
                y+=yAd;

                if (x<m_w && x>0 && y<m_h && y>0){
                    m_listPoint.push_back({x, y});
                }
            }
            else{
                x+=xAd;

                if (x<m_w && x>0 && y<m_h && y>0){
                    m_listPoint.push_back({x, y});
                }
            }
        }
    }

}

void Line::calculMiddlePoint()
{
    m_middlePoint.clear();
    int x=(Px2+Px1)/2;
    int y=(Py2+Py1)/2;
    m_middlePoint.push_back(x);
    m_middlePoint.push_back(y);

}

void Line::calculAngle(){
    if (m_a>=0){
        m_angleRad=acos(1/(sqrt(m_a*m_a+1)));

    }
    else if (m_a>m_h){
        m_angleRad=90;
    }
    else{
        m_angleRad=-acos(1/(sqrt(m_a*m_a+1)));
    }
    m_angleRad=180/M_PI*m_angleRad;
}

void Line::calculAB(){
    if(Px2-Px1!=0.){
    m_a=(double(Py2)-double(Py1))/(double(Px2)-double(Px1));
    m_b=Py1-m_a*Px1;
    }
    else{
        m_a=m_h;
        m_b=m_rho;
    }



}

vector<vector<int> > Line::getListPoint()
{
    return m_listPoint;

}

vector<int> Line::getMiddlePoint()
{
    return m_middlePoint;
}

double Line::getAngleRad()
{
    return m_angleRad;
}

double Line::getAngleDeg()
{
    return m_angleDeg;
}

double Line::getA()
{
    return m_a;
}

double Line::getB()
{
    return m_b;
}

void Line::setRho(double rho)
{
    m_rho=rho;
}

void Line::setTheta(double theta)
{
    m_theta=theta;
}

void Line::setH(int h)
{
    m_h=h;
}

void Line::setW(int w)
{
    m_w=w;
}

void Line::setAll(double rho, double theta, int h, int w)
{
    m_rho=rho;
    m_theta=theta;
    m_h=h;
    m_w=w;
    pointChoose(m_rho,m_theta, m_h ,  m_w);
    LinePoints( Px1,  Py1,  Px2, Py2);
    calculMiddlePoint();
    calculAB();
    calculAngle();
}


void Line::setAllFromPx(int x1, int y1, int x2, int y2, int h, int w)
{
    m_h=h;
    m_w=w;

    Px1=x1;
    Px2=x2;
    Py1=y1;
    Py2=y2;

    calculAB();

    LinePoints( Px1,  Py1,  Px2, Py2);
    calculMiddlePoint();
    calculAB();

    calculAngle();
}

void Line::changeLinePosition(int x, int y)
{
    Px1+=x;
    Px2+=x;
    Py1+=y;
    Py2+=y;
    setAllFromPx(Px1, Py1,  Px2,Py2, m_h,  m_w);

}

void Line::setAllFromAMiddle(double a, int x1,int y1, int h, int w)
{
    m_h=h;
    m_w=w;
    m_a=a;

    int b= y1-a*x1;
    m_b=b;

    Px1=-b/a;
    Px2=(h-b)/a;
    Py1=0;
    Py2=h;
    LinePoints( Px1,  Py1,  Px2, Py2);
    calculMiddlePoint();

    calculAB();

    calculAngle();
}

