#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void energy_function(Mat &image, Mat &output){
    Mat dx, dy;
    Sobel(image, dx, CV_64F, 1, 0);
    Sobel(image, dy, CV_64F, 0, 1);
    magnitude(dx,dy, output);

    double min_value, max_value, Z;
    minMaxLoc(output, &min_value, &max_value);
    Z = 1/max_value * 255;
    output = output * Z;                    //normalize
    output.convertTo(output, CV_8U);
}


int* find_seam(Mat &image){
    int H = image.rows, W = image.cols;

    int dp[H][W];
    for(int c = 0; c < W; c++){
        dp[0][c] = (int)image.at<uchar>(0,c);
    }

    for(int r = 1; r < H; r++){
        for(int c = 0; c < W; c++){
            if (c == 0)
                dp[r][c] = min(dp[r-1][c+1], dp[r-1][c]);
            else if (c == W-1)
                dp[r][c] = min(dp[r-1][c-1], dp[r-1][c]);
            else
                dp[r][c] = min({dp[r-1][c-1], dp[r-1][c], dp[r-1][c+1]});
            dp[r][c] += (int)image.at<uchar>(r,c);
        }
    }

    int min_value = 2147483647; //infinity
    int min_index = -1;
    for(int c = 0; c < W; c++)
        if (dp[H-1][c] < min_value) {
            min_value = dp[H - 1][c];
            min_index = c;
        }

    int path[H];
    Point pos(H-1,min_index);
    path[pos.x] = pos.y;

    while (pos.x != 0){
        int value = dp[pos.x][pos.y] - (int)image.at<uchar>(pos.x,pos.y);
        int r = pos.x, c = pos.y;
        if (c == 0){
            if (value == dp[r-1][c+1])
                pos = Point(r-1,c+1);
            else
                pos = Point(r-1,c);
        }
        else if (c == W-1){
            if (value == dp[r-1][c-1])
                pos = Point(r-1,c-1);
            else
                pos = Point(r-1,c);
        }
        else{
            if (value == dp[r-1][c-1])
                pos = Point(r-1,c-1);
            else if (value == dp[r-1][c+1])
                pos = Point(r-1,c+1);
            else
                pos = Point(r-1,c);
        }
        path[pos.x] = pos.y;
    }

    return path;
}


void remove_pixels(Mat& image, Mat& output, int *seam){
    cout  << "remove1" << endl;
    for(int r = 0; r < image.rows; r++ ) {
        cout  << "remove2" << endl;

        for (int c = 0; c < image.cols; c++){
              cout  << "remove3"<<c<< "/"<< seam[r] << endl;
            if (c >= seam[r]){
                  cout  << "remove11" << endl;
                output.at<Vec3b>(r,c) = image.at<Vec3b>(r,c+1);}
            else
            {  cout  << "remove12" << endl;
                output.at<Vec3b>(r,c) = image.at<Vec3b>(r,c);}

              cout  << "remove5" << endl;
        }
    }
}

void rot90(Mat &matImage, int rotflag){
    //1=CW, 2=CCW, 3=180
    if (rotflag == 1){
        transpose(matImage, matImage);
        flip(matImage, matImage,1); //transpose+flip(1)=CW
    } else if (rotflag == 2) {
        transpose(matImage, matImage);
        flip(matImage, matImage,0); //transpose+flip(0)=CCW
    } else if (rotflag ==3){
        flip(matImage, matImage,-1);    //flip(-1)=180
    } else if (rotflag != 0){ //if not 0,1,2,3:
        cout  << "Unknown rotation flag(" << rotflag << ")" << endl;
    }
}

void remove_seam(Mat& image, char orientation = 'v'){
     cout << "ok1" << endl;
    if (orientation == 'h')
        rot90(image,1);
    int H = image.rows, W = image.cols;
    cout << "ok2" << endl;

    Mat gray;
    cvtColor(image, gray, CV_BGR2GRAY);

    Mat eimage;
    energy_function(gray, eimage);

    int* seam = find_seam(eimage);
    cout << "ok3="<< seam << endl;

    Mat output(H,W-1, CV_8UC3);
    cout << "ok1" << endl;

    remove_pixels(image, output, seam);
    cout << "ok2" << endl;

    if (orientation == 'h')
        rot90(output,2);
    cout << "ok4" << endl;

    image = output;
}

void realTime(Mat& image){
    cout << "UP ARROW: Shrink horizontally" << endl;
    cout << "LEFT ARROW: Shrink vertically" << endl;
    cout << "q: Quit" << endl;

    int key;
    while(1) {
        namedWindow("Display window", WINDOW_AUTOSIZE);
        imshow("Display window", image);
        key = waitKey(0);
        if (key == 'q')
            break;
        else if (key == 'a'){
            cout << "a" << endl;
            remove_seam(image, 'v');
         cout << "a" << endl;}
        else if (key == 's')
            remove_seam(image, 'h');
    }
}

void shrink_image(Mat& image, int new_cols, int new_rows, int width, int height){
    cout << endl << "Processing image..." << endl;
    for(int i = 0; i < width - new_cols; i++){
        cout << endl << "Processing image..." << endl;
        remove_seam(image, 'v');
        cout << endl << "Processing image..." << endl;
    }
    for(int i = 0; i < height - new_rows; i++){
        cout << endl << "Processing image..." << endl;
        remove_seam(image, 'h');
    }
}

int main( int argc, char** argv ) {
    /*if (argc < 3) {
        cerr << "Usage: .seamCarving <IMAGE_FILE> <REALTIME, 'y' for 'yes'>" << endl;
        return 1;
    }
*/
    Mat image;
    image = imread("/home/julian/Desktop/1.png", 1);

    if (!image.data) {
        cout << "No image found" << endl;
        return -1;
    }
   /* if ((*argv[2]) != 'y') {
        cout << "The size of the image is: (" << image.cols << ", " << image.rows << ")" << endl;
        int new_rows, new_cols;
    /*    cout << "Enter new width: ";
        cin >> new_cols;
        cout << "Enter new height: ";
        cin >> new_rows;*/
        /*shrink_image(image, 100, 100, image.cols, image.rows);
        cout << "Done!" << endl;
        imwrite("output.jpg", image);
    }*/
    //else
        realTime(image);

    return 0;
}
