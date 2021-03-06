#include "pch.h"
#include "Vector3.h"
#include "String.h"

int main()
{
	//Vector object

	Vector3<int> a;
	Vector3<int> b(1, 0, 1);
	Vector3<int> c(b);
	Vector3<int> d = b + c;

	a.Print();
	b.Print();
	c.Print();
	d.Print();

	d.Normalize();
	d.Print();
	std::cout << d.Distance_to(b) << "\n";


	//String object

	String stringA("hello");
	String stringB(stringA);
	String stringC = stringA + stringB;

	stringA.Print();
	stringB.Print();
	stringC.Print();

	if (stringC == "hellohello")
	{
		std::cout << "Equals \n";
	}
	else
	{
		std::cout << "Differents \n";
	}

	stringA.Clear();
	stringA.Print();

	return 0;
}