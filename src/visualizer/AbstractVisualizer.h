#pragma once

#include "../Oscillator.h"

class AbstractVisualizer {
public:
	virtual void update(const std::vector<Oscillator>& oscillators) = 0;
	virtual void draw() = 0;
};
