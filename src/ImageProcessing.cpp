#include "ImageProcessing.h"

ImageProcessing::ImageProcessing() {}

ImageProcessing::~ImageProcessing() {}

void ImageProcessing::edgeDetection(const cv::Mat& inputFrame, cv::Mat& outputFrame) {
    cv::Mat grayFrame;
    cv::cvtColor(inputFrame, grayFrame, cv::COLOR_BGR2GRAY);  // Convert to grayscale
    cv::Canny(grayFrame, outputFrame, 50, 150);  // Perform Canny edge detection
}

