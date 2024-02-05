#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <cstdlib>
#include "ATarget.hpp"

class ATarget;
class ASpell {

	public:
	ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &src);
	ASpell &operator=(ASpell const &src);
	virtual ~ASpell();

		std::string const& getName() const;
		std::string const& getEffects() const;

		virtual ASpell * clone(void) const = 0;

		void			launch(ATarget const& target);

	protected:
	ASpell();
	std::string _name;
	std::string _effects;

};

#endif
