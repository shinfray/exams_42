#include "Warlock.hpp"

#include <iostream>

Warlock::Warlock(const std::string& new_name, const std::string& new_title)
    : name(new_name), title(new_title)
{
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    for (std::map<std::string, ASpell*>::iterator it = spell_book.begin(); it != spell_book.end(); ++it) {
        delete it->second;
        it->second = NULL;
    }
    spell_book.clear();
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

void    Warlock::learnSpell(ASpell* spell)
{
    if (spell_book.find(spell->getName()) == spell_book.end())
        spell_book[spell->getName()] = spell->clone();
}
void    Warlock::forgetSpell(std::string spell)
{
    if (spell_book.find(spell) != spell_book.end()) {
        delete spell_book[spell];
        spell_book[spell] = NULL;
        spell_book.erase(spell_book.find(spell));
    }
}
void    Warlock::launchSpell(std::string spell, const ATarget& target)
{
    if (spell_book.find(spell) != spell_book.end())
        spell_book[spell]->launch(target);
}
