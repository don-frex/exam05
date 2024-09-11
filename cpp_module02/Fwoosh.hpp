#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"
#include ""

class Fwoosh: public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();
		virtual ASpell *clone() const;
};

#endif