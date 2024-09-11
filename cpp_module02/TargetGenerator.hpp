#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        std::map<std::string, ATarget *> target_arr;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &target_name);
        ATarget* createTarget(std::string const &create_target);

};

#endif