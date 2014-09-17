#include "Chaine.h"
#include <iostream>
#include <cstdlib>

int Chaine::cpt = 0;

Chaine::Chaine()
{
	tank = new char[1];
	tank[0] = '\0';

	std::cout << "Construction of chaine number " << cpt << " done successfuly " << std::endl;
	cpt++;
}


Chaine::Chaine(const char * c)
{
	int length = 0;
	int i = 0;

	// counts string length
	while (*(c+length) != '\0')
	{
		length++;
	}

	// allocs memory
	tank = new char[length + 1];

	// copy the characters
	for (i = 0; i < length+1; i++)
	{
		tank[i] = *(c + i);
	}

	std::cout << "Construction of chaine number " << cpt << " done successfuly " << std::endl;
	cpt++;
}


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
	for (i = 0; i < length; i++)
	{
		tank[i] = c.tank[i];
	}

	std::cout << "Construction of chaine done successfuly ( " << cpt << " in memory )" << std::endl;
	cpt++;
}


void Chaine::display()
{
	std::cout << this->tank << std::endl;
}

Chaine::~Chaine()
{
	delete this->tank;
	std::cout << "Destruction of chaine done successfuly ( " << cpt << " in memory )" << std::endl;
	cpt--;
}

