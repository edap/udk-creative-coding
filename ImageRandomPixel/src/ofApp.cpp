#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.allocate(800, 800, OF_IMAGE_COLOR);

    ofPixels &pixels = img.getPixels();

    for (int y = 0; y < pixels.getHeight(); y++) {
        for (int x = 0; x <= pixels.getWidth(); x++) {
            auto color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
            pixels.setColor(x,y,color);
        }
    }
    img.setFromPixels(pixels);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    img.draw(0, 0);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 's'){
        img.save(ofToString(ofGetElapsedTimef()) + ".jpg");
    }
}
