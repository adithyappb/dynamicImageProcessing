#include "Camera.h"

Camera::Camera() {}

Camera::~Camera() {
    cap.release();  // Release camera capture
}

bool Camera::initialize(int deviceIndex) {
    cap.open(deviceIndex);  // Open camera with device index
    if (!cap.isOpened()) {
        return false;  // Failed to open camera
    }
    return true;
}

bool Camera::captureFrame(cv::Mat& frame) {
    return cap.read(frame);  // Read frame from camera
}

