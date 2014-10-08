#pragma once
#include <iostream> // pour std::cout 
#include <string>   // pour std::string 
#include "ZeroDenominatorException.h"
#include "DivideByZero.h"

using namespace std;
class Fraction
{

	int num;
	int denom;
public:

	// constructor from an integer.
	Fraction(int i);
	// constructor with given parameters.
	Fraction(int n, int d);
	
	// redifinition of operators
	Fraction operator+(Fraction &fract);
	Fraction operator-(Fraction &fract);
	Fraction operator*(Fraction &fract);
	Fraction operator/(Fraction &fract);

	// simplify
	void Fraction::simplify();

	// display
	string Fraction::display();


	~Fraction();
};

