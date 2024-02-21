#include "SpellBook.hpp"

#include <iostream>

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell*>::iterator it = spell_book.begin(); it != spell_book.end(); ++it) {
        delete it->second;
        it->second = NULL;
    }
    spell_book.clear();
}

void    SpellBook::learnSpell(ASpell* spell)
{
    if (spell_book.find(spell->getName()) == spell_book.end())
        spell_book[spell->getName()] = spell->clone();
}

void    SpellBook::forgetSpell(const std::string& spell)
{
    if (spell_book.find(spell) != spell_book.end()) {
        delete spell_book[spell];
        spell_book[spell] = NULL;
        spell_book.erase(spell_book.find(spell));
    }
}

ASpell* SpellBook::createSpell(const std::string& spell)
{
    ASpell* tmp = NULL;
    if (spell_book.find(spell) != spell_book.end())
        tmp = spell_book[spell];
    return tmp;
}
