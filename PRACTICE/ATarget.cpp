#include "ATarget.hpp"

ATarget::ATarget() { return ;}

ATarget::ATarget(std::string type) {
	this->_type = type;
	return ;
}

ATarget::ATarget(const ATarget &src) {
	*this = src;
}

ATarget &ATarget::operator=(const ATarget &src) {

	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

ATarget::~ATarget() {
	return ;
}


std::string	const &ATarget::getType() const {
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell& spell) const {

	std::cout << this->_type << " has been " << spell.getEffects() << std::endl;
}
