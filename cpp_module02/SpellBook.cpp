#include "SpellBook.hpp"
#include <map>

SpellBook::SpellBook() {}

SpellBook::SpellBook(SpellBook const &src) {
	_spellBook = src._spellBook;
}

SpellBook &SpellBook::operator=(SpellBook const &src) {
	if (this != &src) {
		_spellBook = src._spellBook; }
	return (*this);
}

SpellBook::~SpellBook() {

	for (std::map<std::string, ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); it++) {
		delete it->second;
	}
	_spellBook.clear();
}

/*       NEW        */

void	SpellBook::learnSpell(ASpell *spell) {

	if (spell)
		_spellBook[(spell->getName())] = spell->clone();
}

void	SpellBook::forgetSpell(std::string const& spellname) {

	if (_spellBook.find(spellname) != _spellBook.end()) {
		_spellBook.erase(_spellBook.find(spellname));
	}
}

ASpell*	SpellBook::createSpell(std::string const& spellname) {

	ASpell *newSpell = NULL;
	if (_spellBook.find(spellname) != _spellBook.end()) {
		newSpell= _spellBook[spellname]; }
	return newSpell;
}
