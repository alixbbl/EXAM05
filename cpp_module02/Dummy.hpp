#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include <cstdlib>
#include "ATarget.hpp"

class ATarget;
class Dummy : public ATarget {

	public:
	Dummy();
	~Dummy();

		ATarget * clone(void) const;
};

#endif
