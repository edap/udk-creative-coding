#pragma once

#include "ofMain.h"
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    void drawConnected(vector<ofPoint> points);
    void drawPointsSimple(vector<ofPoint> points);

    float font_size;
    ofTrueTypeFont font;

    ofFbo fbo;
    ofPixels pix;
		
};
