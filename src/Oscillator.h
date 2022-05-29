#pragma once

#include <random>

#include "Angle.h"

class Oscillator {
public:
	Oscillator(float sigma = 0.1f) {
		std::random_device seed_gen;
		std::default_random_engine engine(seed_gen());
		std::normal_distribution<> dist(0.0, sigma);

		freqNatural = dist(engine);
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
