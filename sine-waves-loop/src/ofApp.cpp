#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(50, 0, 240);
    ofSetCircleResolution(60);
    //ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    float time = ofGetElapsedTimef();
    float amplitude = 300;
    float frequency = 0.4;
    // Wave!! frequency, amplitude
    step = sin(time * frequency) * amplitude;
    //ofLog() << step;
}

//--------------------------------------------------------------
void ofApp::draw(){

    for(int i = 0; i < 50; i++){
        // circle 1
        ofPushStyle();
        ofSetColor(240, 10, 0);
        ofNoFill();
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2 + i*20, radius+step);
        ofPopStyle();

        // circle 2
        ofPushStyle();
        ofSetColor(240, 230, 0);
        ofNoFill();
        ofDrawCircle(ofGetWidth()/2 + i*20, ofGetHeight()/2, radius+step);
        ofPopStyle();

        // line
        ofPushStyle();
        ofSetColor(255);
        ofNoFill();
        ofDrawLine(ofGetWidth()/2 + i*20,
                   0,
                   ofGetWidth()/2 + i*20,
                   ofGetHeight());
        ofPopStyle();
    }

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
