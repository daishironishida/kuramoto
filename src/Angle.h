#pragma once

#include <cmath>
#include <iostream>

class Angle {
public:
	Angle(float t = 0) : theta(t) {};

	Angle operator+ (const Angle& other) const
	{
		return Angle(std::fmod(theta + other.theta, 2 * PI));
	}
	Angle& operator= (const Angle& other)
	{
		theta = other.theta;
		return *this;
	}
	Angle& operator+= (const Angle& other)
	{
		theta = std::fmod(theta + other.theta, 2 * PI);
		return *this;
	}

	operator float() const { return theta; }

private:
	float theta = 0;
};

