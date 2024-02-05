#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;
class SpellBook {

	public:
	~SpellBook();
	SpellBook(void);

		void		learnSpell(ASpell *);
		void		forgetSpell(std::string const& spellname);
		ASpell*		createSpell(std::string const& spellname);

	private:
	SpellBook(SpellBook const &src);
	SpellBook &operator=(SpellBook const &src);
	std::map< std::string, ASpell * > _spellBook;

};

#endif
