/**
*
* \file ZeroDenominatorException
* \brief classe Exception for the creation of a fraction with zero as denominator.
* \author Nicole Corentin, Esmieu Valentin
* \version 0.1
* \date 12/10/2014
*/

#include <iostream> 
#include <sstream> 
#include <exception>


class ZeroDenominatorException : public std::exception
{

private:
	std::string msg;

public:
	ZeroDenominatorException(int i1,int i2)
	{
		std::ostringstream oss;
		oss << "Error : can't create the fraction : " << i1 << "/"<< i2 << " denominator must be not equal to zero" ;
		this->msg = oss.str();
	}

	virtual ~ZeroDenominatorException() throw()
	{

	}

	virtual const char * what() const throw()  // don't throw exception.
	{
		return this->msg.c_str();
	}

};