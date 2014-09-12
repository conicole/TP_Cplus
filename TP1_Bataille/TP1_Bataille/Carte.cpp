#include "Carte.h";

Carte* Carte::headN = NULL;
Carte* Carte::headS = NULL;
Carte* Carte::bottomN = NULL;
Carte* Carte::bottomS = NULL;

// constructor
Carte::Carte(Couleur coul, Valeur val, const char prop) : couleur(coul), valeur(val), proprietaire(prop)
	{
	switch (prop)
	{
	case 'N':
		if (headN == NULL){ bottomN = this;  }
		next = headN;
		headN = this;
		break;

	case 'S':
		if (headS == NULL){ bottomS = this; }
		next = headS;
		headS = this;
		break;
		
	default:
		break;
	}
	};

	// displays nord's initial hand
	void static afficherN(){}

	// displays south's initial hand
	void static afficherS(){}

	// returns first card of N's hand
	static Carte* getNTete() {}

	// returns first card of S's hand
	static Carte* getSTete() {}

	// displays the card
	void afficher() {}

	// returns true if the two cards are identical
	bool egale(Carte otherCard){}

	// returns the next card.
	Carte* suc() {}

	// changes the owner
	void changerProp(){}

	// wut
	bool supAbs(Carte St){}

	// 
	void passerDerriere(){}
