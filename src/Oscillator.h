#pragma once

#include "ofMain.h"
#include "Angle.h"

class Oscillator {
public:
	Oscillator(float sigma = 0.1f) {
		freqNatural = ofRandom(-sigma, sigma);
	};

	void update(float interaction) {
		theta += freqNatural + interaction;
	}

	float getAngle() const {
		return theta;
	}

private:
	float freqNatural = 0;
	Angle theta;
};
