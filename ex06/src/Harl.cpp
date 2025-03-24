#include "../inc/Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

void Harl::complain(std::string level) const
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void (Harl::*f[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level.compare(levels[i]) == 0)
        {
            (this->*f[i])();
            return ;
        }
    }
    std::cout << "Unkown level" << std::endl;
};

void Harl::debug(void) const
{
    std::cout << "DEBUGG!" << std::endl;
};

void Harl::info(void) const
{
    std::cout << "INFO!" << std::endl;
};

void Harl::warning(void) const
{
    std::cout << "WARNING!" << std::endl;
};

void Harl::error(void) const
{
    std::cout << "ERROR!" << std::endl;
};