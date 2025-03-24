#include "../inc/Zombie.hpp"

int main()
{
    Zombie zombie;
    zombie.announce();
    zombie.setName("foo");
    zombie.announce();
    randomChump("Garfield");
    return(0);
}
