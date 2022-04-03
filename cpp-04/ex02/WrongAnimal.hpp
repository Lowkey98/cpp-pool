#if !defined(WRONGANIMAL_HPP)
#define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& a);
        WrongAnimal& operator=(const WrongAnimal& a);
        ~WrongAnimal();
        WrongAnimal(std::string type);
        std::string getType();
        virtual void makeSound();
};

#endif // WRONGANIMAL_HPP