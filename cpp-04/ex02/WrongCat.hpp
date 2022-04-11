#if !defined(WRONGCAT_HPP)
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& c);
        WrongCat& operator=(const WrongCat& c);
        ~WrongCat();
        WrongCat(std::string type);
        void    makeSound();
};

#endif // CAT_HPP