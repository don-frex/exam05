#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		ASpell(ASpell const &other);
		ASpell &operator=(ASpell const &other);
		virtual ~ASpell();
		std::string const &getName() const;
		std::string const &geteffects() const;
		void	launch(ATarget const &target) const;
		virtual ASpell *clone() const = 0;

};

#endif