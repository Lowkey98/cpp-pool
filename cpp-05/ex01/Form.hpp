#if !defined(FORM_HPP)
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	public:
		// constructors

		Form();
		Form(std::string const &name, int const grade_to_sign, int const grade_to_execute);
		Form(Form const &f);
		// assignment operator
		Form &operator=(Form const &f);
		// getters
		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		bool		getSigned() const;
		void		beSigned(Bureaucrat const &b);
	private:
		std::string const   _name;
		bool                _signed;
		const int			_grade_to_sign;
		const int			_grade_to_exec;


	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};

};
// << operator
std::ostream &operator<<(std::ostream &out, Form const &f);
#endif // FORM