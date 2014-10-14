#include "Fraction.h"
#include "DivideByZero.cpp"
#include "ZeroDenominatorException.cpp"
#include "OverflowException.cpp"

int main()
{
	Fraction f1(25,100);
	Fraction f2(50,100);
	Fraction fzero(0, 250);
	Fraction f3 = f1 + f2;
	Fraction f4 = f1 - f2;
	Fraction f5 = f1 * f2;
	Fraction f6 = f1 / f2;
	Fraction fmax(imax, 1);

	cout << f1.display() << " plus " << f2.display() << " donne " << f3.display() << endl;
	cout << f1.display() << " moins " << f2.display() << " donne " << f4.display() << endl;
	cout << f1.display() << " fois " << f2.display() << " donne " << f5.display() << endl;
	cout << f1.display() << " divise par " << f2.display() << " donne " << f6.display() << endl;

	try
	{
		Fraction fZero(20,0);
	}
	catch (ZeroDenominatorException const& e)
	{
		cout << e.what() << endl;
	}
	
	try
	{
		f1 / fzero;
	}
	catch (DivideByZero const& e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Fraction fmull = fmax * fmax;
		cout << fmull.display() << endl;
	}
	catch (OverflowException const& e){
		cout << e.what() << endl;
	}


	return 0;
}