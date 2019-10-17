// from https://github.com/ofZach/RTP_SFPC_FALL19
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    ofSeedRandom(mouseX*1000);
    
    //ofNoise();    (0-1)
    //ofSignedNoise();  (-1 1)
    
    // ofNoise(a)
    // ofNoise(a,b);
    // ofNoise(a,b,c);
    // ofNoise(a,b,c,d);
    
    
//    for (int i = 0; i < 800; i++){
//        ofDrawCircle(i, 400 + ofRandom(-100,100), 1);
//    }

//    for (int i = 0; i < 800; i++){
//        ofDrawCircle(i, 400 + ofSignedNoise(i*0.01, mouseX*0.01)*100, 1);
//    }
    
    
    for (int i = 0; i < 400; i++){
        for (int j = 0; j < 400; j++){
            ofSetColor(ofNoise(i*0.01, j*0.01) * 255);
            ofDrawRectangle(i*2, j*2, 2,2);
        }
    }

}
