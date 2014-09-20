#include "Chaine.h"
#include <iostream>
#include <cstdlib>


// empty constructor
Chaine::Chaine()
{
	tank = new char[1];
	tank[0] = '\0';

	std::cout << "Construction done successfuly." << std::endl;
}

// constructor with a char-array pointor
Chaine::Chaine(const char * c)
{
	int length = 0;
	int i = 0;

	// counts array length
	while (*(c+length) != '\0')
	{
		length++;
	}

	// allocs memory
	tank = new char[length + 1];

	// copys the characters
	for (i = 0; i < length+1; i++)
	{
		tank[i] = *(c + i);
	}
	std::cout << "Construction done successfuly." << std::endl;
}

// constructor by reference
Chaine::Chaine(const Chaine &c)
{
	int length = 0;
	int i = 0;

	// counts string length
	while (c.tank[length] != '\0')
	{
		length++;
	}

	// allocs memory
	tank = new char[length + 1];

	// copy the characters
	for (i = 0; i < length+1; i++)
	{
		tank[i] = c.tank[i];
	}

	std::cout << "Construction done successfuly." << std::endl;
}


// destructor
Chaine::~Chaine()
{
	delete this->tank;
	std::cout << "Destruction done successfuly." << std::endl;
}


// displays the Chaine
void Chaine::display()
{
	std::cout << this->tank << std::endl;
}


// returns the character at position p
char Chaine::charAt(int p)
{
	return this->tank[p];
}

// returns the length
int Chaine::length()
{
	int length = 0;
	while (this->tank[length] != '\0')
	{
		length++;
	}
	return length;
}

// true if equivalent
bool Chaine::isEquivalentTo(Chaine &c)
{
	if (this->length() != c.length())
	{
		return false;
	}

	bool resul = true;
	int i = 0;
	for (i = 0; i < this->length() && resul; i++)
	{
		resul = this->charAt(i) == c.charAt(i);
	}
	return resul;
}


