#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include <cstdlib>
#include "ATarget.hpp"

class ATarget;
class BrickWall : public ATarget {

	public:
	BrickWall();
	~BrickWall();

		ATarget * clone(void) const;
};

#endif
