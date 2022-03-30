# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& s1);
        ~ScavTrap();
        ScavTrap& operator= (ScavTrap &s1);
        ScavTrap(std::string name);
        void    attack(const std::string &target);
        void    guardGate();
};