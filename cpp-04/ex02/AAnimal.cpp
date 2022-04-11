#include "AAnimal.hpp"


AAnimal::AAnimal(const AAnimal& a)
{
    this->type = a.type;
    std::cout << "AAnimal copy constructor" << std::endl;
}

std::string AAnimal::getType()
{
    return this->type;
}

AAnimal& AAnimal::operator=(const AAnimal& a)
{
    this->type = a.type;
    return *this;
}

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor" << std::endl;
}
void AAnimal::makeSound()
{
    std::cout << "AAnimal makeSound function" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}