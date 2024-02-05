#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

ASpell * Fwoosh::clone(void) const {

	Fwoosh *newFwoosh = new Fwoosh;
	return newFwoosh;
}
