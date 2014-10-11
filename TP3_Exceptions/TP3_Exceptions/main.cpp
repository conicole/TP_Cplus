#include "Fraction.h"


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
	catch (ZeroDenominatorException e)
	{
		cout << "Error : you can't define a fraction with 0 as denominator." << std::endl;
	}
	
	try
	{
		f1 / fzero;
	}
	catch (DivideByZero e)
	{
		cout << "Error : you can't divide by zero !" << std::endl;

	}

	try
	{
		Fraction fmull = fmax + fmax;
		cout << fmull.display() << endl;
	}

	catch (OverflowException e){
		cout << "Error : overflow !" << std::endl;
	}

	return 0;
}