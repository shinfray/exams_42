#ifndef TARGETGENERATOR_HPP_
# define TARGETGENERATOR_HPP_

# include <map>
# include <string>

# include "ATarget.hpp"

class TargetGenerator {
    private:
        TargetGenerator(const TargetGenerator& src);
        TargetGenerator&    operator=(const TargetGenerator& src);

        std::map<std::string, ATarget*> target_book;

    public:
        TargetGenerator();
        ~TargetGenerator();

        void        learnTargetType(ATarget* target);
        void        forgetTargetType(const std::string& target);
        ATarget*    createTarget(const std::string& target);
};

#endif	// TARGETGENERATOR_HPP_
