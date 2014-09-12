#include "ofApp.h"

ofTexture texture; //declare a texture

//declare 4 points
ofPoint p1;
ofPoint p2;
ofPoint p3;
ofPoint p4;

//--------------------------------------------------------------
void ofApp::setup(){
    ofLoadImage(texture, "crystal.jpg"); // load an image
    
    //set the points to draw the image
    p1.x= 500; p1.y= 0;
    p2.x=1000; p2.y=0;
    p3.x=1000; p3.y=500;
    p4.x= 500; p4.y=500;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(128, 128, 128);
    ofSetColor(255, 255, 255);
    texture.draw(0,0);
    
    texture.draw(p1,p2,p3,p4);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //if a key is pressed, distort the image
    p1.x= 200; p1.y= 0;
    p2.x=1300; p2.y=0;
    p3.x=1000; p3.y=600;
    p4.x= 400; p4.y=500;

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    //when the key is released, return the image to normal
    p1.x= 500; p1.y= 0;
    p2.x=1000; p2.y=0;
    p3.x=1000; p3.y=500;
    p4.x= 500; p4.y=500;

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
