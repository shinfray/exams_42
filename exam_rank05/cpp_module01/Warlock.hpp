#ifndef WARLOCK_HPP_
# define WARLOCK_HPP_

# include <map>
# include <string>

# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock {
    private:
        Warlock();
        Warlock(const Warlock& src);
        Warlock&    operator=(const Warlock& src);

        std::string name;
        std::string title;
        std::map<std::string, ASpell*>  spell_book;

    public:
        Warlock(const std::string& new_name, const std::string& new_title);

        ~Warlock();

        const std::string&  getName() const;
        const std::string&  getTitle() const;
        void                setTitle(const std::string& new_title);
        void                introduce() const;

        void    learnSpell(ASpell* spell);
        void    forgetSpell(std::string spell);
        void    launchSpell(std::string spell, const ATarget& target);
};

#endif	// WARLOCK_HPP_
