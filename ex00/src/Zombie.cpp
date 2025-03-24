#include "../inc/Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "noname";
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
    std::cout << _name << ": created" << std::endl;
}