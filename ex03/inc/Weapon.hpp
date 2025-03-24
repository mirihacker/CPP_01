#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
    public:
    Weapon(std::string input);
    ~Weapon();
    std::string &getType();
    void setType(std::string value);

    private:
    std::string _type;
};

#endif