#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../inc/Weapon.hpp"
#include <iomanip>

class HumanB
{
    public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &wp);

    private:
    std::string _name;
    Weapon *_weapon;
};

#endif