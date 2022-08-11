#pragma once
#include <iostream>
#include "Vector.h"
struct QAngle {
	float x, y, z;
	QAngle();
	QAngle(float x, float y, float z);


	void operator=(QAngle replace);
	QAngle operator+(QAngle replace);
	QAngle operator-(QAngle replace);
	QAngle operator-();
	QAngle operator*(QAngle replace);
	QAngle operator/(QAngle replace);
	QAngle operator*(float replace);
	QAngle operator/(float replace);
	void operator+=(QAngle replace);
	void operator-=(QAngle replace);
	void operator/=(QAngle replace);
	void operator*=(QAngle replace);
    float operator[](int i);

	QAngle abs(bool set_classmember_to_abs);
    void clamp();
    void angle_from_vector(Vector forward);
 
};