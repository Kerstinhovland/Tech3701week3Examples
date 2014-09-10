#include "ofApp.h"
ofImage image;
ofImage image2;

//--------------------------------------------------------------
void ofApp::setup(){
    image.loadImage("crystal.jpg");
    image2.clone(image);
}

//--------------------------------------------------------------
void ofApp::update(){
    float time = ofGetElapsedTimef();
    
    for(int y=0; y<image.height; y++){
        for (int x=0; x<image.width;x++) {
            float amp = sin(y*.03);
            int x1=x+sin(time*2.0) *amp *50.0;
            x1= ofClamp(x1,0,image.width-1);
            
            ofColor color = image.getColor(x1,y);
            int r = color.r;
            int g = color.g;
            int b = color.b;
            
            color.r = 255-r;
            color.g = 255-g;
            color.b = 255-b;
            image2.setColor(x,y,color);
        }
    }
    image2.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255,255,255);
    ofSetColor(255,255,255);
    image2.draw(0,0);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
