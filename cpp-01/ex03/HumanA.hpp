#include "Weapon.hpp"
class HumanA{
    private:
    
    public:
        Weapon weapon;
        std::string name;
        void attack();
        HumanA(std::string name, Weapon weapon);
};