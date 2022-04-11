# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Name Contrustor" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    this->_name = name;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Contrustor" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& s1) :ClapTrap(s1)
{

    std::cout << "FragTrap Copy Contrustor" << std::endl;
    this->_name = s1._name;   
    this->_hit_points = s1._hit_points;   
    this->_energy_points = s1._energy_points;   
    this->_attack_damage = s1._attack_damage;   

}

FragTrap& FragTrap::operator = (FragTrap &s1)
{
    std::cout << "Assignement operator " << std::endl;
    this->_name = s1._name;   
    this->_hit_points = s1._hit_points;       
    this->_energy_points = s1._energy_points;   
    this->_attack_damage = s1._attack_damage;   
    return (*this);
}

void    FragTrap::highFivesGuys()
{
    std::cout << "High fives request" << std::endl;
}

void    FragTrap::attack(const std::string &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "Don't have any energy points left" << std::endl;
        return ;
    }
    
    if (this->_hit_points <= 0)
    {
        std::cout << "Don't have any hit points left" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
    this->_energy_points--;
}