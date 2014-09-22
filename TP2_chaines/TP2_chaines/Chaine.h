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
	int length();

	bool operator==(Chaine &c1);

	bool operator>(Chaine &c1);

	bool operator<(Chaine &c1);

	bool operator<=(Chaine &c1);

	bool operator>=(Chaine &c1);

	Chaine& operator+(Chaine &c1);

	bool operator!=(Chaine &c1);
};

