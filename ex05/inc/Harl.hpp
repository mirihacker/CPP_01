#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    public:
        Harl();
		~Harl();
        void complain(std::string level) const;

    private:
        void debug(void) const;
        void info(void) const;
        void warning(void) const;
        void error(void) const;
};

#endif