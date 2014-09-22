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
bool Chaine::operator==(Chaine &c1)
{
	if ( c1.length() != this->length() )
	{
		return false;
	}

	bool resul = true;
	int i = 0;
	for (i = 0; i < c1.length() && resul; i++)
	{
		resul = c1.charAt(i) == this->charAt(i);
	}
	return resul;
}


bool Chaine::operator>(Chaine &c1)
{
	int i = 0;
	int shortestLength = fmin(c1.length(), this->length());
	
	for (i = 0; i<shortestLength ; i++)
	{
		if (c1.charAt(i) > this->charAt(i))
		{
			return true;
		}
		if (this->charAt(i) < this->charAt(i))
		{
			return false;
		}
	}
	
	return c1.length() > this->length();
}

// compare par ordre alphabetique.
bool Chaine::operator<(Chaine &c1)
{
	int i = 0;
	int shortestLength = fmin(c1.length(), this->length());
	
	for (i = 0; i<shortestLength ; i++)
	{
		if (this->charAt(i) < c1.charAt(i))
		{
			return true;
		}
		if (this->charAt(i) > c1.charAt(i))
		{
			return false;
		}
	}
	
	return c1.length() < this->length();
}

bool Chaine::operator<=(Chaine &c1)
{
	return ! (*this > c1);
}

bool Chaine::operator>=(Chaine &c1)
{
	return ! (*this < c1);
}

bool Chaine::operator!=(Chaine &c1)
{
	if (c1.length() != this->length())
	{
		return true;
	}
	
	return !(c1==*this);
}

Chaine& Chaine::operator+(Chaine &c1)
{
	char * concatened  = new char[c1.length() + this->length() +1];
	
	int i = 0;
	while (this->charAt(i) != '\0')
	{
		concatened[i] = this->charAt(i) ;
		i++;
	}
	
	i = 0;
	while (c1.charAt(i) != '\0')
	{
		concatened[i] = this->charAt(i - c1.length()) ;
		i++;
	}
	
	concatened[++i] = '\0';

	const char * res = concatened;


	Chaine * cres = new Chaine(res);


	return *cres;
}




