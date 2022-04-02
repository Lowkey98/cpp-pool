#if !defined(HUMANB_HPP)
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB{

    public:
        HumanB();
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
    private:
        std::string name;
        Weapon *weapon;

};
#endif // HUMANB_HPP