#include "ofApp.h"


void ofApp::setup(){
    ofBackground(ofFloatColor::orange);
}

void ofApp::update(){
    line.clear();
    // how to edit element in a container. The & symbol.
    // Also, how to iterate through a container using for(auto var: container)
    for(auto &point : backpack){
        point.x += ofSignedNoise(point.x, ofGetElapsedTimef());
        point.y += ofSignedNoise(point.y, ofGetElapsedTimef());
    }
}

void ofApp::draw(){
    // iterating through a container using indexes
    // in this case, i is the variable that we use as index
    for(int i = 0; i < backpack.size(); i++) {
        ofSetColor(colors.at(i));
        ofDrawCircle(backpack.at(i), 10);
        line.addVertex(backpack.at(i).x, backpack.at(i).y);
    }

    line.draw();
}

void ofApp::keyPressed(int key){
    if (key == 'c') {
        backpack.clear();
    }
}


void ofApp::mouseDragged(int x, int y, int button){
    // How to create a point
    glm::vec2 myPoint = glm::vec2(x, y);
    ofColor myColor = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));

    // how to store an element in a container
    colors.push_back(myColor);
    backpack.push_back(myPoint);
}


