#include "improcessing.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "linePerso.h"



#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <iostream>

#include <QMessageBox>
using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

ImProcessing::ImProcessing()
{

}

QImage ImProcessing::sobel(QImage &image)
{
    int sobelX;
    int sobelY;
    int sobeltot;
    QImage sobel=image;

    for ( int row = 0; row < image.height()-2 ; ++row ){
        for ( int col = 0; col < image.width()-2 ; ++col ){
            sobelX=grayCalcul(image, col+2,row+2)-grayCalcul(image,col,row+2)+grayCalcul(image,col+2,row+1)-grayCalcul(image,col,row+1)+grayCalcul(image,col+2,row)-grayCalcul(image,col,row);
            sobelY=grayCalcul(image,col+2,row+2)-grayCalcul(image,col+2,row)+grayCalcul(image,col+1,row+2)-grayCalcul(image,col+1,row)+grayCalcul(image,col,row+2)-grayCalcul(image,col,row);//abs(sobelX)+abs(sobelY);;
            sobeltot=int(sqrt(sobelX*sobelX+sobelY*sobelY)/2);
            if (sobeltot>255){sobeltot=255;}
            if (sobeltot<0){sobeltot=0;}
            sobel.setPixel(col, row, qRgb(sobeltot,sobeltot,sobeltot));

        }
    }
    return sobel;

}

QImage ImProcessing::gray(QImage &image)
{
    QImage gray=image;
    int valgray=0;
    for ( int row = 0; row < image.height() ; ++row ){
        for ( int col = 0; col < image.width() ; ++col ){

            valgray=grayCalcul(image, col, row );
            gray.setPixel(col, row, qRgb(valgray,valgray,valgray));

        }
    }
    return gray;
}


int ImProcessing::grayCalcul(QImage &image, int col, int row )
{
    int gray;
    QColor color( image.pixel( col, row ) );
    gray=(color.red()+color.green()+color.blue())/3;
    return gray;
}

QImage ImProcessing::hough(QImage &image,int sobelThreshold, int sizeThreshold)
{
    QImage hough=image;
    ListLine.clear();
    ListLineAll.clear();
    vector<vector<double>> acc=accumulator(image,sobelThreshold);
    int rMax=int(sqrt(image.height()*image.height()+image.width()*image.width()));
    vector<vector<double>> MaxAcc= MaxList(acc,rMax,sizeThreshold);
    triList(MaxAcc,0);
    vector<vector<int>> pointlist;

    int size=MaxAcc.size();



    int rho=0;
    int theta=0;
    for ( int i= 0; i < min(40,size) ; ++i ){


        rho=MaxAcc[i][1];
        theta=MaxAcc[i][2];
        ListLineAll.push_back(new Line(rho,theta,image.height(),image.width()));

    }
    fillListPointer();
    fillListLine();


    return hough;
}
int ImProcessing::max(int a,int b){
    if(a-b<0){return b;}
    else {return a;}

}


void ImProcessing::fillListLine()
{
    ListLine.clear();

    for ( int i= 0; i < m_nbLine ; ++i ){

        ListLine.push_back(ListLineAll[listPointer[i]]);

    }
}
void ImProcessing::fillListPointer()
{

    listPointer.clear();
    for (int k=0;k<m_nbLine;k++){
        listPointer.push_back(k);
    }
}

void ImProcessing::setNbLine(int nb)
{
    m_nbLine=nb;
}

void ImProcessing::listPointerChange(int currentLine, int add)
{
    if (add==1){
        if(listPointer[currentLine]<ListLineAll.size()-1){
             listPointer[currentLine]++;

        }

    }
    else{

        if(listPointer[currentLine]>0){
       listPointer[currentLine]--;}
    }
    fillListLine();
}

bool ImProcessing::DrawnLineExiste()
{
    if (DrawLines.size()>0){
        return true;
    }
    else {
        return false;
    }
}

int ImProcessing::getNbofLines()
{
    return ListLineAll.size();
}

vector<vector<double> > ImProcessing::listHough(int y, QImage Map, QImage Sobel, vector<int> &cursor)
{
    vector<vector<double>> ListXHough;


    QColor colorMap;
    QColor colorSobel;
    int valColor;

    for(int i=0;i<int(ListLine.size());i++){
cout<< "wassup"<<endl;
        if (cursor[i]==ListLine[i]->getListPoint().size()){

        }
        else if (ListLine[i]->getListPoint()[cursor[i]][1]>y){

        }
else{
        while (cursor[i]<ListLine[i]->getListPoint().size()-1 && ListLine[i]->getListPoint()[cursor[i]][1]<y){
            cursor[i]++;


        }

        colorMap=Map.pixel(ListLine[i]->getListPoint()[cursor[i]][0]+1,y);

        colorSobel=Sobel.pixel(ListLine[i]->getListPoint()[cursor[i]][0]+1,y);
        if(colorMap.red()>0){
            valColor=-colorMap.red();


        }
        else{
            valColor=colorMap.green();
        }
        ListXHough.push_back({double(ListLine[i]->getListPoint()[cursor[i]][0]),double(valColor),double(colorSobel.red())});
        }
        }

    triListCroissant(ListXHough,0);
    cout<<"listhough size=" << ListXHough.size()<< endl;
    return ListXHough;
}



vector<vector<double>> ImProcessing::accumulator(QImage &image, int sobelThreshold){
    vector<vector<double>> acc;
    vector<double> init(190,0);
    int rMax=int(sqrt(image.height()*image.height()+image.width()*image.width()));
    for(int i=-rMax;i<rMax; i++){
        acc.push_back(init);
    }
    int threshold=sobelThreshold;
    int rho=0;
    for ( int y = 0; y < image.height() ; ++y ){
        for ( int x = 0; x < image.width() ; ++x ){
            int gray=grayCalcul(image, x,  y);
            if (gray>threshold){
                for ( int theta = 0; theta < 180 ; ++theta ){
                    rho=int(x*cos(theta*M_PI/180)+(y)*sin(theta*M_PI/180));
                    if(abs(rho)<rMax ){
                        acc[rho+rMax][theta+5]+=1;

                    }

                }
            }
        }
    }
    return acc;
}
int ImProcessing::min(int a,int b){
    if(a-b<0){return a;}
    else {return b;}

}

vector<vector<double> > ImProcessing::getaccAB()
{
    return accAB;

}

vector<double> ImProcessing::getaccBetha()
{
    return accBetha;
}







QImage ImProcessing::MapModification(QImage &image){


    QImage Map=image;
    int val=0;
    int xhough=0;
    // int st=0;
    int xdraw=0;
    int i=0;
    int j=0;
    QColor color;

    QColor valMap;

    int n =0;
    vector<vector<double>> xToSort;


    vector<vector<int>> listpointhough;
    vector<vector<int>> listpointdraw;

    for (int y=0; y<image.height();y++){
        n=0;
        xToSort.clear();



        for (int a =0;a<ListLine.size();a++)
        {
            i=0;
            j=0;

            listpointhough=ListLine[a]->getListPoint();
            listpointdraw=DrawLines[a]->getListPoint();
            while(i<listpointhough.size()-1 && listpointhough[i][1]<y ){
                i++;
            }

            while(j<listpointdraw.size()-1 && listpointdraw[j][1]<y){
                j++;

            }
cout<< "debug6="<<i<<"/"<<j<<endl;
            xhough=listpointhough[i][0];
            xdraw=listpointdraw[j][0];


            xToSort.push_back({double(xhough),double(xdraw-xhough)});
            if(a==0){


        }
        }

        cout<< "debug3"<<endl;

        triListCroissant(xToSort,0);

        for (int x=0;x<image.width();x++){


            cout<< "debug4 N="<<n<< "/ X="<<x<<endl;

            color=Map.pixel(x,y);
            if (n==0){

                if(x<xToSort[n][0]){
                    if (xToSort[n][1]<0)
                        Map.setPixel(x, y, qRgb(abs(xToSort[n][1]),0,0));
                    else
                        Map.setPixel(x, y, qRgb(0,abs(xToSort[n][1]),0));

                }
                else{
                    if(n<xToSort.size()-1){

                    val=xToSort[n+1][1]-xToSort[n][1];
}
                    else{
                        val=-xToSort[n][1];
                    }
                    if (val<0)
                        Map.setPixel(x, y, qRgb(abs(val),0,0));
                    else
                        Map.setPixel(x, y, qRgb(0,abs(val),0));

                }
                 if(n<xToSort.size()-1){


                if(x>=xToSort[n+1][0]){

                    n++;
                }
                 }
            }



            else if (n==xToSort.size()-1){
                if (xToSort[n][1]>0)
                    Map.setPixel(x, y, qRgb(abs(xToSort[n][1]),0,0));
                else
                    Map.setPixel(x, y, qRgb(0,abs(xToSort[n][1]),0));
                //  }



            }
            else{
                 if(n<xToSort.size()){
                val=xToSort[n][1]-xToSort[n+1][1];
                if (val>0){

                    Map.setPixel(x, y, qRgb(abs(val),0,0));

                }
                else{

                    Map.setPixel(x, y, qRgb(0,abs(val),0));

                }


                if(x>=xToSort[n+1][0]){

                    n++;
                }



}
            }

        }
    }


    return Map;
}




QImage ImProcessing::MapModificationVertical(QImage &image){


    QImage Map=image;
    int val=0;
    int yhough=0;
    int ydraw=0;
    int i=0;
    int j=0;
    QColor color;
    QColor valMap;
    int n =0;
    vector<vector<double>> yToSort;
    vector<vector<int>> listpointhough;
    vector<vector<int>> listpointdraw;

    for (int x=0; x<image.width();x++){
        n=0;
        yToSort.clear();


        cout<< "debug2="<<x<<endl;

        for (int a =0;a<ListLine.size();a++)
        {
            i=0;
            j=0;

            listpointhough=ListLine[a]->getListPoint();
            listpointdraw=DrawLines[a]->getListPoint();
cout<< "debug5"<<endl;
            while(i<listpointhough.size()-1 && listpointhough[i][0]<x ){
                i++;
            }

            while(j<listpointdraw.size()-1 && listpointdraw[j][0]<x){
                j++;

            }
cout<< "debug6="<<i<<"/"<<j<<endl;
            yhough=listpointhough[i][1];
            ydraw=listpointdraw[j][1];


            yToSort.push_back({double(yhough),double(ydraw-yhough)});
            if(a==0){


        }
        }

        cout<< "debug3"<<endl;

        triListCroissant(yToSort,0);

        for (int y=0;y<image.height();y++){


            cout<< "debug4 N="<<n<< "/ y="<<y<<endl;

            color=Map.pixel(x,y);
            if (n==0){

                if(y<yToSort[n][0]){
                    if (yToSort[n][1]<0)
                        Map.setPixel(x, y, qRgb(abs(yToSort[n][1]),0,0));
                    else
                        Map.setPixel(x, y, qRgb(0,abs(yToSort[n][1]),0));

                }
                else{
                    if(n<yToSort.size()-1){

                    val=yToSort[n+1][1]-yToSort[n][1];
}
                    else{
                        val=-yToSort[n][1];
                    }
                    if (val<0)
                        Map.setPixel(x, y, qRgb(abs(val),0,0));
                    else
                        Map.setPixel(x, y, qRgb(0,abs(val),0));

                }
                 if(n<yToSort.size()-1){


                if(y>=yToSort[n+1][0]){

                    n++;
                }
                 }
            }



            else if (n==yToSort.size()-1){
                if (yToSort[n][1]>0)
                    Map.setPixel(x, y, qRgb(abs(yToSort[n][1]),0,0));
                else
                    Map.setPixel(x, y, qRgb(0,abs(yToSort[n][1]),0));
                //  }



            }
            else{
                 if(n<yToSort.size()){
                val=yToSort[n][1]-yToSort[n+1][1];
                if (val>0){

                    Map.setPixel(x, y, qRgb(abs(val),0,0));

                }
                else{

                    Map.setPixel(x, y, qRgb(0,abs(val),0));

                }


                if(y>=yToSort[n+1][0]){

                    n++;
                }



}
            }

        }
    }


    return Map;
}









QImage ImProcessing::ImageModification3(QImage &image, QImage &Map, QImage &Sobel){

    QImage ImModified=image;

    int reste=10;
    int  minival=0;
    vector<vector<double>> ListPointLessBefore;
    vector<vector<double>> ListPointLessAfter;
    vector<vector<double>> ListXHough;
    QColor colorMap;
    QColor colorHough;
    QColor colorSobel;
    int valColor=0;
    int verif=0;
    vector<vector<double>> newList;
    vector<vector<vector<double>>> greenList;
    vector<vector<vector<double>>> redList;
    int test=0;
    int somVal=0;
    vector<int> cursor;
    cursor.clear();
    for(int i=0;i<int(ListLine.size());i++){
        cursor.push_back(0);
    }

    for (int y=0;y<image.height()-1;y++){
        verif=0;

        while(verif==0){
            verif=1;
            cout<<"y=" <<y<<"/"<<ListLine.size() <<endl;
            reste=10;
            minival=0;
            newList.clear();
            greenList.clear();
            redList.clear();
            ListXHough.clear();

            ListXHough=listHough(y,Map,Sobel, cursor);




            int xh=0;




            for (int k =0;k<ListXHough.size();k++){
                newList.clear();

                while(xh<ListXHough[k][0])
                {
                    colorSobel=Sobel.pixel(xh,y);
                    colorMap=Map.pixel(xh,y);



                    if(colorMap.red()>0){
                        valColor=-colorMap.red();

                    }
                    else{

                        valColor=colorMap.green();
                    }
                    somVal+=valColor;
                    newList.push_back({double(xh),double(valColor),double(colorSobel.red())});
                    xh++;

                }

cout<< "here3"<<endl;
                triList(newList,2);


                newList.assign(next(newList.begin(), 0), next(newList.begin() , min(abs(newList[newList.size()-1][1]),newList.size())));



                triListCroissant(newList,0);

                if(newList.size()>0){

                    while ( abs(newList[newList.size()-1][1])-newList.size()>0){

                        int dif=min(abs(newList[newList.size()-1][1])-newList.size(),newList.size());
                        for (int k=0;k<dif;k++){
                            newList.push_back(newList[k]);
                        }

                    }
                    if (newList[newList.size()-1][1]-newList.size()>0){
                        verif=0;
                    }
                    if ( somVal>0){
                        greenList.push_back(newList);
                    }
                    else{
                        redList.push_back(newList);

                    }
                    somVal=0;
                }
            }
cout<< "here4"<<endl;
            newList.clear();
            xh++;
            while(xh<image.width())
            {
                colorSobel=Sobel.pixel(xh,y);
                colorMap=Map.pixel(xh,y);


                if(colorMap.red()>0){
                    valColor=-colorMap.red();


                }
                else{
                    valColor=colorMap.green();
                }
                somVal+=valColor;

                newList.push_back({double(xh),double(valColor),double(colorSobel.red())});

                xh++;
            }
if(newList.size()>0){
            triList(newList,2);

            newList.assign(next(newList.begin(), 0), next(newList.begin() , min(abs(newList[0][1]),newList.size())));


            triListCroissant(newList,0);
}
cout<< "here44"<<endl;
if(newList.size()>0){


                while ( abs(newList[newList.size()-1][1])-newList.size()>0){
                    int dif=min(abs(newList[newList.size()-1][1])-newList.size(),newList.size());
                    for (int k=0;k<dif;k++){
                        newList.push_back(newList[k]);
                    }

                }


                if (newList[newList.size()-1][1]-newList.size()>0){
                    verif=0;

                }
                if ( somVal>0){
                    greenList.push_back(newList);
                }
                else{
                    redList.push_back(newList);

                }
                somVal=0;
            }

cout<< "here5"<<endl;
            int m=greenList.size();
            int n=redList.size();
            int alpha=0;
            int betha=0;
            for (int a=0;a<m;a++){


                alpha+=greenList[a].size();
            }
            for (int a=0;a<n;a++){

                betha+=redList[a].size();
            }



            int i=0;
            int j=0;
            int count=0;
            int pos=0;


            if(i<greenList.size() && j<redList.size()){
            while(i<greenList.size() && j<redList.size()){
if(greenList[i].size()!=0 && j<redList.size()){
                while(greenList[i].size()!=0 && j<redList.size()){
                    count++;

                    if (greenList[i][0][0]<redList[j][0][0]){

                        shiftGreen(ImModified,Map, redList[j][0][0],greenList[i][0][0],y);

                        while(pos<greenList[i].size() && greenList[i][pos][0]<redList[j][0][0] ){

                            greenList[i][pos][0]+=1;
                            pos++;
                        }
                        pos=0;

                        greenList[i].erase(greenList[i].begin());

                        redList[j].erase(redList[j].begin());
}
                    else{


                        shiftRed(ImModified,Map, greenList[i][0][0],redList[j][0][0],y);


                        while(pos<redList[j].size() && redList[j][pos][0]<greenList[i][0][0] ){


                            redList[j][pos][0]-=1;
                            pos++;
                        }
                        pos=0;
                        greenList[i].erase(greenList[i].begin());
                        redList[j].erase(redList[j].begin());
                    }

                    if (redList[j].size()==0){

                        j++;
                    }

                }
}
else{
}

                i++;

            }
            }
            else{
            }
        }


    }


    return ImModified;
}





QImage ImProcessing::ImageModificationVertical(QImage &image, QImage &Map, QImage &Sobel){

    QImage ImModified=image;

    int reste=10;
    int  minival=0;
    vector<vector<double>> ListPointLessBefore;
    vector<vector<double>> ListPointLessAfter;
    vector<vector<double>> ListYHough;
    QColor colorMap;
    QColor colorHough;
    QColor colorSobel;
    int valColor=0;
    int verif=0;
    vector<vector<double>> newList;
    vector<vector<vector<double>>> greenList;
    vector<vector<vector<double>>> redList;
    int test=0;
    vector<int> cursor;
    int somVal=0;
    cursor.clear();
    for(int i=0;i<int(ListLine.size());i++){
        cursor.push_back(0);
    }
    for (int x=0;x<image.width()-1;x++){
        verif=0;

        while(verif==0){
            verif=1;
            cout<<"x=" <<x<<"/"<<ListLine.size() <<endl;
            reste=10;
            minival=0;
            newList.clear();
            greenList.clear();
            redList.clear();
            ListYHough.clear();
            for(int i=0;i<int(ListLine.size());i++){
 cout<<"deb2="<<x<<"/"<<i<<"/"<<ListLine[i]->getListPoint()[cursor[i]][0]<<"/"<<cursor.size()<<endl;

                while (cursor[i]<ListLine[i]->getListPoint().size() && ListLine[i]->getListPoint()[cursor[i]][0]<x){
                    cursor[i]++;
                    cout<<cursor[i] <<endl;
                    test++;
                }
 cout<<"deb12="<<x<<"/"<<i<<"/"<<ListLine[i]->getListPoint()[cursor[i]][1]<<endl;
                colorMap=Map.pixel(x,ListLine[i]->getListPoint()[cursor[i]][1]);
 cout<<"deb123"<<endl;
                colorSobel=Sobel.pixel(x,ListLine[i]->getListPoint()[cursor[i]][1]);
                if(colorMap.red()>0){
                    valColor=-colorMap.red();


                }
                else{
                    valColor=colorMap.green();
                }
 cout<<"deb13"<<endl;
                ListYHough.push_back({double(ListLine[i]->getListPoint()[cursor[i]][1]),double(valColor),double(colorSobel.red())});}

            triListCroissant(ListYHough,0);

            int yh=0;


            cout<<"deb2"<<endl;


            for (int k =0;k<ListYHough.size();k++){
                newList.clear();

                while(yh<ListYHough[k][0])
                {
                    colorSobel=Sobel.pixel(x,yh);
                    colorMap=Map.pixel(x,yh);



                    if(colorMap.red()>0){
                        valColor=-colorMap.red();

                    }
                    else{

                        valColor=colorMap.green();
                    }
                    somVal+=valColor;
                    newList.push_back({double(yh),double(valColor),double(colorSobel.red())});
                    yh++;

                }


                triList(newList,2);

 cout<<"deb22"<<endl;
                newList.assign(next(newList.begin(), 0), next(newList.begin() , min(abs(newList[newList.size()-1][1]),newList.size())));



                triListCroissant(newList,0);

                if(newList.size()>0){

                    while ( abs(newList[newList.size()-1][1])-newList.size()>0){

                        int dif=min(abs(newList[newList.size()-1][1])-newList.size(),newList.size());
                        for (int k=0;k<dif;k++){
                            newList.push_back(newList[k]);
                        }

                    }
                    if (newList[newList.size()-1][1]-newList.size()>0){
                        verif=0;
                    }
                    if ( somVal>0){
                        greenList.push_back(newList);
                    }
                    else{
                        redList.push_back(newList);

                    }
                    somVal=0;
                }
            }
 cout<<"deb23"<<endl;
            newList.clear();
            yh++;
            while(yh<image.height())
            {
                 cout<<"deb233"<<endl;
                colorSobel=Sobel.pixel(x,yh);
                colorMap=Map.pixel(x,yh);

 cout<<"deb2333"<<endl;
                if(colorMap.red()>0){
                    valColor=-colorMap.red();


                }
                else{
                    valColor=colorMap.green();
                }
                somVal+=valColor;

                newList.push_back({double(yh),double(valColor),double(colorSobel.red())});

                yh++;
            }


            triList(newList,2);
if(newList.size()>0){
            newList.assign(next(newList.begin(), 0), next(newList.begin() , min(abs(newList[0][1]),newList.size())));
            cout<<"deb3"<<endl;


            triListCroissant(newList,0);}


if(newList.size()>0){

cout<<"deb31"<<endl;
                while ( abs(newList[newList.size()-1][1])-newList.size()>0){
                    cout<<"deb33"<<endl;
                    int dif=min(abs(newList[newList.size()-1][1])-newList.size(),newList.size());
                    for (int k=0;k<dif;k++){
                        newList.push_back(newList[k]);
                    }

                }
cout<<"deb34"<<endl;

                if (newList[newList.size()-1][1]-newList.size()>0){
                    verif=0;

                }
                if ( somVal>0){
                    greenList.push_back(newList);
                }
                else{
                    redList.push_back(newList);

                }
                somVal=0;
            }


            int m=greenList.size();
            int n=redList.size();
            int alpha=0;
            int betha=0;
            for (int a=0;a<m;a++){


                alpha+=greenList[a].size();
            }
            for (int a=0;a<n;a++){

                betha+=redList[a].size();
            }



            int i=0;
            int j=0;
            int count=0;
            int pos=0;
            cout<<"deb5"<<endl;


            if(i<greenList.size() && j<redList.size()){
            while(i<greenList.size() && j<redList.size()){
if(greenList[i].size()!=0 && j<redList.size()){
                while(greenList[i].size()!=0 && j<redList.size()){
                    count++;

                    if (greenList[i][0][0]<redList[j][0][0]){

                        shiftGreenVertical(ImModified,Map, redList[j][0][0],greenList[i][0][0],x);

                        while(pos<greenList[i].size() && greenList[i][pos][0]<redList[j][0][0] ){

                            greenList[i][pos][0]+=1;
                            pos++;
                        }
                        pos=0;

                        greenList[i].erase(greenList[i].begin());

                        redList[j].erase(redList[j].begin());
}
                    else{


                        shiftRedVertical(ImModified,Map, greenList[i][0][0],redList[j][0][0],x);


                        while(pos<redList[j].size() && redList[j][pos][0]<greenList[i][0][0] ){


                            redList[j][pos][0]-=1;
                            pos++;
                        }
                        pos=0;
                        greenList[i].erase(greenList[i].begin());
                        redList[j].erase(redList[j].begin());
                    }

                    if (redList[j].size()==0){

                        j++;
                    }

                }
}
else{
}

                i++;

            }
            }
            else{
            }
        }


    }


    return ImModified;
}





void ImProcessing::shiftGreen(QImage &image, QImage &Map,int max,int min, int y){
    QColor color;
    QColor Mapcolor;
    QColor Mapcolor2;
    for(int x =max;x>min ;x--){

        if(x<image.width()-2){
            color=image.pixel(x, y) ;
            Mapcolor=Map.pixel(x, y) ;
            Mapcolor2=Map.pixel(x+1, y) ;
            if(Mapcolor.blue()==0 && Mapcolor2.blue()==0){

            image.setPixel(x+1,y,qRgb(color.red(),color.green(),color.blue()));}

            }


        }

    }

void ImProcessing::shiftGreenVertical(QImage &image, QImage &Map,int max,int min, int x){
    QColor color;
    QColor Mapcolor;
    QColor Mapcolor2;
    for(int y =max;y>min ;y--){

        if(y<image.height()-2){
            color=image.pixel(x, y) ;
            Mapcolor=Map.pixel(x, y) ;
            Mapcolor2=Map.pixel(x, y+1) ;
            if(Mapcolor.blue()==0 && Mapcolor2.blue()==0){

            image.setPixel(x,y+1,qRgb(color.red(),color.green(),color.blue()));}

            }


        }

    }



void ImProcessing::shiftRedVertical(QImage &image, QImage &Map, int max, int min, int x){
    QColor color;
    QColor Mapcolor;
    QColor Mapcolor2;
    for(int y =min;y<max ;y++){


        if(y<image.height()-2){



            color=image.pixel(x, y+1) ;
            Mapcolor=Map.pixel(x, y) ;
            Mapcolor2=Map.pixel(x, y+1) ;
            if(Mapcolor.blue()==0 && Mapcolor2.blue()==0){
            image.setPixel(x,y,qRgb(color.red(),color.green(),color.blue()));
            }
        }

    }

}

void ImProcessing::shiftRed(QImage &image, QImage &Map,int max,int min, int y){
    QColor color;
    QColor Mapcolor;
    QColor Mapcolor2;
    for(int x =min;x<max ;x++){


        if(x<image.width()-2){



            color=image.pixel(x+1, y) ;
            Mapcolor=Map.pixel(x, y) ;
            Mapcolor2=Map.pixel(x+1, y) ;
            if(Mapcolor.blue()==0 && Mapcolor2.blue()==0){
            image.setPixel(x,y,qRgb(color.red(),color.green(),color.blue()));
            }
        }

    }

}

void ImProcessing::clearAll()
{
    accAB.clear();
    accABDraw.clear();
    accBetha.clear();
    aDraw=0;
    bethaDraw=0;
    bDraw=0;
    ListLine.clear();
    DrawLines.clear();

}

QImage ImProcessing::drawOn(QImage image)
{


    for(int i=0;i<ListLine.size();i++){
    vector<vector<int>> po=ListLine[i]->getListPoint();
    for (int j=0; j<po.size();j++){
        image.setPixel(po[j][0], po[j][1], qRgb(0,255,0));
    }
    }
    return image;
}


QImage ImProcessing::drawOn2(QImage image)
{


    for(int i=0;i<DrawLines.size();i++){
    vector<vector<int>> po=DrawLines[i]->getListPoint();
    for (int j=0; j<po.size();j++){
        image.setPixel(po[j][0], po[j][1], qRgb(0,0,255));
    }
    }
    return image;
}


vector<vector<double>> ImProcessing::listModif(QImage &Map, QImage &Sobel, int &x, int y){
    vector<vector<double>> ListAll;
    vector<vector<double>> ListCut;

    if(x<Map.width()){

        QColor colorFirst( Map.pixel( x, y ) );

        QColor colorSecond(Map.pixel( x, y ));




        int colr=grayCalcul(Map,x,y);

        QColor QsobelColor= Sobel.pixel(x,y);
        int sobelColor=QsobelColor.red();


        while ( colorFirst.red()== colorSecond.red() && x<(Map.width()-1)){


            ListAll.push_back({double(x),double(y),double(sobelColor)});

            x++;

            QsobelColor= Sobel.pixel(x,y);

            sobelColor=QsobelColor.red();

            colorSecond=Map.pixel( x, y );

        }

        triListCroissant(ListAll,2);


        ListCut.assign(next(ListAll.begin(), 0), next(ListAll.begin() , min(colorFirst.red()+colorFirst.green(),ListAll.size())));

        triListCroissant(ListCut,0);

    }
    return ListCut;

}










vector<vector<double>> ImProcessing::lineSel(void){
    vector<vector<double>> list;
    for (int i=0; i<accBetha.size(); i++){
        if (abs(accBetha[i]-bethaDraw)<30){
            list.push_back(accAB[i]);
        }
    }
    return list;
}

vector<vector<double> > ImProcessing::calculBsec(vector<vector<double>> list, int height)
{
    vector<vector<double>> newlist;
    int h=height/2;
    double newBDraw=0;
    for (int i=0;i<list.size(); i++){
        newBDraw=h-aDraw/list[i][0]*(h-list[i][1]);
        newlist.push_back({aDraw,newBDraw});
    }
    return newlist;
}





vector<vector<double>> ImProcessing::MaxList(vector<vector<double>> acc, int rMax, int sizeThreshold){
    vector<vector<double>> list;
    int threshold=sizeThreshold;
    int a=0;
    int b=0;
    int max_i=10;
    int max_j=5;

    // int accval=0;

    vector<int> listval;
    for ( int rho =max_i; rho <2*rMax-max_i; ++rho ){
        for ( int theta = 0; theta < 190; ++theta ){
            a=0;
            b=0;
            for ( int i = 0; i < max_i ; ++i ){
                for ( int j = 0; j < max_j ; ++j ){
                    b++;
                    if(i==0 && j==0){
                        a++;
                    }
                    if (acc[rho][theta]>threshold && acc[rho][theta]>acc[rho-i][theta-j] && acc[rho][theta]>acc[rho+i][theta+j] ){

                        a++;
                    }}}
            if(a==b){
                if (int(rho-rMax)!=0){
                    list.push_back({acc[rho][theta],double(rho-rMax),double(theta-5)});}

            }}}
    return list;
}

vector<int>  ImProcessing::pointChoose(QImage &image , int rho,int thetadeg){
    vector<int> list;
    int h=image.height();
    int w=image.width();
    double theta=double(thetadeg*M_PI/180);

    int s=0;
    int Px1=0;
    int Py1=0;
    int Px2=0;
    int Py2=0;
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

                Px1=int((rho-image.height()*sint/100)/cos(theta));
                Py1=image.height()-1;
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
    list.push_back(Px1);
    list.push_back(Py1);
    list.push_back(Px2);
    list.push_back(Py2);
    return list;
}





QImage ImProcessing::drawLine(QImage image, int Px1, int Py1,int Px2, int Py2)
{
    int x=Px1,y=Py1,xAd=1,yAd=1;
    if (abs(Py2-Py1)<=0.1){
        for (int m=min(Px1,Px2);m<max(Px1,Px2); m++){
            image.setPixel(m, Py1, qRgb(255,255,255));}

    }
    else if (abs(Px2-Px1)<=0.1){
        for (int m=min(Py1,Py2);m<max(Py1,Py2); m++){
            image.setPixel(Px1, m, qRgb(255,255,255));}

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
            if(xAd*(x+xAd)-xAd*abs(((y+yAd)*100-b)/a)>0){
                y+=yAd;
                //nTrait++;
                //Line.push_back((x,y));
                if (x<image.width() && x>0 && y<image.height() && y>0)
                    image.setPixel(x, y, qRgb(255,255,255));
            }
            else{
                x+=xAd;
                //nTrait++;
                if (x<image.width() && x>0 && y<image.height() && y>0)
                    image.setPixel(x, y, qRgb(255,255,255));
            }
        }
    }
    return image;
}

QImage ImProcessing::drawLineRed(QImage image, int Px1, int Py1,int Px2, int Py2)
{
    DrawLines.clear();
    Line LineDraw;
    LineDraw.setAllFromPx(Px1,Py1,Px2,Py2,image.height(),image.width());
    vector<vector<int>> po=LineDraw.getListPoint();
    for (int j=0; j<po.size();j++){
        image.setPixel(po[j][0], po[j][1], qRgb(255,0,0));
    }
    double a =LineDraw.getA();
    for (int i=0;i<ListLine.size();i++){
        DrawLines.push_back(new Line);
        DrawLines[i]->setAllFromAMiddle(a,ListLine[i]->getMiddlePoint()[0],ListLine[i]->getMiddlePoint()[1],image.height(),image.width());
    }
    image=drawOn2(image);










    return image;
}

void ImProcessing::triList(vector<vector<double>> &list, int col){
    for ( int i = 0; i < list.size() ; ++i ){
        for(int j=i; j<list.size(); j++)
        {
            if(list[j][col]>list[i][col])
            {
                std::vector< double > valeurtemporaire = list[i];
                list[i] = list[j];
                list[j] = valeurtemporaire;
            }
        }

    }

}

void ImProcessing::triListCroissant(vector<vector<double>> &list, int col){
    for ( int i = 0; i < list.size() ; ++i ){
        for(int j=i; j<list.size(); j++)
        {
            if(list[j][col]<list[i][col])
            {
                std::vector< double > valeurtemporaire = list[i];
                list[i] = list[j];
                list[j] = valeurtemporaire;
            }
        }

    }

}

















