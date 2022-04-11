#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP
#include <iostream>
class Animal
{
    public:
        Animal();
        Animal(const Animal& a);
        Animal& operator=(const Animal& a);
        virtual ~Animal();
        std::string getType();
        virtual void makeSound();
    protected:
        std::string type;
};

#endif // ANIMAL_HPP