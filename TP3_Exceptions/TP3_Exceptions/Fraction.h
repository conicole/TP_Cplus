
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
	* \param[in] integer d as denominator, must not be equal to 0.
	*/
	Fraction(int n, int d);
	
	/**
	* \brief safe operations
	* \param[in] int as operand
	* \param[in] int as operand
	* \param[out] int as result
	*/
	int safeAdd(int i1, int i2);
	int safeMull(int i1, int i2);
	

	/**
	* \brief redifinition of operators
	* \param[in] Fraction fract as operand
	* \param[out] Fraction as result of the operation
	*/
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

