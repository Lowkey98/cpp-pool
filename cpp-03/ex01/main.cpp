#include "ScavTrap.hpp"
int main( void )
{
    ScavTrap Ankara("lakaka");
    Ankara.attack("massi");
    Ankara.beRepaired(1);
    Ankara.takeDamage(1);
    Ankara.guardGate();
    return (0);
}