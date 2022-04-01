// main function that tests makeSound function for  class animal and  dog and cat with pointers pointing on Animal and print each of their type
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *animal_array[2];
    animal_array[0] = new Dog("dog");   
    animal_array[1] = new Cat("cat");
    for (int i = 0; i < 2; i++)
    {
        animal_array[i]->makeSound();
        delete animal_array[i];
    }
    return 0;
}

