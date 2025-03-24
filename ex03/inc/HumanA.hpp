#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../inc/Weapon.hpp"
#include "iomanip"

class HumanA
{
    public:
    HumanA(std::string name, Weapon &arm);
    ~HumanA();
    void attack();

    private:
    std::string _name;
    Weapon &_weapon;
};

#endif