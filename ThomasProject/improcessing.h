#ifndef IMPROCESSING_H
#define IMPROCESSING_H

#include <QImage>
#include <QObject>
#include <QMainWindow>
#include <QFileDialog>
#include <vector>
#include "line.h"

using namespace std;

class ImProcessing : public QObject
{

public:
    explicit ImProcessing();
    QImage sobel(QImage &image);
    QImage gray(QImage &image);
    QImage hough(QImage &image,int sobelThreshold, int sizeThreshold);
    int grayCalcul(QImage &image, int col, int row );
    vector<vector<double>> accumulator(QImage &image, int sobelThreshold);
    vector<vector<double>> MaxList(vector<vector<double>> liste, int Rmax, int sizeThreshold);
    vector<int> pointChoose(QImage &image , int rho,int thetadeg);
   // QImage line(QImage &image, int Px1, int Py1,int Px2,int Py2);
    void triList(vector<vector<double>> &list, int col);
    void triListCroissant(vector<vector<double>> &list, int col);
    QImage drawLine(QImage image, int Px1, int Py1,int Px2, int Py2);
    QImage drawLineRed(QImage image, int Px1, int Py1,int Px2, int Py2);

    int max(int a,int b);
    int min(int a,int b);

    vector<vector<double>> getaccAB(void);
    vector<double> getaccBetha(void);

    QImage lineModification(QImage &image);
    QImage MapModification(QImage &image);
    QImage MapModificationVertical(QImage &image);


    vector<vector<double>> lineSel(void);
    vector<vector<double>> calculBsec(vector<vector<double>> lineSelection, int height);

    QImage ImageModification3(QImage &image, QImage &Map, QImage &Sobel);
    QImage ImageModificationVertical(QImage &image, QImage &Map, QImage &Sobel);

    vector<vector<double>> listModif(QImage &Map,QImage &Sobel, int &x, int y);
    void shiftGreen(QImage &image, QImage &Map,int max,int min, int y);
    void shiftGreenVertical(QImage &image, QImage &Map,int max,int min, int x);

    void shiftRed(QImage &image, QImage &Map,int max,int min, int y);
    void shiftRedVertical(QImage &image, QImage &Map,int max,int min, int y);

    void clearAll(void);
    QImage drawOn(QImage image);
    QImage drawOn2(QImage image);
    void fillListLine(void);
    void fillListPointer(void);
    void setNbLine(int nb);
    void listPointerChange(int currentLine, int add);

    bool DrawnLineExiste(void);
    int getNbofLines(void);



    vector<vector<double>> listHough(int y,QImage Map, QImage Sobel,vector<int> &cursor);




private:

    vector<vector<double>> accAB;
    vector<vector<double>> accABDraw;
    vector<double> accBetha;
    double aDraw=0;
    double bethaDraw=0;
    double bDraw=0;
    const int m =0;
    vector<Line*> ListLine;
    vector<Line*> ListLineAll;
    vector<Line*> DrawLines;
    int m_nbLine=2;

    vector<int> listPointer;






};

#endif // IMPROCESSING_H
