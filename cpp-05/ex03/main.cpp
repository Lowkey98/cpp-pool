
#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
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

    // try
    // {
    //     ShrubberyCreationForm s1("gish");
    //     s1.beSigned(Bureaucrat("Bob", 147));
    //     s1.execute(Bureaucrat("Bob", 136));
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // try
    // {
    //     Bureaucrat b1("Bob", 1);
    //     // print grade 
    //     std::cout << b1 << std::endl;
    //     PresidentialPardonForm s1("Tree");
    //     b1.signForm(s1);
    //     b1.executeForm(s1);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    try
    {
        Intern a;
        AForm * a_ptr = a.makeForm("presidenftial pardon", "liza");
        a_ptr->beSigned(Bureaucrat("Bob", 1));
        a_ptr->execute(Bureaucrat("Bob", 1));
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}