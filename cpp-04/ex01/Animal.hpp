#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP
#include <iostream>
class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& a);
        Animal& operator=(const Animal& a);
        virtual ~Animal();
        std::string getType();
        virtual void makeSound();
};

#endif // ANIMAL_HPP