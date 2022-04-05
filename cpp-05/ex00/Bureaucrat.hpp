#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &b1);
		Bureaucrat &operator=(Bureaucrat const &b1);
		~Bureaucrat();

		Bureaucrat(std::string const &name, int grade);
		std::string	getName() const;
		int		getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	private:
		std::string const _name;
		int _grade;
};