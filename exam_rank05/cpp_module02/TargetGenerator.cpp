#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
    for (std::map<std::string, ATarget*>::iterator it = target_book.begin(); it != target_book.end(); ++it) {
        delete it->second;
        it->second = NULL;
    }
    target_book.clear();
}

void    TargetGenerator::learnTargetType(ATarget* target)
{
    if (target_book.find(target->getType()) == target_book.end())
        target_book[target->getType()] = target->clone();
}

void    TargetGenerator::forgetTargetType(const std::string& target)
{
    if (target_book.find(target) != target_book.end()) {
        delete target_book[target];
        target_book[target] = NULL;
        target_book.erase(target_book.find(target));
    }
}

ATarget*    TargetGenerator::createTarget(const std::string& target)
{
    ATarget*    tmp = NULL;
    if (target_book.find(target) != target_book.end())
        tmp = target_book[target];
    return tmp;
}
