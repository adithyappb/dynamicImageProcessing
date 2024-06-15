#ifndef PERF_MONITOR_H
#define PERF_MONITOR_H

#include <chrono>
#include <iostream>

class PerformanceMonitor {
public:
    PerformanceMonitor();
    ~PerformanceMonitor();

    void start();
    void stop();
    double elapsedMilliseconds();

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> startTime, endTime;
};

#endif // PERF_MONITOR_H

