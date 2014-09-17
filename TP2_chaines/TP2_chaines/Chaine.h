#include <cstdlib>



class Chaine
{
	char * tank;
	static int cpt;


public:

	// constructors
	Chaine();					
	Chaine(const char* c);		
	Chaine(const Chaine& c);

	// toString
	void display();

	// destructor
	~Chaine();
};