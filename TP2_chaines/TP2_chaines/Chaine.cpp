#include "Chaine.h"

Chaine()
{
	
}


Chaine(const char * c)
{
	int length = 0;
	int i = 0;

	// counts string length
	while (*(c+i) != '\0')
	{
		lenght++;
	}

	// allocs memory
	tank = malloc((length + 1) * sizeof(char));

	// copy the characters
	for (i = 0; i < length; i++)
	{
		*(tank + i) = *(c + i);
	}
}


Chaine(const chaine &c)
{

}
