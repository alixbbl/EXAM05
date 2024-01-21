#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget {

	public:
	Dummy(void);
	~Dummy();

	ATarget*	clone(void) const;
};

// Classe hyper simple, pas besoin de tout
// La consigne ne demande PAS de faire la forme canonique...

#endif
