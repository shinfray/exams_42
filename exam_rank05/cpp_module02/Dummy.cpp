#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::Dummy(const Dummy& src) : ATarget(src)
{
}

Dummy&  Dummy::operator=(const Dummy& src)
{
    if (this != &src)
        ATarget::operator=(src);
    return *this;
}

Dummy::~Dummy()
{
}

Dummy* Dummy::clone() const
{
    return new Dummy;
}
