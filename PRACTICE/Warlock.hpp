#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class ASpell;

class Warlock {

	public:
	Warlock(std::string name, std::string title);
	~Warlock();

		std::string	const &getName() const;
		std::string const &getTitle() const;
		void		setTitle(const std::string &str);
		void		introduce() const;

		// NEW ones
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellname);
		void	launchSpell(std::string spellname, const ATarget& target);

	private:
	Warlock();
	Warlock(const Warlock &src);
	Warlock &operator=(const Warlock &src);
	std::string _name;
	std::string _title;

	std::map< std::string, ASpell * > _spellBook;
};

#endif
