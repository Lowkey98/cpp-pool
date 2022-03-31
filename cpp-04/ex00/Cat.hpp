#if !defined(CAT_HPP)
#define CAT_HPP

#include "Animal.hpp"
class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& c);
        Cat& operator=(const Cat& c);
        ~Cat();
        Cat(std::string type);
        void    makeSound();
};

#endif // CAT_HPP


