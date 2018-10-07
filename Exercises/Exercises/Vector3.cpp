#include "pch.h"
#include "Vector3.h"
#include <iostream>
#include <math.h>

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}


Vector3::Vector3(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


Vector3::Vector3(Vector3 &vector) {
	this->x = vector.x;
	this->y = vector.y;
	this->z = vector.z;
}


void Vector3::Normalize()
{
	int modul = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	x = x / modul;
	y = y / modul;
	z = z / modul;
}


int Vector3::Distance_to(Vector3 &vector)
{
	return sqrt(pow(x-vector.x, 2) + pow(y-vector.y, 2) + pow(z-vector.z, 2));
}


void Vector3::Print()
{
	std::cout << "x: " << x << " y: " << y << " z: " << z << "\n";
}

Vector3& Vector3::operator+(const Vector3& b) {
	Vector3 vector;
	vector.x = this->x + b.x;
	vector.y = this->y + b.y;
	vector.z = this->z + b.z;
	return vector;
}

//void Vector3::operator = (const Vector3 &D) {
//	x = D.x;
//	y = D.y;
//	z = D.z;
//}