/**
*\file Chaine.h
*\author Esmieu Valentin Nicole Corentin
*
*/

#include <cstdlib>


class Chaine
{
	char * tank;
	static int cpt;


public:

	/*
	* empty constructor
	*/
	Chaine();	

	/*
	* constructor with a char-array pointor
	*/
	Chaine(const char* c);

	/*
	* constructor by reference
	*/
	Chaine(const Chaine& c);

	/*
	* displayer
	*/
	void display();

	/*
	* destuctor
	*/
	~Chaine();

	/*
	* return the character at position p
	*/
	char charAt(int p);

	/*
	* return the Chaine length
	*/
	int length();

	/*
	* empty constructor
	*/
	bool operator==(Chaine &c1);
	bool operator>(Chaine &c1);
	bool operator<(Chaine &c1);
	bool operator<=(Chaine &c1);
	bool operator>=(Chaine &c1);
	Chaine& operator+(Chaine &c1);
	bool operator!=(Chaine &c1);
};

