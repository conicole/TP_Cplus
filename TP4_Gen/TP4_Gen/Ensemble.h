
#include "list.h"

template <class T> class Ensemble
{

private:
	List<T> _listref;


public:

	// empty constructor
	Ensemble<T>()
	{
	 _listref = List<T>();
	}

	// constructor
	Ensemble<T>(const List<T>& lref)
	{
		List<T> ltemp;
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


	// getter
	// please observe that "const" is required
	List<T> getList() const
	{
		return this->_listref;
	}

	// setter
	void setList(std::istream& in)
	{
		in >> this->_listref;
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
void operator>>(std::istream& in, Ensemble<T>& eref) 
{
	eref.setList(in);
}


template <class T>
std::ostream& operator<<(std::ostream& out, const Ensemble<T>& eref)
{
	return out << eref.getList();
}
