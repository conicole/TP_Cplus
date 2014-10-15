#include <iostream> // pour std::cout 


class DivideByZero : public std::exception
{

private:
	std::string msg;

public:
	DivideByZero()
	{
		this->msg = "Error : division by zero !";
	}

	virtual ~DivideByZero() throw()
	{

	}

	virtual const char * what() const throw()  // don't throw exception.
	{
		return this->msg.c_str();
	}

};