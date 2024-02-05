#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <cstdlib>
#include "ASpell.hpp"

class ASpell;
class ATarget {

	public:
	ATarget(std::string const &type);
	virtual ~ATarget();

		std::string const& getType() const;

		virtual ATarget * clone(void) const = 0;

		void			getHitBySpell(ASpell const& spell) const;

	protected:
	ATarget();
	ATarget(ATarget const &src);
	ATarget &operator=(ATarget const &src);
	std::string _type;

};

#endif
