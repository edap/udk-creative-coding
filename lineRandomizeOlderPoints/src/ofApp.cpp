#include "ofApp.h"

void ofApp::setup(){
    ofBackground(20, 10, 250);
}

void ofApp::update(){
    int index = 0;
    for (auto &p:line.getVertices()) {
        float maxRandom = (line.size() - index) * 0.09;
        p.x += ofRandom(-maxRandom, maxRandom);
        p.y += ofRandom(-maxRandom, maxRandom);
        index += 1;
    }
}

void ofApp::draw(){
    line.draw();
}

void ofApp::keyPressed(int key){
    if (key == 'c') {
        line.clear();
    }
}

void ofApp::mouseDragged(int x, int y, int button){
    if (line.size() > 100) {
        line.getVertices().erase(line.getVertices().begin());
    }
    line.addVertex(x, y);
}
