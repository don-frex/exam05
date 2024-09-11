#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator it_begin = spell_arr.begin();
	std::map<std::string, ASpell *>::iterator it_end = spell_arr.end();
	while(it_begin != it_end)
	{
		delete it_begin->second;
		it_begin++;
	}
	spell_arr.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
		spell_arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
    std::map<std::string, ASpell *>::iterator it = spell_arr.find(spell_name);
    if (it != spell_arr.end())
        delete it->second;
    spell_arr.erase(spell_name);
}

ASpell* SpellBook::createSpell(std::string const &create_spell)
{
    std::map<std::string, ASpell *>::iterator it = spell_arr.find(create_spell);
    if (it != spell_arr.end())
        return spell_arr[create_spell];
    return NULL;
}