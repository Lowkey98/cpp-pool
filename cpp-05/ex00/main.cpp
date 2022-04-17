

#include <iostream>
#include "Bureaucrat.hpp"
int main()
{
    Bureaucrat a;
    std::cout << a.getGrade() << std::endl;
    a.getGrade();

    {
        try
        {
            Bureaucrat b2("b2", 1500);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << " ============================================== " << std::endl;
    {
        try
        {
            Bureaucrat b1("b1", 1);
            std::cout << b1 << std::endl;
            b1.incrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}
