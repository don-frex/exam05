#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &other);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &other);
		std::string const &getType() const;
		virtual ATarget *clone() const = 0;
		void getHitBySpell(ASpell const &spell) const;

};

#endif