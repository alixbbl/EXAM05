#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {

	public:
	ASpell();
	ASpell(std::string name, std::string effects);
	ASpell(const ASpell &src);
	ASpell &operator=(const ASpell &src);
	virtual ~ASpell();

		std::string	const &getName() const;
		std::string const &getEffects() const;

		virtual ASpell*	clone(void) const = 0; // ATTENTION
		void			launch(const ATarget& target) const;

	protected:
	std::string _name;
	std::string _effects;
};

#endif
