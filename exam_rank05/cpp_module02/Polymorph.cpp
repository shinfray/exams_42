#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::Polymorph(const Polymorph& src) : ASpell(src)
{
}

Polymorph&  Polymorph::operator=(const Polymorph& src)
{
	if (this != &src)
		ASpell::operator=(src);
	return *this;
}

Polymorph::~Polymorph()
{
}

Polymorph*  Polymorph::clone() const
{
    return new Polymorph;
}
