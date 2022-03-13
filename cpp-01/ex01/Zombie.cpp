#include "Zombie.hpp"

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiinnnzzzZ" << std::endl;
}

Zombie::Zombie( std::string name){
    this->name = name;
}

void Zombie::setName(std::string name){
    this->name = name;
}
Zombie::Zombie(){}

Zombie::~Zombie(){
    std::cout << this->name << std::endl;
}