#ifndef CAMERA_H
#define CAMERA_H

#include <opencv2/opencv.hpp>

class Camera {
public:
    Camera();
    ~Camera();

    bool initialize(int deviceIndex);  // Initialize camera
    bool captureFrame(cv::Mat& frame); // Capture frame from camera

private:
    cv::VideoCapture cap;
};

#endif // CAMERA_H

