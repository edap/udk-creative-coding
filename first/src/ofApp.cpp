#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0, 0, 255);
    ofSetCircleResolution(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    // how to increment a variable
    mvn += 3;
    // 2) Add a limit
    // see also the application comparisonOperators, logicalOperators
//    if(mvn > ofGetWidth()){
//        mvn =0 ;
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 1) explain refresh rate, watch the video of the daumen kino on yt
    //    colors
    // explain colors, x&y and coordinate system
    ofSetColor(255, 255, 0);
    ofDrawCircle(mvn, ofGetHeight()/2, 200);

// variation 1

//    for(int i = 0; i < 200; i += 2){
//        ofNoFill();
//        ofDrawCircle(mvn, 400, i);
//    }


// variation 2
//    ofSetColor(255, 0, 0);
//    for(int i = 0; i < 200; i += 20){
//        ofNoFill();
//        float wave = sin(ofGetElapsedTimef() * 3);
//        ofDrawCircle(400 + 100, 400, i + wave * 30);
//    }

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
