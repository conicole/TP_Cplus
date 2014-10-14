/*!
* \file  seq_main.cpp
* \brief  Test for reading sequences
* \date 12/10/2014
* \author Corentin Nicole & Valentin Esmieu
*/

#include "Sequences.h"

using namespace std;

int main()
{
	string adnLetters("ACGT");
	string arnLetters("ACGU");
	string protLetters("ACDEFGHIKLMNPQRSTV");
	string startCodon("ATG");
	string stopCodon1("TAA");
	string stopCodon2("TAG");
	string stopCodon3("TGA");

	cout << "Lettres valides pour une séquence d'ADN : " << adnLetters << endl;
	cout << "Lettres valides pour une séquence d'ARN : " << arnLetters << endl;
	cout << "Lettres valides pour une séquence de protéines : " << protLetters << endl;
	cout << "(Rappel) Codon START : " <<startCodon << endl;
	cout << "(Rappel) Codons STOP : " << stopCodon1 << ", " << stopCodon2 << ", " << stopCodon3 << endl;

	string s1, s2, s3;

	cout << "Entrez une sequence proteique (pensez aux majuscules) : ";
	cin >> s1;
	cout << "Entrez son nom: ";
	cin >> s2;

	try
	{
		seqprot P1(s1, s2);
		cout << P1 << endl;
	}
	catch (AlphabetException e)
	{
		cout << e.what() << endl;
	}


	cout << "Entrez une sequence d'adn: ";
	cin >> s1;
	cout << "Entrez son nom: ";
	cin >> s2;

	try
	{
		seqadn A1(s1, s2);
		cout << A1 << endl;
	}
	catch (AlphabetException e)
	{
		cout << e.what() << endl;
	}


	cout << "Entrez une sequence d'arn: ";
	cin >> s1;
	cout << "Entrez son nom: ";
	cin >> s2;

	try
	{
		seqarn R1(s1, s2);
		cout << R1 << endl;
	}
	catch (AlphabetException e)
	{
		cout << e.what() << endl;
	}

return 0;

}