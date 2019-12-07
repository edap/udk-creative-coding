#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    angle += 0.1;
    radius += 1;
    radius = radius + 1;

    if (radius > ofGetHeight()/2) {
        radius = 0;
        ofBackground(0);
    }

    if (angle >= TWO_PI) {
        angle = 0;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    // polar space to cartesian. SOHCAHTOA!!!!
    auto x = radius * cos(angle);
    auto y = radius * sin(angle);

    ofPushStyle();
    // COLOR depending on the angle
    float hue = ofMap(angle, 0, TWO_PI, 0, 255);
    auto color = ofColor();
    color.setHsb(hue, 255, 255);
    ofSetColor(color);

    ofDrawCircle(x,y, 30);
    ofPopStyle();

}
