#ifndef ASPELL_HPP_
# define ASPELL_HPP_

# include <string>

# include "ATarget.hpp"

class ATarget;

class ASpell {
    private:
        ASpell();

    protected:
        std::string name;
        std::string effects;

    public:
        ASpell(const std::string& new_name, const std::string& new_effects);
        ASpell(const ASpell& src);
        ASpell& operator=(const ASpell& src);

        virtual ~ASpell();

        const std::string&  getName() const;
        const std::string&  getEffects() const;
        void                launch(const ATarget& target) const;
        virtual ASpell*     clone() const = 0;
};

#endif  // ASPELL_HPP_
