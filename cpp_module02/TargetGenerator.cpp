#include "TargetGenerator.hpp"
#include <map>

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(TargetGenerator const &src) {
	_targets = src._targets;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &src) {
	if (this != &src) {
		_targets = src._targets; }
	return (*this);
}

TargetGenerator::~TargetGenerator() {

	for (std::map<std::string, ATarget *>::iterator it = _targets.begin(); it != _targets.end(); it++) {
		delete it->second;
	}
	_targets.clear();
}

void	TargetGenerator::learnTargetType(ATarget *target) {

	if (target)
		_targets[(target->getType())] = target->clone();
}

void	TargetGenerator::forgetTargetType(std::string const& target) {

	if (_targets.find(target) != _targets.end()) {
		_targets.erase(_targets.find(target));
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& target) {

	ATarget *newtarget = NULL;
	if (_targets.find(target) != _targets.end()) {
		newtarget = _targets[target];
	}
	return newtarget;
}
