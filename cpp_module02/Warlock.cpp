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
{ std::cout << _name << ": My job here is done!" << std::endl;
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
	if (spell) { _spellBook.learnSpell(spell); } }

void	Warlock::forgetSpell(std::string spellname) {
	_spellBook.forgetSpell(spellname);
}


// ATTENTION, logique chelou
// createspelle retourne un ASpell*, donc si on reussit a creer ce Spell, on le lance
void	Warlock::launchSpell(std::string spellname, ATarget const& type) {

	if (_spellBook.createSpell(spellname))
		_spellBook.createSpell(spellname)->launch(type);
}
