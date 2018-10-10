#ifndef __Vector3__
#define __Vector3__
#include <math.h>

template<class T>
class Vector3
{
private:
	T x;
	T y;
	T z;

public:
	Vector3();
	Vector3(T x, T y, T z);
	Vector3(const Vector3<T> &vector);

	void Normalize();
	T Distance_to(Vector3<T> &vector);
	Vector3<T> operator+(const Vector3<T>& b);
	
	void Print();
};


template <class T>
Vector3<T>::Vector3() : x(), y(), z() {

}

template <class T>
Vector3<T>::Vector3(T x, T y, T z) : x(x), y(y), z(z) {

};

template <class T>
Vector3<T>::Vector3(const Vector3<T>& vector) : x(vector.x), y(vector.y), z(vector.z) {

};


template<class T>
void Vector3<T>::Normalize()
{
	T modul = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	x = x / modul;
	y = y / modul;
	z = z / modul;
}

template<class T>
T Vector3<T>::Distance_to(Vector3<T>& vector)
{
	return sqrt(pow(x-vector.x, 2) + pow(y-vector.y, 2) + pow(z-vector.z, 2));
}

template<class T>
Vector3<T> Vector3<T>::operator+(const Vector3<T>& b) {
	Vector3<T> vector;
	vector.x = this->x + b.x;
	vector.y = this->y + b.y;
	vector.z = this->z + b.z;
	return vector;
}

template<class T>
void Vector3<T>::Print()
{
	std::cout << "x: " << x << " y: " << y << " z: " << z << "\n";
}

#endif