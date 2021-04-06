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

/*
 * Simple C++ Test Suite
 */

#define __CAPTURE_ERROR__ "capture could not be opened"
#define __TEST_VIDEO_ADDRESS__ "/home/wolf/Videos/aula5.mp4"

void test1() {
    std::cout << "opencv test 1" << std::endl;
    cv::VideoCapture capture;
    if(capture.open(__TEST_VIDEO_ADDRESS__)) {
      return;  
    }else{
        throw __CAPTURE_ERROR__;
    }
    
}

void test2() {
    std::cout << "opencv test 2" << std::endl;
    std::cout << "%TEST_FAILED% time=0 testname=test2 (opencv) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% opencv" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (opencv)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (opencv)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (opencv)" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (opencv)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

