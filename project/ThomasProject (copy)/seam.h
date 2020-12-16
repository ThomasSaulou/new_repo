#ifndef SEAM_H
#define SEAM_H

#include <QDialog>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace cv;
using namespace std;

namespace Ui {
class seam;
}

class seam : public QDialog
{
    Q_OBJECT

public:
    explicit seam(QWidget *parent = nullptr, string filename="o");
    ~seam();
    void driver(Mat &image, int seam_direction, int iterations);


protected:
    void resizeEvent(QResizeEvent *e);


private:
    Ui::seam *ui;
    string m_filename;
    int m_width=0;
    int m_height=0;
    Mat image;
    float energy_image_time = 0;
    float cumulative_energy_map_time = 0;
    float find_seam_time = 0;
    float reduce_time = 0;

    bool demo;
    bool debug;
    int seam_direction=0;
    int iterations=0;



};

#endif // SEAM_H
