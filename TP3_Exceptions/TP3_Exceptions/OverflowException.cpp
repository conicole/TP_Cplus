/**
*
* \file OverflowException
* \brief classe Exception for overflow causes by operation on fraction.
* \author Nicole Corentin, Esmieu Valentin
* \version 0.1
* \date 12/10/2014
*/


#include <iostream> 
#include <sstream> 
#include <exception>


class OverflowException : public std::exception
{

private:
	std::string msg;

public:
	OverflowException(char c,int i1, int i2)
	{
		std::ostringstream oss;
		switch (c)
		{
			case 'a':{
				oss << "Error : the addition of  : " << i1 << " and " << i2 << " cause an overflow ";
				break;
			}
			case 'm':{
				oss << "Error : the multiplication of  : " << i1 << " and " << i2 << " cause an overflow ";
				break;
			}
			default:{
				oss << "Error : overflow";
			}
		}
		this->msg = oss.str();
	}

	virtual ~OverflowException() throw()
	{

	}

	virtual const char * what() const throw()  // don't throw exception.
	{
		return this->msg.c_str();
	}

};