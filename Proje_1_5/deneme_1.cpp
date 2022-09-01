#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/aruco.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"

using namespace std;
using namespace cv;

int main() {
    Mat markerImage = cv::imread("apriltag.png");
    Mat imgCopy;
    cv::resize(markerImage, markerImage, Size(640, 480));
    
    markerImage.copyTo(imgCopy);
    Ptr<cv::aruco::Dictionary> dictionary = aruco::getPredefinedDictionary(cv::aruco::DICT_APRILTAG_36h11);
    Ptr<cv::aruco::Dictionary> dictionary2 = aruco::getPredefinedDictionary(cv::aruco::DICT_APRILTAG_25h9);
    std::vector<int> ids;
    std::vector<std::vector<cv::Point2f> > corners;
    std::vector<int> ids1;
    std::vector<std::vector<cv::Point2f> > corners1;
    
    cv::aruco::detectMarkers(markerImage, dictionary, corners, ids);
    cv::aruco::detectMarkers(markerImage, dictionary2, corners1, ids1);
    cout<<"num "<<ids.size()<<endl;
    if (ids.size() > 0)
    {
        cout<<"num "<<ids.size()<<endl;
        cv::aruco::drawDetectedMarkers(imgCopy, corners, ids);
    }
    if (ids1.size() > 0)
    {
        cout<<"num "<<ids1.size()<<endl;
        cv::aruco::drawDetectedMarkers(imgCopy, corners1, ids1);
    }
    cv::imshow("a", imgCopy);
    cv::waitKey(0);
    return 0;
}
