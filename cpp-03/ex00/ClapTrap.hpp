#if !defined(CLAPTRAP_HPP)
#define CLAPTRAP_HPP

#include<string>
#include<iostream>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& c1);
		ClapTrap& operator = (ClapTrap &c1);
		ClapTrap(std::string name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

};
#endif // CLAPTRAP_HPP