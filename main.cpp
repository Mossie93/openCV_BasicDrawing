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
	Mat picture = Mat::zeros(h, w, CV_8UC3);

	//drawing shapes
	rectangle(picture,
		Point(100, 150),
		Point(300, 600),
		Scalar(125, 125, 125));

	circle(picture,
		Point(200, 150),
		100,
		Scalar(125, 125, 125),
		-1,
		8);

	circle(picture, 
		Point(100,600),
		50,
		Scalar(125, 125, 125),
		-1,
		8);

	circle(picture, 
		Point(300, 600),
		50, 
		Scalar(125,125,125), 
		-1, 
		8);

	//defying window
	namedWindow("myPicture", CV_WINDOW_AUTOSIZE);

	//displaying image
	imshow("myPicture", picture);

	//waiting for interaction to close
	waitKey(0);

	return 0;
}