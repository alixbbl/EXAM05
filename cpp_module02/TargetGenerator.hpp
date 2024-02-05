#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <cstdlib>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ATarget;
class TargetGenerator {

	public:
	TargetGenerator(void);
	~TargetGenerator();

		void		learnTargetType(ATarget *);
		void		forgetTargetType(std::string const& target);
		ATarget*	createTarget(std::string const& target);

	private:
	TargetGenerator(TargetGenerator const &src);
	TargetGenerator &operator=(TargetGenerator const &src);
	std::map<std::string, ATarget * > _targets;
};

#endif
