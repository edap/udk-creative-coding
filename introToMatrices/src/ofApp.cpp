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
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofNoFill();
    ofRotateZRad(PI/2.);
    //ofRotateZRad(ofGetElapsedTimef()*0.1);
    ofDrawRectangle(0, 0, 600, 600);
    ofPopMatrix();

//    ofPushMatrix();
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofNoFill();
//    ofRotateZRad(PI/2.);
//    //ofRotateZRad(ofGetElapsedTimef()*0.1);
//    for(int i = 600; i> 10; i-= 50){
//        ofRotateZRad((ofGetElapsedTimef()+i) * 0.2);
//        ofDrawRectangle(0, 0, i-ofGetElapsedTimef()* 20, i+ofGetElapsedTimef()* 20);
//    }
//    ofPopMatrix();

}
