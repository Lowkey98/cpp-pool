#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
    this->type = a.type;
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

std::string WrongAnimal::getType()
{
    return this->type;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
    this->type = a.type;
    return *this;
}

void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal makeSound function" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}