#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofEnableDepthTest();
  ofBackground(255, 255, 255);
  
  light.enable();
  light.setSpotlight();
  light.setPosition(0, 0, 0);
  light.lookAt(ofVec3f(0, 0, 0));
  light.setAmbientColor(ofFloatColor(0.0, 0.0, 0.0));
  light.setDiffuseColor(ofFloatColor(0.0, 0.0, 0.0));
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  
  camera.begin();
  
  light.draw();
  
  ofDrawBox(0, 0, 0, 100, 100, 100);
  
  camera.end();
  ofPopMatrix();
  
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
