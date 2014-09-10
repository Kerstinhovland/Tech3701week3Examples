#include "ofApp.h"
ofImage imageCrystal;  //declare ofImage
ofPoint point;  // declare a point
ofRectangle rectangle(300,300,400,400);

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1024,1024);
    ofSetBackgroundAuto(true);
    //ofBackground(0,0,0); // background
    ofBackground(128,128,128); // background
    
    imageCrystal.loadImage("crystal.jpg");  //load initial image
    
    
    point.set(10,10);
    ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
}

//--------------------------------------------------------------
void ofApp::update(){
 
   

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255,255,255,255);
    imageCrystal.draw(0,0);  // draw image at (0,0)
    ofSetColor(128,128,128,128);
    imageCrystal.draw(50,50, imageCrystal.width/3, imageCrystal.height/3);  // draw image at (50,50) at 1.5 scale
    
    
    ofSetColor(255,255 , 0,128);
    imageCrystal.draw(80,100, imageCrystal.width/2, imageCrystal.height/1.5);  // draw image at (50,50) at 1/2 scale

    ofSetColor(0,255 ,255,128);
    imageCrystal.draw(point);  // draw image at (50,50) at 1/2 scale
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int a){
    imageCrystal.loadImage("crystal.png"); //Load image with alpha
    cout<<imageCrystal.bpp;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int a){
    imageCrystal.loadImage("crystal.jpg"); //load image with no alpha
    cout<<imageCrystal.bpp;

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    imageCrystal.draw(x,y, imageCrystal.width/1.5, imageCrystal.height/1.5);  // draw image at (50,50) at 1.5 scale
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
