#if !defined(WRONGANIMAL_HPP)
#define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& a);
        WrongAnimal& operator=(const WrongAnimal& a);
        virtual ~WrongAnimal();
        std::string getType();
        void makeSound();
    protected:
        std::string type;
};

#endif // WRONGANIMAL_HPP