#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofFloatColor::navy);
}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    line.clear();

    float time = ofGetElapsedTimef()*0.3;
    for(float angle = 0; angle <= TWO_PI; angle += 0.02) {
        float noise = ofNoise(time+(angle*0.3), 0.0f);
        // not smoothed blob
        float offset = ofMap(noise, 0 ,1 , -100.0f, 100.0f);

        // smoothed blob
        // float smoothed_offset = smoothLastPoints(100.0f, angle, TWO_PI);
        // float offset = ofMap(noise, 0 ,1 , -smoothed_offset, smoothed_offset);

        float x = (radius + offset) * cos(angle);
        float y = (radius + offset) * sin(angle);

        line.lineTo(x, y);
    }
    //tesselation = line.getTessellation();
    line.setStrokeColor(ofFloatColor::red);
    //line.setFilled(false);
    line.setFillColor(ofFloatColor::hotPink);
    line.setStrokeWidth(3.0);
    line.close();
    line.draw();

    line.setStrokeColor(ofFloatColor::lime);
    tesselation.drawWireframe();
}

float ofApp::smoothLastPoints(float offset, float angle, float round){
    float pctToSmooth = 0.2;
    float smoothStart = round *  pctToSmooth;
    float smoothEnd = round * (1.0f - pctToSmooth);
    // smooth last part of the blob
    if(angle >= smoothEnd){
        return ofMap(angle,smoothEnd, round, offset, 0.0f);
    }
    // smooth second part of the blob
    else if(angle <= smoothStart){
        return ofMap(angle, 0.0f, smoothStart, 0.0f, offset);
    }
    else{
        return offset;
    }
}
