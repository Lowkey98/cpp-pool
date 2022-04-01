#include "Dog.hpp"
#include "Animal.hpp"
// Class Dog
Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor" << std::endl;
}
// constructor with parameter
Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog parameter constructor" << std::endl;
}
// copy constructor
Dog::Dog(const Dog& d) : Animal(d)
{
    std::cout << "Dog copy constructor" << std::endl;
}
// copy assignment operator
Dog& Dog::operator=(const Dog& d)
{
    std::cout << "Dog copy assignment operator" << std::endl;
    this->type = d.type;
    return *this;
}
// destructor
Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Woof" << std::endl;
}