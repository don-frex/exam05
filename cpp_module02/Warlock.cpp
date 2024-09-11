#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title) {
	std::cout << getName() << ": This looks like another boring day.\n";
}


Warlock::~Warlock(){
	std::cout << getName() << ": My job here is done!\n";
	// std::map<std::string, ASpell *>::iterator it_begin = arr.begin();
	// std::map<std::string, ASpell *>::iterator it_end = arr.end();
	// while(it_begin != it_end)
	// {
	// 	delete it_begin->second;
	// 	it_begin++;
	// }
	// arr.clear();
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
	book.learnSpell(spell);	
}

void Warlock::forgetSpell(std::string spell)
{
	book.forgetSpell(spell);
}
void Warlock::launchSpell(std::string spell_name, ATarget const &target)
{
	ASpell *spell = book.createSpell(spell_name);
	if (spell)
		spell->launch(target);
}
