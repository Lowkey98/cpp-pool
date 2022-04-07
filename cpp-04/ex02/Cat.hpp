#if !defined(CAT_HPP)
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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



