
#include <cstdlib>

// enum of Colors
enum Couleur
{
	Pique=1, Trefle, Coeur, Carreau
};

// enum of Values
enum Valeur
{
	As=1, Deux, Trois, Quatre, Cinq, Six, Sept, Huit, Neuf, Dix, Valet, Dame, Roi
};

class Carte
{
	Couleur couleur;
	Valeur valeur;
	char proprietaire;
	Carte* next;

	static Carte* headN;
	static Carte* headS;
	static Carte* bottomN;
	static Carte* bottomS;
	


	public:
		

		// constructor
		Carte(Couleur coul, Valeur val, const char proprietaire);

		Carte static getHeadN();

		Carte static getHeadS();

		// displays nord's initial hand
		void static afficherN();

		// displays south's initial hand
		void static afficherS();

		// returns first card of N's hand
		static Carte* getNTete();

		// returns first card of S's hand
		static Carte* getSTete();

		// displays the card
		void afficher();

		// returns true if the two card have the same value.
		bool egale(Carte otherCard);

		// returns the next card.
		Carte* suc();

		// changes the owner
		void changerProp();

		// return true if the current card won against St
		bool supAbs(Carte St);

		// send the current card to the bottom of the stack.
	    void passerDerriere();

		// changes the value color to String (to display) 
		char const* colorToString();

		// changes the value value to String (to display )
		char const* valueToString();
};