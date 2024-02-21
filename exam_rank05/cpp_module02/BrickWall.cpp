#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::BrickWall(const BrickWall& src) : ATarget(src)
{
}

BrickWall&  BrickWall::operator=(const BrickWall& src)
{
    if (this != &src)
        ATarget::operator=(src);
    return *this;
}

BrickWall::~BrickWall()
{
}

BrickWall*  BrickWall::clone() const
{
    return new BrickWall;
}
