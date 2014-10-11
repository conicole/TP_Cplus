#pragma once
#include <iostream> // pour std::cout 
#include <string>   // pour std::string 
#include "ZeroDenominatorException.h"
#include "DivideByZero.h"
#include "OverflowException.h"


const int imin = std::numeric_limits<int>::min(); // minimum value
const int imax = std::numeric_limits<int>::max(); // max value


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

