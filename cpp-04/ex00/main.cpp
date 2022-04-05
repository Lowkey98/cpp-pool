// main function that tests makeSound function for  class animal and  dog and cat with pointers pointing on Animal and print each of their type
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include <stdlib.h>
#include <iostream>

int main()
{
    {
        Animal animal;
        std::cout << animal.getType() << std::endl;
        Animal *ptr_cat = new Cat();
        std::cout << ptr_cat->getType() << std::endl;
        Animal *ptr_dog = new Dog();
        std::cout << ptr_dog->getType() << std::endl;
        animal.makeSound();
        ptr_cat->makeSound();
        ptr_dog->makeSound();
        delete ptr_cat;
        delete ptr_dog;
    }
    WrongAnimal *wr_prt_cat = new WrongCat();
    wr_prt_cat->makeSound();
    return 0;
}

