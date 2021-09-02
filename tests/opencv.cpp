/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   opencv.cpp
 * Author: wolf
 *
 * Created on 4 de Abril de 2021, 18:34
 */

#include <stdlib.h>
#include <iostream>

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include <opencv2/highgui.hpp>

/*
 * Simple C++ Test Suite
 */

#define __CAPTURE_ERROR__ "capture could not be opened"
#define __FRAME_ERROR__ "frame could not be retrieved"
#define __TEST_VIDEO_ADDRESS__ "/home/wolf/Videos/aula5.mp4"

cv::VideoCapture test1() {
    std::cout << "opencv test 1" << std::endl;
    cv::VideoCapture capture;
    if(capture.open(__TEST_VIDEO_ADDRESS__)) {
      std::cout << "success" << std::endl;
      return capture;  
    }else{
        throw std::invalid_argument(__CAPTURE_ERROR__);
    }
    
}

void test2() {
    std::cout << "opencv test 2" << std::endl;
    cv::VideoCapture capture = test1();
    cv::Mat frame;
    capture.retrieve(frame, 0);
    try{
        cv::imshow("Image", frame);
    }catch (...){
        throw std::invalid_argument(__FRAME_ERROR__);
    }
    cv::waitKey(0);
    
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% opencv" << std::endl;
    
    test1();
    test2();
    
    return (EXIT_SUCCESS);
}

