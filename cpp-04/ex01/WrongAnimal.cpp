#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal type constructor" << std::endl;
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

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}
// WrongAnimal makeSound function
void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal makeSound function" << std::endl;
}

// WrongAnimal destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}