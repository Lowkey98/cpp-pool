#include "Animal.hpp"


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
void Animal::makeSound()
{
    std::cout << "Animal makeSound function" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}