#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetRectMode(OF_RECTMODE_CENTER);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(50, 50);
    //ofNoFill();
    float side = 50;
    int gridSize = 14;

    int framecount = ofGetFrameNum();

    for (int i =0; i < gridSize * gridSize; i++) {

        // if (i%2 == 0) {
        if (i%3 == 0) {
            ofSetColor(0);
        } else {
            ofSetColor(255);
        }

        ofDrawRectangle((i%gridSize) * side,
                        int(i/gridSize) * side,
                        side,
                        side);

    }


}


