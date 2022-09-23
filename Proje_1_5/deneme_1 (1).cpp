#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/aruco.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include <opencv2/videoio.hpp>s

using namespace std;
using namespace cv;

int main() {
   VideoCapture cap(0);

   if (!cap.isOpened()) {
           cout << "Error opening video stream or file" << endl;
           return -1;
   }
       while (1) {
               Mat frame;
               cap >> frame;
               Ptr<cv::aruco::Dictionary> dictionary = aruco::getPredefinedDictionary(cv::aruco::DICT_APRILTAG_36h11);   // Bulması gerekeni aruco sınında belirtiyoruz.
               Ptr<cv::aruco::Dictionary> dictionary2 = aruco::getPredefinedDictionary(cv::aruco::DICT_APRILTAG_25h9);
               std::vector<int> ids;
               std::vector<std::vector<cv::Point2f> > corners;
               std::vector<int> ids1;
               std::vector<std::vector<cv::Point2f> > corners1;

               cv::aruco::detectMarkers(frame, dictionary, corners, ids);
               cv::aruco::detectMarkers(frame, dictionary2, corners1, ids1);
               cout << "num " << ids.size() << endl;
               if (ids.size() > 0)
               {
                   cout << "num " << ids.size() << endl;
                   cv::aruco::drawDetectedMarkers(frame, corners, ids);
               }
               if (ids1.size() > 0)
               {
                   cout << "num " << ids1.size() << endl;
                   cv::aruco::drawDetectedMarkers(frame, corners1, ids1);
               }


               if (frame.empty())
                   break;
               imshow("Frame", frame);
               char c = (char)waitKey(25);
               if (c == 27)
                   break;
       }
       cap.release();
       destroyAllWindows();
       return 0;
}
