#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        std::map<std::string, ASpell *> spell_arr;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell*spell);
        void forgetSpell(std::string const &spell_name);
        ASpell* createSpell(std::string const &create_spell);

};

#endif