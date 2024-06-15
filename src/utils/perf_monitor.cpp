#include "perf_monitor.h"

PerformanceMonitor::PerformanceMonitor() {}

PerformanceMonitor::~PerformanceMonitor() {}

void PerformanceMonitor::start() {
    startTime = std::chrono::high_resolution_clock::now();
}

void PerformanceMonitor::stop() {
    endTime = std::chrono::high_resolution_clock::now();
}

double PerformanceMonitor::elapsedMilliseconds() {
    std::chrono::duration<double, std::milli> duration = endTime - startTime;
    return duration.count();
}

