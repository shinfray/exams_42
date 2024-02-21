#ifndef POLYMORPH_HPP_
# define POLYMORPH_HPP_

# include "ASpell.hpp"

class Polymorph : public ASpell {
    public:
        Polymorph();
        Polymorph(const Polymorph& src);
        Polymorph&  operator=(const Polymorph& src);

        ~Polymorph();

        Polymorph*  clone() const;
};

#endif	// POLYMORPH_HPP_
