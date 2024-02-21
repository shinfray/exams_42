#ifndef ATARGET_HPP_
# define ATARGET_HPP_

# include <string>

# include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        ATarget();

    protected:
        std::string type;

    public:
        ATarget(const std::string& new_type);
        ATarget(const ATarget& src);
        ATarget&    operator=(const ATarget& src);

        virtual ~ATarget();

        const std::string&  getType() const;
        void                getHitBySpell(const ASpell& spell) const;
        virtual ATarget*    clone() const = 0;
};

#endif	// ATARGET_HPP_
