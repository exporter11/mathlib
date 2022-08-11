#include <Windows.h>
#include <iostream>
#include "math.h"
int main()
{
	Vector vector;
	Vector replace(-50, -50, -50);
	Vector replace2(50, 50, 50);
	Vector triangle(10, 10, 0);

	float a = triangle[0];

	std::cout << replace.x << " " << replace.y << " " << replace.z << '\n';
	std::cout << replace2.x << " " << replace2.y << " " << replace2.z << '\n';
	std::cout << vector.x << " " << vector.y << " " << vector.z << '\n';

	vector = replace.abs(true);

	std::cout << replace.x << " " << replace.y << " " << replace.z << '\n';
	std::cout << replace2.x << " " << replace2.y << " " << replace2.z << '\n';
	std::cout << vector.x << " " <<vector.y << " " << vector.z << '\n';

	return 0;
}