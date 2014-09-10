#include "ofApp.h"

ofImage image;
//--------------------------------------------------------------
void ofApp::setup(){

    image.loadImage("crystal.jpg");
    
    unsigned char *data = image.getPixels();
    
    int components = image.bpp/8;
    
    for(int y=0; y<image.height; y++) {
        for(int x = 0; x<image.width; x++){
            int index = components * (x+image.width * y);
            char red = data[index];
            char green = data[index+1];
            char blue = data[index+2];
            
            float u =abs(sin(x + 0.1) * sin(y*0.1));
            
            data [index] = red << 1;
            data [index+1] =green>>1;
            data [index+2] = (255-blue);
        }
    }
    
     //remember to update the image buffer before drawing!!!!
    image.update();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255,255,255);
    image.draw(0,0);
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
