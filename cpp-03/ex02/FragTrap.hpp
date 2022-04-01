# include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap& s1);
        ~FragTrap();
        FragTrap& operator= (FragTrap &s1);
        FragTrap(std::string name);
        void    attack(const std::string &target);
        void highFivesGuys(void);
};