#include "QAngle.h"
QAngle::QAngle() { x = 0; y = 0; z = 0; };
QAngle::QAngle(float x, float y, float z) { this->x = x, this->y = y; this->z = z; }
void QAngle::operator=(QAngle replace) {
	x = replace.x;
	y = replace.y;
	z = replace.z;
}
QAngle QAngle::operator+(QAngle replace)
{
	return QAngle(x + replace.x, y + replace.y, z + replace.z);
}
QAngle QAngle::operator-(QAngle replace)
{
	return QAngle(x - replace.x, y - replace.y, z - replace.z);
}
QAngle QAngle::operator-() {
	return QAngle(-x, -y, -z);
}
QAngle QAngle::operator*(QAngle replace)
{
	return QAngle(x * replace.x, y * replace.y, z * replace.z);
}
QAngle QAngle::operator/(QAngle replace)
{
	return QAngle(x / replace.x, y / replace.y, z / replace.z);
}
QAngle QAngle::operator*(float replace)
{
	return QAngle(x * replace, y * replace, z * replace);
}
QAngle QAngle::operator/(float replace)
{
	return QAngle(x / replace, y / replace, z / replace);
}
void QAngle::operator+=(QAngle replace) {
	x += replace.x;
	z += replace.y;
	y += replace.z;
}
void QAngle::operator-=(QAngle replace) {
	x -= replace.x;
	z -= replace.y;
	y -= replace.z;
}
void QAngle::operator/=(QAngle replace) {
	x /= replace.x;
	z /= replace.y;
	y /= replace.z;
}
void QAngle::operator*=(QAngle replace) {
	x *= replace.x;
	z *= replace.y;
	y *= replace.z;
}
float QAngle::operator[](int i) {
	if (i > 2)
		i = 2;

	return i == 0 ? x : (i == 1 ? y : z);
}
QAngle QAngle::abs(bool set_classmembers_to_abs) {
	if (set_classmembers_to_abs)
	{
		x = x < 0 ? -x : x;
		y = y < 0 ? -y : y;
		z = z < 0 ? -z : z;
	}

	return QAngle(x < 0 ? -x : x, y < 0 ? -y : y, z < 0 ? -z : z);
}
void QAngle::clamp() {
    x = x > 89 ? 89 : x;
    x = x < -89 ? -89 : x;
    y = y > 180 ? y - 360 : y;
    y = y < -180 ? y + 360 : y;
}
void QAngle::angle_from_vector(Vector forward) {
    float tmp, yaw, pitch;
    if (forward[1] == 0 && forward[0] == 0)
    {
        yaw = 0.f;
        if (forward[2] > 0.f)
            pitch = 270.f;
        else
            pitch = 90.f;
    }
    else
    {
        yaw = (atan2(forward[1], forward[0]) * 180.f / 3.14f);
        if (yaw < 0.f)
            yaw += 360;

        tmp = sqrt(forward[0] * forward[0] + forward[1] * forward[1]);
        pitch = (atan2(-forward[2], tmp) * 180.f / 3.14f);
        if (pitch < 0.f)
            pitch += 360.f;
    }
    x = pitch;
    y = yaw;
    z = 0.f;
}