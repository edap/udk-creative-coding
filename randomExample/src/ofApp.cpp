// https://github.com/ofZach/RTP_SFPC_FALL19
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // ofRandom(0,1);
    
    //ofSeedRandom(0);
//    for (int i = 0; i < 100; i++){
//        cout << ofRandom(0,100) << endl;
//    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSeedRandom(mouseX*1000);
    for (int i = 0; i < 30; i++){
        ofDrawCircle(50 + i * 20,400, ofRandom(1,10));
    }
    
}

