#include "Weapon.hpp"

const std::string & Weapon::getType(){
    // const std::string & typeRef = this->type;
    return (this->type);
}

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::Weapon(){};
void    Weapon::setType(std::string type){
    this->type = type;
}