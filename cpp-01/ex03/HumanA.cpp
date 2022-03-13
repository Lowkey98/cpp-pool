#include"HumanA.hpp"

void HumanA::attack(){
    std::cout << this->name << "attacks with their" << this->weapon.getType() << endl;
}

HumanA::HumanA(std::string name, Weapon weapon){
    this->weapon = weapon;
}
