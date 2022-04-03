#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& d);
        Dog& operator=(const Dog& d);
        ~Dog();
        Dog(std::string type);
        void makeSound();
    private:
        Brain *b_ptr;
};

#endif