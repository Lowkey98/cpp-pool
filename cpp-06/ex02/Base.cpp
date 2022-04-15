#include "Base.hpp"

Base::Base()
{
    std::cout << "Base Constructor" << std::endl;
}

Base::~Base()
{
}

A::A()
{
    std::cout << "A Constructor" << std::endl;
}

A::~A()
{
    std::cout << "A Destructor" << std::endl;
}

B::B()
{
    std::cout << "B Constructor" << std::endl;
}

B::~B()
{
    std::cout << "B Destructor" << std::endl;
}

C::C()
{
    std::cout << "C Constructor" << std::endl;
}

C::~C()
{
    std::cout << "C Destructor" << std::endl;
}