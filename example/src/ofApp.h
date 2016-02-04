#pragma once

#include "ofMain.h"
#include "ofxUvcControl.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    
    ofVideoGrabber cam;
    ofxUvcControl uvc;
    
    int exposure;
};
