#include "pch.h"
#include "String.h"


int String::GetLenght(const char* text)
{
	if (text == nullptr)
	{
		return 0;
	}

	int textSize = 0;
	while (*text++)
	{
		textSize++;
	}

	return textSize;
}


String::String(const char* text)
{

	mem_alloc = GetLenght(text);
	stringStart = (char*)malloc(mem_alloc);
	Copy(text);
}

String::String(String* string)
{

	mem_alloc = string->mem_alloc;
	stringStart = (char*)malloc(mem_alloc);
	Copy(string->stringStart);
}


void String::Clear()
{
	stringStart = '\0'; //nullptr
	mem_alloc = GetLenght(stringStart);
}

int String::lenght()
{
	return mem_alloc;
}

void String::Print() {
	if (mem_alloc == 0) 
	{
		std::cout << "Empty string " << mem_alloc;
	}
	else 
	{
		std::cout << stringStart << "\n";
		std::cout << mem_alloc << " \n";
	}
}

void String::Copy(const char *s)
{
	char* initalPosition = stringStart;
	while (*stringStart++ = *s++);
	stringStart = initalPosition;
}


String String::operator+(String& b) {


	//TODO: REFACT WITH COPY METHOD

	int totalSize = mem_alloc + b.mem_alloc;
	char* finalString = (char*)malloc(totalSize);

	char* finalStringInitialPosition = finalString;

	char* initalPosition = stringStart;
	while (*stringStart != 0)
	{
		*finalString++ = *stringStart++;
	}
	stringStart = initalPosition;

	initalPosition = b.stringStart;
	while (*b.stringStart != 0)
	{
		*finalString++ = *b.stringStart;
		*b.stringStart++;
	}
	*finalString = *b.stringStart;
	b.stringStart = initalPosition;

	finalString = finalStringInitialPosition;

	return String(finalString);
}


bool String::operator==(const char* b)
{
	if (mem_alloc != GetLenght(b))
	{
		return false;
	}

	char* stringStartCopy = stringStart;

	while (*stringStartCopy != 0)
	{
		if (*stringStartCopy++ != *b++)
		{
			return false;
		};
	}

	return true;
}