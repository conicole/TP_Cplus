
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

	// constructor by ref
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
		_listref = ltemp;
	}
	

	// getter
	// "const" is required !
	List<T> getList() const
	{
		return this->_listref;
	}

	//add element
	void add(const T& elt)
	{
		// if (!(this->_listref == elt))    <- si vrai ça crashe
		// this->_listref.addElement(elt);	<- crashe sur certains éléments
				
	}

	// ne fonctionne pas (car dépend de add)
	Ensemble<T> operator+(const Ensemble<T>& e) const
	{
		Ensemble<T> theUnion (this->getList());
		ListIterator<T> it = e.getList().beg();
		while (!it.finished())
		{
			theUnion.add(it.get());
			it++;
		}
		return theUnion;

	}

	// to do
	Ensemble<T> operator-(const Ensemble<T>& e) const
	{
		return Ensemble();
	}

	// to do
	Ensemble<T> operator*(const Ensemble<T>& e) const
	{
		return Ensemble();
	}

	// to do
	Ensemble<T> operator/(const Ensemble<T>& e) const
	{
		return Ensemble();
	}

};


// opérateur d'assignation
template <class T>
std::istream& operator>>(std::istream& in, Ensemble<T>& eref) {
	int nb;
	in >> nb;
	for (int i = 0; i < nb; i++) {
		T tmp;
		in >> tmp;
		eref.add(tmp);
	}
	return in;
}


// opérateur d'affichage
template <class T>
std::ostream& operator<<(std::ostream& out, const Ensemble<T>& eref) {
	out << eref.getList() ;
	return out;
}
