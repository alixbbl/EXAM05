#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {

	public:
	ATarget();
	ATarget(std::string type);
	ATarget(const ATarget &src);
	ATarget &operator=(const ATarget &src);
	~ATarget();

		std::string	const &getType() const;
		void 	getHitBySpell(const ASpell& spell) const; // ATTENTION simple void

		virtual ATarget*	clone(void) const = 0;

	protected:
	std::string _type;
};

#endif
