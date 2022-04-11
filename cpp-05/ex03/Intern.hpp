#include"AForm.hpp"
#include<iostream>
class Intern
{
	public:
		Intern();
		Intern(Intern const &i);
		Intern &operator=(Intern const &i);
		~Intern();
		AForm	*makeRobotomyRequestForm(std::string  const &target);
		AForm	*makeShrubberyCreationForm(std::string  const &target);
		AForm	*makePresidentialPardonForm(std::string  const &target);
		AForm	*makeForm(std::string const &form, std::string  const &target);
	
	class FormNotFoundException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};