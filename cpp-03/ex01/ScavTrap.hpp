#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& s1);
        ScavTrap& operator= (ScavTrap &s1);
        ~ScavTrap();
        ScavTrap(std::string name);
        void    attack(const std::string &target);
        void    guardGate();
};
#endif // SCAVTRAP_HPP