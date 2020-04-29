#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofEnableDepthTest();
  ofBackground(255, 255, 255);
  
  shader.load("shader.vert", "shader.frag");
  
  light.enable();
  light.setSpotlight();
  light.setPosition(-150, 150, 150);
  light.lookAt(ofVec3f(0, 0, 0));
  light.setAmbientColor(ofFloatColor(0.0, 0.0, 0.0));
  light.setDiffuseColor(ofFloatColor(1.0, 1.0, 1.0));
  
  fbo.allocate(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
  fbo.begin();
  ofClear(0, 0, 0);
  
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  
  camera.begin();
  
  light.draw();
  
  ofDrawBox(0, 0, 0, 100, 100, 100);
  
  camera.end();
  ofPopMatrix();
  fbo.end();
}

//--------------------------------------------------------------
void ofApp::draw(){
  shader.begin();
  shader.setUniformTexture("texture", fbo, 0);
  shader.setUniform2f("resolution", ofGetWidth(), ofGetHeight());
  shader.setUniform1f("time", ofGetElapsedTimef());
  
  ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
  shader.end();
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
