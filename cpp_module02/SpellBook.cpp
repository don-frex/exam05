#include "SpellBook.hpp"


SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		arr_book.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
	std::map<std::string, ASpell *>::iterator it = arr_book.find(spell_name);
	if (it != arr_book.end())
		delete it->second;
	arr_book.erase(spell_name);
}

ASpell* SpellBook::createSpell(std::string const &spell_name)
{
	std::map<std::string, ASpell *>::iterator it = arr_book.find(spell_name);
	if (it != arr_book.end())
		return arr_book[spell_name];
	return NULL;
}