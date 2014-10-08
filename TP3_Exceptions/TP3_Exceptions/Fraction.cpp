#include "Fraction.h"

Fraction::Fraction(int i) : num(i), denom(1) 
{
	this->simplify();
}

Fraction::Fraction(int n, int d) : num(n), denom(d)
{
	if (d == 0)
	{
		throw ZeroDenominatorException();
	}
	this->simplify();
}

Fraction Fraction::operator+(Fraction &fract)
{
	int resNum = this->num*fract.denom + this->denom * fract.num;
	int resDenom = this->denom*fract.denom;
	Fraction resulFract(resNum, resDenom);
	resulFract.simplify();

	return resulFract;
}

Fraction Fraction::operator-(Fraction &fract)
{
	int resNum = this->num*fract.denom - this->denom * fract.num;
	int resDenom = this->denom*fract.denom;
	Fraction resulFract(resNum, resDenom);
	resulFract.simplify();

	return resulFract;
}

Fraction Fraction::operator*(Fraction &fract)
{
	int resNum = this->num*fract.num;
	int resDenom = this->denom*fract.denom;
	Fraction resulFract(resNum, resDenom);
	resulFract.simplify();

	return resulFract;
}

Fraction Fraction::operator/(Fraction &fract)
{
	if (fract.num == 0){
		throw DivideByZero();
	}
	int resNum = this->num*fract.denom;
	int resDenom = this->denom*fract.num;
	Fraction resulFract(resNum, resDenom);
	resulFract.simplify();

	return resulFract;
}


void Fraction::simplify()
{
	if (this->num == 0){
		return;
	}
	// PGCD calcul
	int a;
	int b;
	int r = -1;
	if (this->num > this->denom)
	{
		a = this->num;
		b = this->denom;
	}
	else 
	{
		a = this->denom;
		b = this->num;
	}

	do
	{
		r = a % b;
		a = b;
		b = r;
	} while (r != 0);
	
	// simplification
	this->num /= a;
	this->denom /= a;
}


string Fraction::display()
{
	string resul("(" + to_string(this->num) + "/" + to_string(this->denom) + ")");
	return resul;
}

Fraction::~Fraction()
{
}
