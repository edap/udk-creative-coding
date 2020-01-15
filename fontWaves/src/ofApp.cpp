#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // why 3 times true? check the documentation! try to replace the last
    // true with a false and you will receive an error
    font.load("framd.ttf", 200, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    vector < ofPath > paths = font.getStringAsPoints("BAUHAUS", true, false);

    ofTranslate(300,300);

    for (int i = 0; i < paths.size(); i++){
        vector < ofPolyline > lines = paths[i].getOutline();
        
        ofBeginShape();
        for (int j = 0; j < lines.size(); j++){

            ofPolyline temp = lines[j].getResampledBySpacing(4);
            for (int k = 0; k < temp.size(); k++){
                temp[k].x += 50 * sin(temp[k].y*0.04 + ofGetElapsedTimef());

                // uncomment this to draw circles
//                float noised =ofNoise(temp[k].y* 0.04+ofGetElapsedTimef());
//                ofColor color = ofColor(255 - 100*noised, 255 - 160*noised, 40*noised, 100);
//                ofSetColor(color);
//                ofDrawCircle(temp[k].x, temp[k].y, 10);
            }


            if(drawShape){
                if (j != 0) ofNextContour();
                for (int k = 0; k < temp.size(); k++){
                    ofVertex(temp[k]);
                }
            }else{
                temp.draw();
            }
        }
        ofEndShape();

    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 's') {
        drawShape = !drawShape;
    }
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
