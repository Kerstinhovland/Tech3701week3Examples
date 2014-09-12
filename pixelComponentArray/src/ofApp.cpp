#include "ofApp.h"

//THIS PROJECT HAS BEN CHANGED TO USE TEXTURES TO DRAW

ofImage image; //Declare an image
ofTexture texture; //Declre a texture
//--------------------------------------------------------------
void ofApp::setup(){

    image.loadImage("crystal.jpg"); // Load an image into RAM
    
    unsigned char *data = image.getPixels();  //Create a data array with
    
    int components = image.bpp/8;  //Get the number of components in the data array by dividing the bits per pixel by 8 bits
    
    for(int y=0; y<image.height; y++) {  //for loop for the number of pixels in the image height
        for(int x = 0; x<image.width; x++){  //for loop for the number of pixels in image width
            int index = components * (x+image.width * y);  //move the index of the array per component
            char red = data[index];  //read red data
            char green = data[index+1]; //read green data
            char blue = data[index+2];  //read blue data
            
            float u =abs(sin(x + 0.1) * sin(y*0.1));  //create a sin function to diplace the pixels over time
            
            data [index] = red << 1;  //change the color in the data array by bit shifting the red value1 bit to the right
            data [index+1] =green>>1;  // change the color in the data array by bir shifting the green value 1 bit to the left
            data [index+2] = (255-blue); //invert the blue value
        }
    }
    
     //remember to update the image buffer before drawing!!!!
    //image.update();
    //we no longer have to update the array every loop if we are using textures
    
    //load the new data array into the texture, GL_RGB corresponds to a RGB image with no alpha
    texture.loadData(data, image.width,image.height, GL_RGB);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255,255,255);
    //draw the texture
    texture.draw(0,0);
    //image.draw(0,0);
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
