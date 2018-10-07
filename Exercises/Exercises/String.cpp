#include "pch.h"
#include "String.h"


String::String() {

}

String::String(const char text[])
{
	this->mem_alloc = sizeof(text);
	stringStart = new char;
	this->copy(this->stringStart, text);
}

String::String(String &string)
{
	stringStart = new char;
	this->copy(this->stringStart, string.stringStart);
	this->mem_alloc = string.mem_alloc;
}


int String::lenght() {
	return mem_alloc;
}


void String::clear() 
{
	mem_alloc = 0;
	stringStart = '\0'; //nullptr
}

void String::Print() {
	if (lenght() == 0) {
		std::cout << "Empty string";
	}
	else {
		std::cout << stringStart << "\n";
		std::cout << lenght() << " \n";
	}
}

void String::copy(char *d, const char *s)
{
	while (*s)
	{
		*d++ = *s++;
	}
	*d = 0;
}


void String::concat(String &destination, const String &source)
{
	int x = 0;
	while (destination.stringStart[x] != '\0')
	{
		x++;
	}
	for (int i = 0; source.stringStart[i] != '\0'; i++)
	{
		destination.stringStart[x++] = source.stringStart[i];
	}
	destination.stringStart[x] = '\0';
	destination.mem_alloc = x - 1;
}

String& String::operator+(const String& b) {
	String string(*this);
	this->concat(string, b);
	return string;
}

bool String::operator==(const char* rhs)
{
	bool a = *stringStart == *rhs;
	return a;
}