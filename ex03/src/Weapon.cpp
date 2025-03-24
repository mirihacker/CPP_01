#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string input): _type(input){};

Weapon::~Weapon(){};

std::string &Weapon::getType()
{
    return(_type);
}

void Weapon::setType(std::string value)
{
    _type = value;
}