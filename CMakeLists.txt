cmake_minimum_required(VERSION 3.10)

project(OpencvFace)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 11)
set(Opencv_include "/usr/local/Cellar/opencv/3.4.2/include" )
set(Opencv_lib "/usr/local/Cellar/opencv/3.4.2/lib")

#引入头文件
include_directories(${Opencv_include})

#引入库文件
link_directories(${Opencv_lib})

add_executable(OpencvFace main.cpp)

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

target_link_libraries(OpencvFace ${OpenCV_LIBS})