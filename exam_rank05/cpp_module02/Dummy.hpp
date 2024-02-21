#ifndef DUMMY_HPP_
# define DUMMY_HPP_

# include "ATarget.hpp"

class Dummy : public ATarget {
    public:
        Dummy();
        Dummy(const Dummy& src);
        Dummy&  operator=(const Dummy& src);

        ~Dummy();

        Dummy*  clone() const;
};

#endif	// DUMMY_HPP_
