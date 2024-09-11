#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget *>::iterator it_begin = target_arr.begin();
	std::map<std::string, ATarget *>::iterator it_end = target_arr.end();
	while(it_begin != it_end)
	{
		delete it_begin->second;
		it_begin++;
	}
	target_arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
		target_arr.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &target_name)
{
    std::map<std::string, ATarget *>::iterator it = target_arr.find(target_name);
    if (it != target_arr.end())
        delete it->second;
    target_arr.erase(target_name);
}

ATarget* TargetGenerator::createTarget(std::string const &create_target)
{
    std::map<std::string, ATarget *>::iterator it = target_arr.find(create_target);
    if (it != target_arr.end())
        return target_arr[create_target];
    return NULL;
}