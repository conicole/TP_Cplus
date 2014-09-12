
#include <list>

// enum of Colors
enum Couleur
{
	Pique, Trefle, Coeur, Carreau
};

// enum of Values
enum Valeur
{
	As, Deux, Trois, Quatre, Cinq, Six, Sept, Huit, Neuf, Dix, Valet, Dame, Roi
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

		// returns true if the two cards are identical
		bool egale(Carte otherCard);

		// returns the next card.
		Carte* suc();

		// changes the owner
		void changerProp();

		// wut
		bool supAbs(Carte St);

		// 
		void passerDerriere();

};