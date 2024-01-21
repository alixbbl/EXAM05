#include "Warlock.hpp"

Warlock::Warlock() { return ;}

Warlock::Warlock(std::string name, std::string title) {
	this->_name = name;
	this->_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::Warlock(const Warlock &src) {
	*this = src;
}

Warlock &Warlock::operator=(const Warlock &src) {

	if (this != &src) {
		this->_name = src._name;
		this->_title = src._title;
	}
	return *this;
}

Warlock::~Warlock() {
	std::cout << this->_name << " : My job here is done!" << std::endl;
	return ;
}


std::string	const &Warlock::getName() const {
	return this->_name;
}

std::string const &Warlock::getTitle() const {
	return this->_title;
}


void	Warlock::setTitle(const std::string &str) {
	this->_title = str;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}


// NEW FUNCTIONS ATTENTION AUX SYNTAXES ET AU FONCTIONS DE LA MAP(STL)

void	Warlock::learnSpell(ASpell* spell) {

	if (spell != NULL) {
		if (this->_spellBook.find(spell->getName()) == _spellBook.end())
			_spellBook[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(std::string spellname) {

	if (_spellBook.find(spellname) != _spellBook.end()) // "si on trouve avant la fin"
		_spellBook.erase(_spellBook.find(spellname));
}

void	Warlock::launchSpell(std::string spellname, ATarget const & target) {

	if (_spellBook.find(spellname) != _spellBook.end())
		_spellBook[spellname]->launch(target);
}
