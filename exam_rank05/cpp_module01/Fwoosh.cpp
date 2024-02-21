#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::Fwoosh(const Fwoosh& src) : ASpell(src)
{
}

Fwoosh& Fwoosh::operator=(const Fwoosh& src)
{
    if (this != &src)
        ASpell::operator=(src);
    return *this;
}

Fwoosh::~Fwoosh()
{
}

Fwoosh* Fwoosh::clone() const
{
    return new Fwoosh;
}
