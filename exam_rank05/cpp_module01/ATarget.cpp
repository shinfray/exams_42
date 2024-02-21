#include "ATarget.hpp"

#include <iostream>

ATarget::ATarget(const std::string& new_type)
    : type(new_type)
{
}

ATarget::ATarget(const ATarget& src)
{
    *this = src;
}

ATarget&    ATarget::operator=(const ATarget& src)
{
    if (this != &src)
        type = src.getType();
    return *this;
}

ATarget::~ATarget()
{
}

const std::string&  ATarget::getType() const
{
    return type;
}

void    ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
