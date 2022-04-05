#include "Cat.hpp"
#include "Animal.hpp"
// Class Cat
Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}
// copy constructor
Cat::Cat(const Cat& c)
{
    *this = c;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& c)
{
    this->type = c.type;
    std::cout << "Cat copy assignment operator" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
} 
