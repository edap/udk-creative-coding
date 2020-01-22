#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myGui.setup("control panel");
    myGui.add(y);
    myGui.add(x);
    myGui.add(radius);
    myGui.add(color);
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(color);
    ofDrawCircle(x, y, radius);

    if (drawGui) {
        myGui.draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'g') {
        drawGui = !drawGui;
    }

}

