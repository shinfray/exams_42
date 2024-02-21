#ifndef FWOOSH_HPP_
# define FWOOSH_HPP_

# include "ASpell.hpp"

class Fwoosh : public ASpell {
    public:
        Fwoosh();
        Fwoosh(const Fwoosh& src);
        Fwoosh& operator=(const Fwoosh& src);

        ~Fwoosh();

        Fwoosh* clone() const;
};

#endif	// FWOOSH_HPP_
