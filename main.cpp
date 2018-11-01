#include <iostream>

#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Mat matSrc, matGray;
    matSrc = imread("/Users/xiuchengyin/Desktop/girl.jpeg", IMREAD_UNCHANGED);
    if (matSrc.empty()){
        printf("imread failed \n");
        return -1;
    }
    namedWindow("src", WINDOW_AUTOSIZE);
    imshow("src", matSrc);

    cvtColor(matSrc, matGray, COLOR_BGR2GRAY);
    namedWindow("gray", WINDOW_AUTOSIZE);
    imshow("gray", matGray);
    imwrite("opencv-logo-gray.png", matGray);

    waitKey();

    destroyAllWindows();
    return 0;
}