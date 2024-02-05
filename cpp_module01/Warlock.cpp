#include "Warlock.hpp"
#include <map>

Warlock::Warlock() {}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl; }

Warlock::Warlock(Warlock const &src) {
	_name = src._name;
	_title = src._title;
}

Warlock &Warlock::operator=(Warlock const &src) {
	if (this != &src) {
		_name = src._name;
		_title = src._title; }
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); it++) {
		delete it->second;
	}
	_spellBook.clear();
}

std::string const& Warlock::getName() const {
	return _name;
}

std::string const& Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(std::string const &title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

/*       NEW        */

void	Warlock::learnSpell(ASpell *spell) {

	if (spell) {
		if (_spellBook.find(spell->getName()) == _spellBook.end())
			_spellBook[(spell->getName())] = spell->clone(); }
}

void	Warlock::forgetSpell(std::string spellname) {

	if (_spellBook.find(spellname) != _spellBook.end()) {
		_spellBook.erase(_spellBook.find(spellname));
	}
}

void	Warlock::launchSpell(std::string spellname, ATarget const& type) {

	if (_spellBook.find(spellname) != _spellBook.end()) {
		_spellBook[spellname]->launch(type);
	}
}
