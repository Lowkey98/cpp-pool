#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->b_ptr = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& d)
{
	*this = d;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& d)
{
	std::cout << "Dog copy assignment operator" << std::endl;
	this->type = d.type;
	*(this->b_ptr) = *(d.b_ptr);
	return *this;
}

Dog::~Dog()
{
	delete this->b_ptr;
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Woof" << std::endl;
}