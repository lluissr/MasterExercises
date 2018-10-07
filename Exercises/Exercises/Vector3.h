

class Vector3
{
private:
	int x;
	int y;
	int z;

public:
	Vector3();
	Vector3(int x, int y, int z);
	Vector3(Vector3 &vector);

	void Normalize();
	int Distance_to(Vector3 &vector);

	Vector3& operator+(const Vector3& b);
	//void operator = (const Vector3 &D);

	void Print();
};