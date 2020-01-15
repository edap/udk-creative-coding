#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("kirgistan.jpg");
    ofPixels &pixels = img.getPixels();

    for (int y = 0; y < pixels.getHeight(); y++) {
        for (int x = 0; x <= pixels.getWidth(); x++) {
            auto imgColor = img.getColor(x, y);
            //if(imgColor.r > 200 && imgColor.g > 200 ){
            if(y % 10 == 0) {
                //if(imgColor.getSaturation() > 200){
                //auto randomColor = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
                pixels.setColor(x,y,ofFloatColor::red);
            }
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
