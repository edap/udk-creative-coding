#include "ofApp.h"

void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
}

void ofApp::update(){

}

void ofApp::draw(){
    int w = ofGetWidth();
    int h = ofGetHeight();
    int size = 300;


    //a
    ofPushStyle();
    ofSetColor(255);
    ofDrawRectangle(w/4, h/4, size, size);
    ofSetColor(ofFloatColor::red);
    // legend a
    ofDrawBitmapString(ofToString(a),w/4, h/4 );


    //b
    ofSetColor(255);
    ofDrawRectangle(w - w/4, h/4, size, size);
    // legend b
    ofSetColor(ofFloatColor::red);
    ofDrawBitmapString(ofToString(b), w - w/4, h/4);
    ofPopStyle();

    // result:
    ofPushStyle();
    if(a == b){
        ofSetColor(ofFloatColor::red);
    }

    else if(a > b){
        ofSetColor(ofFloatColor::yellow);
    }
    else if(a < b){
        ofSetColor(ofFloatColor::blue);
    }
    else if(a <= b){
        ofSetColor(ofFloatColor::orange);
    }
//
//    else if(a >= b){
//        ofSetColor(ofFloatColor::orange);
//    }
//    else if(a <= b){
//        ofSetColor(ofFloatColor::violet);
//    }

    // what if you move this condition at the top?
    // why it looks like the condition <= and >= are
    // not respected anymore?
    else if(a != b){
        ofSetColor(ofFloatColor::blue);
    }

    ofDrawRectangle(w/2, h/2 + size/2, size, size);
    // legend result
    ofSetColor(ofFloatColor::green);
    ofDrawBitmapString("result", w/2, h/2 + size/2);

    ofPopStyle();
}

void ofApp::keyPressed(int key){
    // switch.
    if (key == '0') {
        a = 0;
    }
    if (key == '1') {
        a = 1;
    }
    if (key == '2') {
        a = 2;
    }
    if (key == '3') {
        a = 3;
    }
    if (key == '4') {
        a = 4;
    }
    if (key == '5') {
        a = 5;
    }
    if (key == '6') {
        a = 6;
    }
    if (key == '7') {
        a = 7;
    }
    if (key == '8') {
        a = 8;
    }
    if (key == '9') {
        a = 9;
    }
}

