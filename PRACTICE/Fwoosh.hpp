#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell {

	public:
	Fwoosh(void) ;
	~Fwoosh();

	ASpell*			clone(void) const;
};

// Classe hyper simple, pas besoin de tout
// La consigne ne demande PAS de faire la forme canonique...

#endif
