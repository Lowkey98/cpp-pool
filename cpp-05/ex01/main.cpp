

#include <iostream>
#include "Bureaucrat.hpp"
int main()
{
    {
        try
        {
            Form f1("f1", 50, 150);
            std::cout << f1 << std::endl;
            // f1.beSigned(Bureaucrat("b1", 60));
            f1.beSigned(Bureaucrat("b1", 10));
            Bureaucrat b2("b2", 50);
            b2.signForm(f1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}
