
#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main()
{
    try
    {
        Intern a;
        AForm * a_ptr = a.makeForm("presidential pardon", "liza");
        a_ptr->beSigned(Bureaucrat("Bob", 1));
        a_ptr->execute(Bureaucrat("Bob", 1));
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}