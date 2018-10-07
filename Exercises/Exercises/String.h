#include <iostream>

class String {
private:
	char* stringStart;
	unsigned int mem_alloc;

public:
	String();
	String(const char text[]);
	String(String &string);

	int lenght();
	void clear();
	void Print();

	void copy(char *d, const char *s);
	void concat(String &destination, const String &source);

	String& operator+(const String& b);
	bool operator==(const char* rhs);
};
