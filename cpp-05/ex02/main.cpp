
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
    //         ShrubberyCreationForm p1("liza");
    //         p1.beSigned(Bureaucrat("Bob", 145));
    //         p1.execute(Bureaucrat("Bob", 137));
    //     }catch(std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    // std::cout << "==================================================" << std::endl;
    // {
    //     try
    //     {
    //         RobotomyRequestForm p1("liza");
    //         p1.beSigned(Bureaucrat("Bob", 72));
    //         p1.execute(Bureaucrat("Bob", 46));
    //     }catch(std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    std::cout << "==================================================" << std::endl;
    // {

        // try
        // {
        //     PresidentialPardonForm p1("liza");
        //     p1.beSigned(Bureaucrat("Bob", 25));
        //     p1.execute(Bureaucrat("Bob", 5));
        // }catch(std::exception &e)
        // {
        //     std::cout << e.what() << std::endl;
        // }
            RobotomyRequestForm p1("d");
            p1.beSigned(Bureaucrat("aaa", 1));
            Bureaucrat  b1("liza", 1);
            b1.executeForm(p1);
    // }  

    return 0;
}
