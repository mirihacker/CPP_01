#include "../inc/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *ptr;

    ptr = newZombie(name);
    ptr->announce();
    delete ptr;
}