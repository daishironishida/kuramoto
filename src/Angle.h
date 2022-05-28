#pragma once

#include <cmath>
#include <iostream>

class Angle {
public:
	Angle(float t = 0) : theta(t) {};

	Angle operator+ (const Angle& other) const
	{
		return Angle(mod(theta + other.theta));
	}
	Angle& operator= (const Angle& other)
	{
		theta = other.theta;
		return *this;
	}
	Angle& operator+= (const Angle& other)
	{
		theta = mod(theta + other.theta);
		return *this;
	}

	operator float() const { return theta; }

private:
	float theta = 0;

	static float mod(const float val) {
		return std::fmod(std::fmod(val, 2 * PI) + 2 * PI, 2 * PI);
	}
};

