#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include<iostream>
// Default Constructor
Intern::Intern()
{
	std::cout << "Intern Default Contrustor" << std::endl;
}
// Copy Constructor
Intern::Intern(Intern const &i)
{
	std::cout << "Intern Copy Contrustor" << std::endl;
	*this = i;
}
// Assignation Operator
Intern &Intern::operator=(Intern const &i)
{
	std::cout << "Intern Assignement Operator" << std::endl;
	(void)i;
	return *this;
}

// Destructor
Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;
}


AForm*  Intern::makeRobotomyRequestForm(std::string  const &target)
{
	std::cout << "Intern makeRobotomyRequestForm" << std::endl;
	return new RobotomyRequestForm(target);
}

AForm*  Intern::makeShrubberyCreationForm(std::string  const &target)
{
	std::cout << "Intern makeShrubberyCreationForm" << std::endl;
	return new ShrubberyCreationForm(target);
}

AForm* Intern::makePresidentialPardonForm(std::string  const &target)
{
	std::cout << "Intern makePresidentialPardonForm" << std::endl;
	return new PresidentialPardonForm(target);
}

const char * Intern::FormNotFoundException::what() const throw()
{
    return ("Form Not Found");
}

AForm*   Intern::makeForm(std::string const &form, std::string const &target)
{
	std::string Forms[3] = {"robot request", "shrubbery creation", "presidential pardon"};
	AForm *(Intern::*Forms_func[3])(std::string const &target) = {&Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm, &Intern::makePresidentialPardonForm};
	// 3/ array of functions
	for (int i = 0; i < 3; i++)
	{
		if (Forms[i] == form)
		{
            std::cout << "Intern creates " << Forms[i] << " Form" << std::endl;
			return ((this->*Forms_func[i])(target));
		}
	}
    throw FormNotFoundException();
	return (NULL);
}