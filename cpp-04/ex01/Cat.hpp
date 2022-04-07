#if !defined(CAT_HPP)
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& c);
        Cat& operator=(const Cat& c);
        ~Cat();
        void    makeSound();
    private:
        Brain *b_ptr;
};

#endif // CAT_HPP



