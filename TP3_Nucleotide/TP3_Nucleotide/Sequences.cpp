/*!
* \file  sequences.cpp
* \brief  Sequences reading
* \date 10/10/2014
* \author Corentin Nicole & Valentin Esmieu
*/

#include "sequences.h"

using namespace std;

ostream & operator<< (ostream & os, const seqmac & s)
{
	s.writeseq(os);
	return os;
}

seqmac::seqmac(const string & seq, const string & name, const string & alphabet) :
_alph(alphabet), _name(name)
{
	string s = "";
	for (string::const_iterator c = seq.begin(); c != seq.end(); c++)
	{
		if (_alph.is_in_alpha(*c)) { s += *c; }
		else
		{
			throw AlphabetException(*c, seq);
		//	return;
		}
	}
	_seq = s;
}

seqadn::seqadn(const string & seq, const string & name) : seqmac(seq, name, "CGAT")
{

}

seqarn::seqarn(const string & seq, const string & name) : seqmac(seq, name, "ACGU")
{
}
