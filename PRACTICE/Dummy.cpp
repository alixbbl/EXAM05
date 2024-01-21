#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {
	return ;
}

Dummy::~Dummy() {
	return ;
}

ATarget*		Dummy::clone(void) const {

	Dummy* newDummy = new Dummy;
	return newDummy;
}
