#include "ofApp.h"

#include "visualizer/CircleVisualizer.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetBackgroundColor(0);

	visualizer = std::make_shared<CircleVisualizer>();
	oscillators.resize(5);
}

//--------------------------------------------------------------
void ofApp::update() {
	for (Oscillator& osc : oscillators) {
		osc.update(0);
	}

	visualizer->update(oscillators);
}

//--------------------------------------------------------------
void ofApp::draw() {
	visualizer->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
