#include "Cat.hpp"
#include "Animal.hpp"
// Class Cat
Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor" << std::endl;
}
// copy constructor
Cat::Cat(const Cat& c) : Animal(c)
{
    std::cout << "Cat copy constructor" << std::endl;
}
// constructor with parameter
Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat parameter constructor" << std::endl;
}

// copy assignment operator
Cat& Cat::operator=(const Cat& c)
{
    // Animal::operator=(c);
    this->type = c.type;
    std::cout << "Cat copy assignment operator" << std::endl;
    return *this;
}
// // destructor
Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
} 
