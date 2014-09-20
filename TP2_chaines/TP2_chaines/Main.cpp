/**
*
*/

#include "Chaine.h"
#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "Please write something (just alphanumeric characters)" << std::endl;
	char input[81];
	std::cin >> input;

	Chaine* ptr = new Chaine(input);
	std::cout << "Constructed Chaine : ";
	ptr->display();
	std::cout << "Length : " << ptr->length() << std::endl;

	Chaine* emptyPtr = new Chaine();
	std::cout << "Constructed Chaine : ";
	emptyPtr->display();
	std::cout << "Length : " << emptyPtr->length() << std::endl;

	Chaine* ptrCp = new Chaine( (*ptr));
	std::cout << "Constructed Chaine : ";
	ptrCp->display();
	std::cout << "Length : " << ptrCp->length() << std::endl;

	std::cout << "Please write something (just alphanumeric characters)" << std::endl;
	char input2[81];
	std::cin >> input2;

	Chaine* ptr2 = new Chaine(input2);
	std::cout << "Constructed Chaine : ";
	ptr2->display();
	std::cout << "Length : " << ptr2->length() << std::endl;

	std::cout << "Character at position 2 : " << ptr2->charAt(2) << std::endl;

	ptr->display();
	ptr2->display();
	std::cout << "are equivalent : " << ptr->isEquivalentTo(*ptr2) << std::endl;

	delete ptr;
	delete emptyPtr;
	delete ptrCp;


	return 0;
}
