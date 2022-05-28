#pragma once

#include "AbstractVisualizer.h"

class CircleVisualizer : public AbstractVisualizer {
public:
	void update(const std::vector<Oscillator>& oscillators) override;
	void draw() override;

private:
	std::vector<Oscillator> points;

	int centerX;
	int centerY;
	int radius;

	const float radiusRatio = 0.8f;
	const float pointSize = 10.f;

	ofVec2f getCoord(float theta) {
		return ofVec2f(centerX + radius * std::cos(theta), centerY + radius * std::sin(theta));
	}
};
