//
//  ofxUvcControl.h
//  ofxUvcControl
//
//  Created by Mathieu Hingant on 03/02/16.
//
//

#pragma once

#include "ofMain.h"
#include "libuvc/libuvc.h"

class ofxUvcControl {
    
public:
    ofxUvcControl();
    ~ofxUvcControl();
    
    void setup();
    void update();
    
    
private:
//    uvc_context_t *ctx;
//    uvc_device_t *dev;
//    uvc_device_handle_t *devh;
//    uvc_stream_ctrl_t ctrl;
//    uvc_error_t res;
};

