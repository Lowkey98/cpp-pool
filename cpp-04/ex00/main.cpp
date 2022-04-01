// main function that tests makeSound function for  class animal and  dog and cat with pointers pointing on Animal and print each of their type
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

#include <iostream>

int main()
{
    WrongAnimal *a = new WrongAnimal("WrongAnimal");
    a->makeSound();
    std::cout << a->getType() << std::endl;
    Animal *d = new Dog("Dog");
    d->makeSound();
    std::cout << d->getType() << std::endl;
    WrongAnimal *c = new WrongCat("Cat");
    c->makeSound();
    // std::cout << c->getType() << std::endl;
    return 0;
}

