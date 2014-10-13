
/**
*
* \file fraction.h
* \brief header for class object Fraction 
* \author Nicole Corentin, Esmieu Valentin
* \version 0.1
* \date 12/10/2014
*/


#include <iostream> // pour std::cout 
#include <string>   // pour std::string 
#include "ZeroDenominatorException.cpp"
#include "OverflowException.cpp"
//#include "DivideByZero.cpp"


const int imin = std::numeric_limits<int>::min(); // minimum value
const int imax = std::numeric_limits<int>::max(); // max value


using namespace std;
class Fraction
{

	int num;
	int denom;
public:

	/**
	* \fn  Fraction(int i)
	* \brief constructor from an integer.
	* \param[in] integer i
	*/
	Fraction(int i);

	/**
	* \fn  Fraction(int n, int d);
	* \brief constructor with given parameters.
	* \param[in] integer n as nominator
	* \param[in] integer d as denominator, must be not equal to 0.
	*/
	Fraction(int n, int d);
	
	// redifinition of operators
	Fraction operator+(Fraction &fract);
	Fraction operator-(Fraction &fract);
	Fraction operator*(Fraction &fract);
	Fraction operator/(Fraction &fract);

	/**
	* \fn  simplify
	* \brief simplify the fraction with the Greatest common divisor.
	*/
	void simplify();

	/**
	* \fn  display
	* \brief provide a string output of this form : (numerator/denominator)
	* \param[out] String
	*/
	string display();


	~Fraction();
};


// Fonction exception declare here -> problem with include.  -> Circular Dependencies.

class DivideByZero : public std::exception
{

private:
	std::string msg;

public:
	DivideByZero(Fraction f1, Fraction f2)
	{
		std::ostringstream oss;
		oss << "Error : the division of the fraction : " << f1.display() << " by " << f2.display() << " causes a division by zero ";
		this->msg = oss.str();
	}

	virtual ~DivideByZero() throw()
	{

	}

	virtual const char * what() const throw()  // don't throw exception.
	{
		return this->msg.c_str();
	}

};