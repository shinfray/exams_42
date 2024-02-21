#include "Warlock.hpp"

#include <iostream>

Warlock::Warlock(const std::string& new_name, const std::string& new_title)
    : name(new_name), title(new_title)
{
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!" << std::endl;
}

const std::string&  Warlock::getName() const
{
    return name;
}

const std::string&  Warlock::getTitle() const
{
    return title;
}

void    Warlock::setTitle(const std::string& new_title)
{
    title = new_title;
}

void    Warlock::introduce() const
{
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}
