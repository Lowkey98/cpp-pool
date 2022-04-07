#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor" << std::endl;
}
WrongCat::WrongCat(const WrongCat& c)
{
    *this = c;
    std::cout << "WrongCat copy constructor" << std::endl;
}


WrongCat& WrongCat::operator=(const WrongCat& c)
{
    this->type = c.type;
    std::cout << "WrongCat copy assignment operator" << std::endl;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound()
{
    std::cout << "Wrong Meow" << std::endl;
} 
