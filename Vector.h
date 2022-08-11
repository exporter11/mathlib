#pragma once
#include <iostream>
struct Vector {
	float x, y, z;
	Vector();
	Vector(float x, float y, float z);


	void operator=(Vector replace);
	Vector operator+(Vector replace);
	Vector operator-(Vector replace);
	Vector operator-();
	Vector operator*(Vector replace);
	Vector operator/(Vector replace);
	Vector operator*(float replace);
	Vector operator/(float replace);
	void operator+=(Vector replace);
	void operator-=(Vector replace);
	void operator/=(Vector replace);
	void operator*=(Vector replace);
	float operator[](int i);

	Vector abs(bool set_classmember_to_abs);
	float length();

};