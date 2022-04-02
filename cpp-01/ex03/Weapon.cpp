#include "Weapon.hpp"

const std::string & Weapon::getType()
{
    return (this->type);
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{
    std::cout << "Weapon Default Constructor" << std::endl;
};
void    Weapon::setType(std::string type)
{
    this->type = type;
}