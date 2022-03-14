#include "Weapon.hpp"
class HumanB{

    public:
        Weapon *weapon;
        std::string name;
        void attack();
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
};