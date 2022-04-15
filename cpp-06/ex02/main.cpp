#include "Base.hpp"
#include <stdlib.h>

Base *generate(void)
{
    srand(time(NULL));
    int n = rand() % 3;
    if (n == 0)
        return new A;
    else if (n == 1)
        return new B;
    else
        return new C;
}
void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "actual type of pointer is A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "actual type of pointer is B" << std::endl;
    else
        std::cout << "actual type of pointer is C" << std::endl;
}
void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "actual type of reference is A" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "actual type of reference is B" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "actual type of reference is C" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    
    
    
    
}


int main()
{
    Base *p = generate();
    Base &r = *p;
    identify(r);
    return 0;
}