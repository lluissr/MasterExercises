#include <iostream>

class String {
private:
	char* stringStart;
	unsigned int mem_alloc;

public:
	String(const char* text);
	String(String* text);

	int GetLenght(const char* text);
	void Clear();
	void Print();
	int lenght();

	void Copy(const char *s);

	String operator+(String& b);
	bool operator==(const char* rhs);
};
