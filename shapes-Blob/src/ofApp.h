#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        float smoothLastPoints(float offset, float angle, float round);

    ofPath line;
    float radius = 200;
    ofVboMesh tesselation;


};
