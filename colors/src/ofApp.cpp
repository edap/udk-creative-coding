#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bgOne = ofColor(0, 0, 255);
    bgTwo = ofFloatColor::crimson;
    // try to pass other arguments to the Circle constructor.
    pos = glm::vec2(200, 400);
    pos2 = glm::vec2(ofGetWidth()/2 - 200);
    //ofDisableAlphaBlending(); // What happen if you remove this line? observe
    // carefully the colors of your application.
}

//--------------------------------------------------------------
void ofApp::update(){
    // how could we move the circles?
}

//--------------------------------------------------------------
void ofApp::draw(){
    /// Try differents background.
    /// - Circular: `OF_GRADIENT_CIRCULAR`
    /// - Linear: `OF_GRADIENT_LINEAR`
    /// - Bar: `OF_GRADIENT_BAR`
    ofBackgroundGradient(bgOne, bgTwo, OF_GRADIENT_LINEAR);

    ofPushStyle();
    ofSetColor(ofColor(250,200,100));
    ofDrawCircle(pos, 200);
    ofPopStyle();

    ofPushStyle();
    ofSetColor(ofFloatColor::fuchsia);
    ofDrawCircle(pos2, 300);
    ofPopStyle();
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
