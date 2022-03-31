// main function that tests makeSound function for  class animal and  dog and cat with pointers pointing on Animal and print each of their type
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return 0;
}

