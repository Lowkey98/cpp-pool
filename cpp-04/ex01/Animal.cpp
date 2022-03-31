#include "Animal.hpp"

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal type constructor" << std::endl;
}

Animal::Animal(const Animal& a)
{
    this->type = a.type;
    std::cout << "Animal copy constructor" << std::endl;
}

std::string Animal::getType()
{
    return this->type;
}


Animal& Animal::operator=(const Animal& a)
{
    this->type = a.type;
    return *this;
}

Animal::Animal()
{
    std::cout << "Animal default constructor" << std::endl;
}
// Animal makeSound function
void Animal::makeSound()
{
    std::cout << "Animal makeSound function" << std::endl;
}

// Animal destructor
Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}