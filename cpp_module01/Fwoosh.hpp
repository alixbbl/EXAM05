#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include <cstdlib>
#include "ASpell.hpp"

class ASpell;
class Fwoosh : public ASpell {

	public:
	Fwoosh();
	~Fwoosh();

		ASpell * clone(void) const;
};

#endif
