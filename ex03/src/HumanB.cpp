#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){};

HumanB::~HumanB(){};

void HumanB::attack()
{
    std::cout << _name << " attacks with " << _weapon->getType() << std::endl; 
}

void HumanB::setWeapon(Weapon &wp)
{
    _weapon = &wp;
}