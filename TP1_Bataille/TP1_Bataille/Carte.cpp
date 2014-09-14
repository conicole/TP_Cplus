#include "Carte.h"
#include <iostream>
#include <cstdlib>

// representation of two empty packet.
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
			if (headN == NULL){ headN = this;  bottomN = this; next = NULL; }
			else {
				bottomN->next = this;
				bottomN = this;
			}
			break;

		case 'S':
			if (headS == NULL){ headS = this; bottomS = this;  next = NULL; }
			else {
				bottomS->next = this;
				bottomS = this;
			}
			break;
		
		default:
			
			break;
		}
	}


char const* Carte::colorToString (){
	char const* txt[] = { "Pique", "Trefle", "Coeur", "Carreau" };
	return txt[ couleur-1 ];
}

char const* Carte::valueToString(){
	char const* txt[] = { "As", "Deux", "Trois", "Quatre", "Cinq", "Six", "Sept", "Huit", "Neuf", "Dix", "Valet", "Dame", "Roi" };
	return txt[ valeur-1   ];
}


	// displays nord's initial hand
	void Carte::afficherN(){
		Carte * current_card = headN;
		while (current_card != NULL){
			/*std::cout << current_card->valueToString() << " de " << current_card->colorToString() << " ( "  <<
				current_card->valeur << "," << current_card->couleur << " ) " << std::endl;*/
			current_card->afficher();
			current_card = current_card->next;
		}
	}

	// displays south's initial hand
	void  Carte::afficherS(){
		Carte * current_card = headS;
		while (current_card != NULL){
			std::cout << current_card->valueToString() << " de " << current_card->colorToString() << " ( " <<
				current_card->valeur << "," << current_card->couleur << " ) " << std::endl;
			current_card = current_card->next;
		}
	}

	// returns first card of N's hand
	Carte* Carte::getNTete() {
		return headN;
	}

	// returns first card of S's hand
	Carte* Carte::getSTete() {
		return headS;
	}

	// displays the card
	void Carte::afficher() {
		std::cout << this->valueToString() << " de " << this->colorToString() << " ( " <<
			this->valeur << "," << this->couleur << " ) " << std::endl;
	}

	// returns true if the two cards are identical
	bool Carte::egale(Carte otherCard){
		return (this->valeur == otherCard.valeur);
	}

	// returns the next card.
	Carte* Carte::suc() {
		return this->next;
	}

	// changes the owner
	void Carte::changerProp(){
		if (this->proprietaire == 'N'){
			this->proprietaire = 'S'; 
			headN = this->next;
			bottomS->next = this;
			bottomS = this;
			this->next = NULL;
		}
		else {
			this->proprietaire = 'N';
			headS = this->next;
			bottomN->next = this;
			bottomN = this;
			this->next = NULL;
		}
	}

	
	bool Carte::supAbs(Carte St){
		return this->valeur > St.valeur; 
	}

	
	void Carte::passerDerriere(){
		if (this->proprietaire == 'N'){
			headN = this->next;
			bottomN->next = this;
			bottomN = this;
			this->next = NULL;
		}
		else {
			headS = this->next;
			bottomS->next = this;
			bottomS = this;
			this->next = NULL;
		}
	}
	