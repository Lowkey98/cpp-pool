# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Name Contrustor" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    this->_name = name;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Contrustor" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& s1) :ClapTrap(s1)
{

    std::cout << "ScavTrap Copy Contrustor" << std::endl;
    this->_name = s1._name;   
    this->_hit_points = s1._hit_points;   
    this->_energy_points = s1._energy_points;   
    this->_attack_damage = s1._attack_damage;   

}

ScavTrap& ScavTrap::operator = (ScavTrap &s1)
{
    std::cout << "Assignement operator " << std::endl;
    this->_name = s1._name;   
    this->_hit_points = s1._hit_points;       
    this->_energy_points = s1._energy_points;   
    this->_attack_damage = s1._attack_damage;   
    return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout << this->_name <<" is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
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
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
    this->_energy_points--;
}