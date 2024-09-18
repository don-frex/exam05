#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* Target)
{
	if (Target)
		arr_book.insert(std::pair<std::string, ATarget *>(Target->getType(), Target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &Target_name)
{
	std::map<std::string, ATarget *>::iterator it = arr_book.find(Target_name);
	if (it != arr_book.end())
		delete it->second;
	arr_book.erase(Target_name);
}

ATarget* TargetGenerator::createTarget(std::string const &Target_name)
{
	std::map<std::string, ATarget *>::iterator it = arr_book.find(Target_name);
	if (it != arr_book.end())
		return arr_book[Target_name];
	return NULL;
}