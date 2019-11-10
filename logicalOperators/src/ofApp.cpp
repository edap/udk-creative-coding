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
    if(a){
        ofSetColor(255);
    }else{
        ofSetColor(0);
    }
    ofDrawRectangle(w/4, h/4, size, size);
    ofSetColor(ofFloatColor::red);
    // legend a
    ofDrawBitmapString("a",w/4, h/4 );
    ofPopStyle();


    //b
    ofPushStyle();
    if(b){
        ofSetColor(255);
    }else{
        ofSetColor(0);
    }
    ofDrawRectangle(w - w/4, h/4, size, size);
    // legend b
    ofSetColor(ofFloatColor::red);
    ofDrawBitmapString("b", w - w/4, h/4);
    ofPopStyle();


    // result:
    ofPushStyle();
    if(a && b){
        ofSetColor(ofFloatColor::red);
    }
    // what if you change all the else if with an if ?
    else if(a || b){
        ofSetColor(ofFloatColor::blue);
    }
    else if(!a && !b){
        ofSetColor(ofFloatColor::yellow);
    }

    ofDrawRectangle(w/2, h/2 + size/2, size, size);
    // legend result
    ofSetColor(ofFloatColor::green);
    ofDrawBitmapString("result", w/2, h/2 + size/2);

    ofPopStyle();

    ofLog() << a;
}

void ofApp::keyPressed(int key){
    // switch.
    if (key == 'a') {
        // it means, a it is equal to the opposite of a
        // if a was false, it become true.
        // if a was true, it becomes false.
        a = !a;
    }

    if (key == 'b') {
        b = !b;
    }

}

