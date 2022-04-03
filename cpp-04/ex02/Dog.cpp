#include "Dog.hpp"
#include "Animal.hpp"
// Class Dog
Dog::Dog() : Animal("Dog")
{
    // brain
    this->b_ptr = new Brain();
    std::cout << "Dog default constructor" << std::endl;
}
// constructor with parameter
Dog::Dog(std::string type) : Animal(type)
{
    this->b_ptr = new Brain();

    std::cout << "Dog parameter constructor" << std::endl;
}
// copy constructor
Dog::Dog(const Dog& d) : Animal(d)
{
    this->b_ptr = d.b_ptr;
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