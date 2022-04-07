#include "Cat.hpp"
#include "Animal.hpp"
Cat::Cat()
{
    this->b_ptr = new Brain();
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& c)
{
    this->b_ptr = new Brain();
    *this = c;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& c)
{
    this->type = c.type;
    *(this->b_ptr) = *(c.b_ptr);
    std::cout << "Cat copy assignment operator" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete this->b_ptr;
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
} 
