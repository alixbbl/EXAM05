#include "ASpell.hpp"

ASpell::ASpell() { return ;}

ASpell::ASpell(std::string name, std::string effects) {
	this->_name = name;
	this->_effects = effects;
	// std::cout << _name << ": This looks like another boring day." << std::endl;
	return ;
}

ASpell::ASpell(const ASpell &src) {
	*this = src;
}

ASpell &ASpell::operator=(const ASpell &src) {

	if (this != &src) {
		this->_name = src._name;
		this->_effects= src._effects;
	}
	return *this;
}

ASpell::~ASpell() {
	return ;
}


std::string	const &ASpell::getName() const {
	return this->_name;
}

std::string const &ASpell::getEffects() const {
	return this->_effects;
}

void	ASpell::launch(const ATarget& target) const {

	target.getHitBySpell(*this);
}
