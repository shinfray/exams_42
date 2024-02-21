#ifndef FIREBALL_HPP_
# define FIREBALL_HPP_

# include "ASpell.hpp"

class Fireball : public ASpell {
    public:
        Fireball();
        Fireball(const Fireball& src);
        Fireball&   operator=(const Fireball& src);

        ~Fireball();

        Fireball*   clone() const;
};

#endif	// FIREBALL_HPP_
