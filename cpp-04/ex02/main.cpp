#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    AAnimal *a = new Dog();
    a->makeSound();
    delete a;
    AAnimal A;
    return 0;
}

