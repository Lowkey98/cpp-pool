#include "Brain.hpp"

// Constructor
Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
}
// Copy constructor
Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copy constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
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

// desturctor
Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}