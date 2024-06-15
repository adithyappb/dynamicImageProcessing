#include <iostream>
#include "Camera.h"
#include "ImageProcessing.h"
#include "perf_monitor.h"

int main() {
    // Initialize camera
    Camera camera;
    if (!camera.initialize(0)) {
        std::cerr << "Error: Could not initialize camera\n";
        return 1;
    }

    // Initialize image processing
    ImageProcessing imageProcessor;

    // Performance monitor
    PerformanceMonitor monitor;

    cv::Mat frame, processedFrame;

    while (true) {
        // Capture frame from camera
        if (!camera.captureFrame(frame)) {
            std::cerr << "Error: Could not capture frame\n";
            break;
        }

        // Start performance monitoring
        monitor.start();

        // Perform edge detection
        imageProcessor.edgeDetection(frame, processedFrame);

        // Stop performance monitoring
        monitor.stop();
        std::cout << "Elapsed time (ms): " << monitor.elapsedMilliseconds() << std::endl;

        // Display processed frame
        cv::imshow("Processed Frame", processedFrame);

        // Exit loop if 'q' key is pressed
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    // Release resources
    cv::destroyAllWindows();

    return 0;
}

