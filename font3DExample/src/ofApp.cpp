#include "ofApp.h"
// credits:
// https://github.com/ofZach/RTP_SFPC_FALL19/tree/master/typeExample3

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("framd.ttf", 100, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // Have a look at all the matrices transformations
    ofEnableDepthTest();
    ofBackground(0);

    cam.begin();
    ofPushMatrix();
    // Flip the font upside down
    ofScale(1, -1, 1);

    ofSetColor(255, 0, 0);
    auto paths = font.getStringAsPoints("Hello");
    for(int i = 0; i < paths.size(); i++){
        paths.at(i).draw();
    }

    // translate on z
    ofPushMatrix();
    for (int i = 0; i < 20; i++) {
        ofTranslate(i*1.2,0,i*10);
        paths[0].draw();
    }
    ofPopMatrix();

    // world goes along the z axis
    ofPushMatrix();
    ofSetColor(0, 255, 0);
    ofRotateYDeg(90);
    paths = font.getStringAsPoints("World");
    for(int i = 0; i < paths.size(); i++){
        paths.at(i).draw();
    }
    ofPopMatrix();

    ofDrawAxis(300);
    ofPopMatrix();
    cam.end();
}
