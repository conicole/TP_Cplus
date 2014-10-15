
#include "list.h"

template <class T> class Ensemble
{

private:
	List<T> _listref;


public:
	Ensemble<T>()
	{
	 _listref = List<T>();
	}

	Ensemble<T>(const List<T>& lref)
	{
		List<T> ltemp();
		ListIterator<T> it = lref.beg();
		while (!it.finished())
		{
			if (!(ltemp == it.get()))
			{
				ltemp.addElement(it.get());
			}
			it++;
		}
	}


	Ensemble<T> operator+(const Ensemble<T>& e) const
	{
		return Ensemble();
	}

	Ensemble<T> operator-(const Ensemble<T>& e) const
	{
		return Ensemble();
	}

	Ensemble<T> operator*(const Ensemble<T>& e) const
	{
		return Ensemble();
	}

	Ensemble<T> operator/(const Ensemble<T>& e) const
	{
		return Ensemble();
	}

};

template <class T>
std::istream& operator>>(std::istream& in, Ensemble<T>& eref) 
{
	eref._listref >> in;
}

template <class T>
std::ostream& operator<<(std::ostream& out, const Ensemble<T>& eref)
{
	out << eref->_listref;
}

