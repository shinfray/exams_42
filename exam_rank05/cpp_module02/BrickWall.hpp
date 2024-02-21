#ifndef BRICKWALL_HPP_
# define BRICKWALL_HPP_

# include "ATarget.hpp"

class BrickWall : public ATarget {
    public:
        BrickWall();
        BrickWall(const BrickWall& src);
        BrickWall&  operator=(const BrickWall& src);

        ~BrickWall();

        BrickWall*  clone() const;
};

#endif	// BRICKWALL_HPP_
