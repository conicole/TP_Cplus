/**
*
* \file AlphabetException
* \brief classe Exception for the creation of sequence with wrong alphabet
* \author Nicole Corentin, Esmieu Valentin
* \version 0.1
* \date 12/10/2014
*/

#include <iostream> 
#include <sstream> 
#include <exception>
#include <set>

class  AlphabetException : public std::exception
{

private:
	std::string msg;

public:
	AlphabetException(const char c, const std::string seq)
	{
				std::ostringstream oss;
		oss << "ERROR : Can't create the seq : " << seq << std::endl <<
			" REASON : the character " << c << " is not in the alphabet";
		this->msg = oss.str();
	}

	virtual ~AlphabetException() throw()
	{
	}

	virtual const char * what() const throw()  // don't throw exception.
	{
		return this->msg.c_str();
	}

};