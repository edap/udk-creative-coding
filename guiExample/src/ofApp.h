#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);

    ofParameter<float> y = {"circle y", 300, 0, 800};
    ofParameter<float> x= {"circle x", 300, 0, 800};
    ofParameter<float> radius= {"circle radius", 30, 0, 800};
    ofParameter<ofColor> color= {"circle color", ofFloatColor::red};
    ofxPanel myGui;

    bool drawGui = true;
};
