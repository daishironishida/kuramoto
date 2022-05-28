#pragma once

#include "ofMain.h"
#include "Angle.h"

class Oscillator {
public:
	Oscillator() {
		freqNatural = ofRandom(-1, 1);
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
