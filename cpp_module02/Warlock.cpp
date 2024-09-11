#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title) {
	std::cout << getName() << ": This looks like another boring day.\n";
}


Warlock::~Warlock(){
	std::cout << getName() << ": My job here is done!\n";
}

std::string const &Warlock::getName() const
{
	return this->name;
}

std::string const &Warlock::getTitle() const
{
	return this->title;
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const{
	std::cout << getName() << ": I am " << getName() << ", " + getTitle() << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string spell)
{
	std::map<std::string, ASpell *>::iterator it = arr.find(spell);
	if (it != arr.end())
		delete it->second;
	arr.erase(spell);
}
void Warlock::launchSpell(std::string spell_name, ATarget const &target)
{
	ASpell *spell = arr[spell_name];
	if (spell)
		spell->launch(target);
}
