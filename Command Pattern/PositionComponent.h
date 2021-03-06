#pragma once

#include "Component.h"
#include <math.h>

class Point2D {
public:
	float x, y;
	Point2D(float _x = 0, float _y = 0) :x(_x), y(_y) { };
	float length() { return (float)sqrt(x*x + y*y); };

};

class PositionComponent : public Component
{
public:
	PositionComponent() : pos(150200) {}

	int getPosition() { return pos; }
	void setPosition() { this->setValue(pos); }

private:
	int pos;
};