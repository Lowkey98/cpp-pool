#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
// Class WrongCat
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor" << std::endl;
}
// copy constructor
WrongCat::WrongCat(const WrongCat& c) : WrongAnimal(c)
{
    std::cout << "WrongCat copy constructor" << std::endl;
}
// constructor with parameter
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat parameter constructor" << std::endl;
}

// copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& c)
{
    // WrongAnimal::operator=(c);
    this->type = c.type;
    std::cout << "WrongCat copy assignment operator" << std::endl;
    return *this;
}
// // destructor
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound()
{
    std::cout << "Wrong Meow" << std::endl;
} 
