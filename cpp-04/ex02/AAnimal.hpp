#if !defined(AANIMAL_HPP)
#define AANIMAL_HPP
#include <iostream>
class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal& a);
        AAnimal& operator=(const AAnimal& a);
        virtual ~AAnimal();
        std::string getType();
        virtual void makeSound() = 0;
};

#endif // AANIMAL_HPP