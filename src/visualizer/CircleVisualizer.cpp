#include "CircleVisualizer.h"

void CircleVisualizer::update(const std::vector<Oscillator>& oscillators) {
	points = oscillators;

	centerX = ofGetWindowWidth() / 2;
	centerY = ofGetWindowHeight() / 2;
	radius = std::min(centerX, centerY) * radiusRatio;
}

void CircleVisualizer::draw() {
	// draw circle
	ofPushStyle();
	ofNoFill();
	ofDrawCircle(centerX, centerY, radius);
	ofPopStyle();

	// draw oscillators
	ofPushStyle();
	ofSetColor(0, 255, 0);
	for (const Oscillator& osc : points) {
		ofDrawCircle(getCoord(osc.getAngle()), pointSize);
	}
	ofPopStyle();
}