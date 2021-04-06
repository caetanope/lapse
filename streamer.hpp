/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   streamer.hpp
 * Author: wolf
 *
 * Created on 5 de Abril de 2021, 08:56
 */

#ifndef STREAMER_HPP
#define STREAMER_HPP

#include "opencv2/videoio.hpp"
#include "opencv2/core.hpp"

typedef cv::Mat Image;

class if_streamer {
public:
    virtual Image getImage(void);
    virtual void flush(void);
};

class streamer: public if_streamer {
    
};

#endif /* STREAMER_HPP */

