#ifndef SPELLBOOK_HPP_
# define SPELLBOOK_HPP_

# include <map>
# include <string>

# include "ASpell.hpp"

class SpellBook {
    private:
        SpellBook(const SpellBook& src);
        SpellBook&  operator=(const SpellBook& src);

        std::map<std::string, ASpell*>  spell_book;

    public:
        SpellBook();
        ~SpellBook();

        void    learnSpell(ASpell* spell);
        void    forgetSpell(const std::string& spell);
        ASpell* createSpell(const std::string& spell);
};

#endif	// SPELLBOOK_HPP_
