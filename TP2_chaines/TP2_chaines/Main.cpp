/**
* it's ok
*/

#include "Chaine.h"
#include <iostream>
#include <cstdlib>

int main()
{
	char input[81];
	std::cin >> input;
	Chaine* ptr = new Chaine(input);
	Chaine* ptrEmpty = new Chaine();
	Chaine* ptrCp = new Chaine( (*ptr));

	ptr->display();
	delete ptr;
	delete ptrEmpty;
	delete ptrCp;


	return 0;
}
