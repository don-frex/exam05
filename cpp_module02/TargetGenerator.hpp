#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::map<std::string, ATarget *> arr_book;
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* Target);
		void forgetTargetType(std::string const &Target_name);
		ATarget* createTarget(std::string const &Target_name);		
};

#endif