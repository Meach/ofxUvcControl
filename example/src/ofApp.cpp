#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setup(640, 480);
    
    uvc.setup();
    uvc.setAutoExposure(1); // manual
    exposure = uvc.getExposureAbs();
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == '+') {
        exposure++;
        uvc.setExposureAbs(exposure);
    }
    else if(key == '-') {
        exposure--;
        uvc.setExposureAbs(exposure);
    }
    else if(key == 'i') {
        ofLogNotice("ofApp") << "Exposure Absolute = " << uvc.getExposureAbs();
    }
}
