#include "../inc/Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "unnamed";
}

Zombie::~Zombie(void)
{
    std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
};