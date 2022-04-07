#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy constructor" << std::endl;
	*this = other;
}

// Copy assignment operator
Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain Copy assignment operator" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}