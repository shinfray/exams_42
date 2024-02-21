#include "ASpell.hpp"

ASpell::ASpell(const std::string& new_name, const std::string& new_effects)
    : name(new_name), effects(new_effects)
{
}

ASpell::ASpell(const ASpell& src)
{
    *this = src;
}

ASpell& ASpell::operator=(const ASpell& src)
{
    if (this != &src) {
        name = src.getName();
        effects = src.getEffects();
    }
    return *this;
}

ASpell::~ASpell()
{
}

const std::string&  ASpell::getName() const
{
    return name;
}

const std::string&  ASpell::getEffects() const
{
    return effects;
}

void    ASpell::launch(const ATarget& target) const
{
    target.getHitBySpell(*this);
}
