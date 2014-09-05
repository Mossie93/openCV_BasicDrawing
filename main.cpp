#include <iostream>
#include <cv.h>
#include <highgui.h>

using namespace std;
using namespace cv;

//defying image width and height
#define w 400
#define h 600

int main(int argc, char** argv){
	
	//defying empty image
	Mat picture = Mat::zeros(w, h, CV_8UC3);

	//drawing shapes
	rectangle(picture,
		Point(w/4, 3*h/4),
		Point(w*w/4, h),
		Scalar(125, 125, 125));

	circle(picture,
		Point(w/2, 3*h/4),
		w/4,
		Scalar(125, 125, 125),
		2,
		8);

	circle(picture, 
		Point(w/4,h),
		3*w/5,
		Scalar(125, 125, 125),
		2,
		8);

	circle(picture, 
		3*w/5, 
		Scalar(125,125,125), 
		2, 
		8);

	//defying window
	namedWindow("myPicture", CV_WINDOW_AUTOSIZE);

	//displaying image
	imshow("myPicture", picture);

	//waiting for interaction to close
	waitKey(0);
	
	return 0;
}