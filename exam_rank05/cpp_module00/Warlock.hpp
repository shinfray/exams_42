#ifndef WARLOCK_HPP_
# define WARLOCK_HPP_

# include <string>

class Warlock {
    private:
        Warlock();
        Warlock(const Warlock& src);
        Warlock&    operator=(const Warlock &src);

        std::string name;
        std::string title;

    public:
        Warlock(const std::string& new_name, const std::string& new_title);

        ~Warlock();

        const std::string&  getName() const;
        const std::string&  getTitle() const;
        void                setTitle(const std::string& new_title);
        void                introduce() const;
};

#endif	// WARLOCK_HPP_
