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

	// returns char at
	char charAt(int p);

	// returns length
	int Chaine::length();

	// returns true if the two chaines are equals
	bool isEquivalentTo(Chaine &c);
};