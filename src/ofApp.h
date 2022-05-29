#pragma once

#include "ofMain.h"
#include "ofxImGui.h"

#include "Oscillator.h"
#include "visualizer/AbstractVisualizer.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

private:
	std::vector<Oscillator> oscillators;
	std::shared_ptr<AbstractVisualizer> visualizer;

	// gui
	ofxImGui::Gui gui;
	bool isDrawGui = false;

	// parameters
	int N = 5;
	float K = 10.f;
	float sigma = 0.1f;
};
