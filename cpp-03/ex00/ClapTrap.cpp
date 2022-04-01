#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name Contrustor" << std::endl;
    this->_attack_damage = 0;
    this->_energy_points = 10;
    this->_hit_points = 10;
    this->_name = name;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default Contrustor" << std::endl;
    this->_attack_damage = 0;
    this->_energy_points = 10;
    this->_hit_points = 10;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c1)
{
    std::cout << "Copy Contrustor" << std::endl;
    this->_name = c1._name;   
    this->_attack_damage = c1._attack_damage;   
    this->_energy_points = c1._energy_points;   
    this->_hit_points = c1._hit_points;   

}

ClapTrap& ClapTrap::operator = (ClapTrap &c1)
{
    std::cout << "Assignement operator " << std::endl;
    this->_name = c1._name;   
    this->_attack_damage = c1._attack_damage;   
    this->_energy_points = c1._energy_points;   
    this->_hit_points = c1._hit_points;       
    return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_energy_points < 0)
    {
        std::cout << "Don't have any energy points left" << std::endl;
        return ;
    }
    
    if (this->_hit_points < 0)
    {
        std::cout << "Don't have any hit points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
    this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " took " << amount << " amount of damage" << std::endl;
    this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points < 0)
    {
        std::cout << "Don't have any energy points left" << std::endl;
        return ;
    }
    
    if (this->_hit_points < 0)
    {
        std::cout << "Don't have any hit points left" << std::endl;
        return ;
    }
    std::cout << "clapTrap " << this->_name << " got " << this->_hit_points << " hit points back" << std::endl;
    this->_hit_points += amount;
}