
#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
    // {
    //     try
    //     {
    //         PresidentialPardonForm p1("liza");
    //         p1.execute(Bureaucrat("Bob", 1));
    //     }catch(std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    // {
    //     try
    //     {
    //         PresidentialPardonForm p1("liza");
    //         p1.beSigned(Bureaucrat("Bob", 150));
    //         p1.execute(Bureaucrat("Bob", 4));
    //     }catch(std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    // RobotomyRequestForm r1("liza");
    // r1.beSigned(Bureaucrat("Bob", 150));
    // r1.execute(Bureaucrat("Bob", 4));

    try
    {
        ShrubberyCreationForm s1("gish");
        s1.beSigned(Bureaucrat("Bob", 147));
        s1.execute(Bureaucrat("Bob", 136));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
