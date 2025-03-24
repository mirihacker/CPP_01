#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arm): _name(name), _weapon(arm){};

HumanA::~HumanA(){};

void HumanA::attack()
{
    std::cout << _name << " attacks with " << _weapon.getType() << std::endl; 
}
