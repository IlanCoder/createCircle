#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
	circle.init();
	for (int i = 0; i< 20; i++) {
		if (i < 10) {
			circle.createFilled(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), ofRandom(10, 300), ofRandom(255), ofRandom(255), ofRandom(255));
		}
		else {
			circle.create(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), ofRandom(10, 300), ofRandom(255), ofRandom(255), ofRandom(255));
		}
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	circle.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	circle.draw();
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
