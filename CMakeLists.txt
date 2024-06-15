cmake_minimum_required(VERSION 3.10)
project(real_time_image_processing)

# Set the path to where the binary/executable should be built
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

# Find OpenCV package
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# List source files
set(SOURCES
    main.cpp
    Camera.cpp
    ImageProcessing.cpp
    utils/perf_monitor.cpp
)

# Add executable
add_executable(real_time_image_processing ${SOURCES})

# Link OpenCV libraries
target_link_libraries(real_time_image_processing ${OpenCV_LIBS})

