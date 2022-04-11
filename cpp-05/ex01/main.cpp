

#include <iostream>
#include "Bureaucrat.hpp"
int main()
{
    {
        try
        {
            // Form b2;
            Form b3("b3", -1, 210);
            std::cout << b3 << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            Form b1;
            // std::cout << b1 << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}
