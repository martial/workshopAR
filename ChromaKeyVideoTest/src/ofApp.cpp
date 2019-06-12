#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    
    video.load("video.mp4");
    video.play();
    
    chromaKey.keyColor = ofColor(4, 159, 255); // set key color to green
    
    cam.listDevices();
    cam.setDeviceID(1);
    cam.setup(640,480);

}

//--------------------------------------------------------------
void ofApp::update(){

    video.update();
    cam.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    ofSetColor(255);
    cam.draw(0.0,0.0);
    // set threshold by mouseX
    chromaKey.threshold = ofNormalize(mouseX, 0, ofGetWidth());
    
    // draw chromaKey image
    chromaKey.begin();
    video.draw(0,0,640,480);
    chromaKey.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
