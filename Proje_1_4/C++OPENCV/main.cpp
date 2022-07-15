#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;   //Kütüphaneyi kısa şekilde çağırmak için kullanılır
using namespace cv;

int main(){
  VideoCapture cap("videoplayback_4.mp4"); //dosya yolu
  if(!cap.isOpened()){  //Videonun okunup okunamadiginin kontrolu
    cout << "Error opening video stream or file" << endl;
    return -1;
  }


  int frame_width = cap.get(cv::CAP_PROP_FRAME_WIDTH);   //video kaydetmek icin boyut alma
  int frame_height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);
  VideoWriter video("kayit.avi", cv::VideoWriter::fourcc('M','J','P','G'), 10, Size(frame_width,frame_height));

  while(1){
    Mat frame;
    cap >> frame;
    if (frame.empty())

      break;
    video.write(frame);
    imshow( "Frame", frame );
    char c=(char)waitKey(25);
    if(c==27)
      break;
  }
  cap.release();
  video.release();
  destroyAllWindows();
  return 0;

}
