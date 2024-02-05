#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <cstdlib>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;
class Warlock {

	public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

		std::string const& getName() const;
		std::string const& getTitle() const;
		void		setTitle(std::string const &title);
		void		introduce() const;

		void		learnSpell(ASpell *spell);
		void		forgetSpell(std::string spellname);
		void		launchSpell(std::string spellname, ATarget const& type);

	private:
	Warlock();
	Warlock(Warlock const &src);
	Warlock &operator=(Warlock const &src);
	std::string _name;
	std::string _title;
	std::map< std::string, ASpell * > _spellBook;

};

#endif
