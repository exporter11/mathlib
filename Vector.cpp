#include "Vector.h"
Vector::Vector() { x = 0; y = 0; z = 0; };
Vector::Vector(float x, float y, float z) { this->x = x, this->y = y; this->z = z; }
void Vector::operator=(Vector replace) {
	x = replace.x;
	y = replace.y;
	z = replace.z;
}
Vector Vector::operator+(Vector replace)
{
	return Vector(x + replace.x, y + replace.y, z + replace.z);
}
Vector Vector::operator-(Vector replace)
{
	return Vector(x - replace.x, y - replace.y, z - replace.z);
}
Vector Vector::operator-() {
	return Vector(-x, -y, -z);
}
Vector Vector::operator*(Vector replace)
{
	return Vector(x * replace.x, y * replace.y, z * replace.z);
}
Vector Vector::operator/(Vector replace)
{
	return Vector(x / replace.x, y / replace.y, z / replace.z);
}
Vector Vector::operator*(float replace)
{
	return Vector(x * replace, y * replace, z * replace);
}
Vector Vector::operator/(float replace)
{
	return Vector(x / replace, y / replace, z / replace);
}
void Vector::operator+=(Vector replace) {
	x += replace.x;
	z += replace.y;
	y += replace.z;
}
void Vector::operator-=(Vector replace) {
	x -= replace.x;
	z -= replace.y;
	y -= replace.z;
}
void Vector::operator/=(Vector replace) {
	x /= replace.x;
	z /= replace.y;
	y /= replace.z;
}
void Vector::operator*=(Vector replace) {
	x *= replace.x;
	z *= replace.y;
	y *= replace.z;
}
float Vector::operator[](int i) {
	if (i > 2)
		i = 2;

	return i == 0 ? x : (i == 1 ? y : z);
}
Vector Vector::abs(bool set_classmembers_to_abs) {
	if (set_classmembers_to_abs)
	{
		x = x < 0 ? -x : x;
		y = y < 0 ? -y : y;
		z = z < 0 ? -z : z;
	}

	return Vector(x < 0 ? -x : x, y < 0 ? -y : y, z < 0 ? -z : z );
}
float Vector::length() {
	return sqrt(x * x + y * y + z * z);
}