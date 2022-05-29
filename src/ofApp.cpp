#include "ofApp.h"

#include "visualizer/CircleVisualizer.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetBackgroundColor(0);
	gui.setup();

	visualizer = std::make_shared<CircleVisualizer>();
	oscillators.resize(N, Oscillator(sigma));
}

//--------------------------------------------------------------
void ofApp::update() {
	for (Oscillator& osc : oscillators) {
		float interaction = 0;
		for (Oscillator& other : oscillators) {
			interaction += std::sin(osc.getAngle() - other.getAngle()) * K / N;
		}
		osc.update(interaction);
	}

	visualizer->update(oscillators);
}

//--------------------------------------------------------------
void ofApp::draw() {
	visualizer->draw();

	if (!isDrawGui) {
		return;
	}
	gui.begin();
	ImGui::Begin("Settings");
	ImGui::SliderInt("N", &N, 1, 1000);
	ImGui::SliderFloat("K", &K, 0.f, 100.f);
	ImGui::SliderFloat("sigma", &sigma, 0.f, 100.f);
	ImGui::End();
	gui.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 'd') {
		isDrawGui = !isDrawGui;
	}
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
