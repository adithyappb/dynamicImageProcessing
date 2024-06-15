#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <opencv2/opencv.hpp>

class ImageProcessing {
public:
    ImageProcessing();
    ~ImageProcessing();

    void edgeDetection(const cv::Mat& inputFrame, cv::Mat& outputFrame);  // Perform edge detection
};

#endif // IMAGEPROCESSING_H

