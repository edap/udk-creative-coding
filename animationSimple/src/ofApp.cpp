#include "ofApp.h"

// from https://openframeworks.cc/ofBook/chapters/animation.html#background
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
}

void ofApp::update(){

}

void ofApp::draw(){
    float x = ofMap( ofNoise( ofGetElapsedTimef()/2.0, -1000), 0, 1, 0, ofGetWidth());
    float y = ofMap( ofNoise( ofGetElapsedTimef()/2.0, 1000), 0, 1, 0, ofGetHeight());
    ofNoFill();
    ofDrawCircle(x,y,3);

}
