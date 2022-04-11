#if !defined(AFORM_HPP)
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;
class AForm
{
	public:
		// constructors

		AForm();
		AForm(std::string const &name, int const grade_to_sign, int const grade_to_execute);
		AForm(AForm const &f);
		virtual ~AForm();
		// assignment operator
		AForm &operator=(AForm const &f);
		// getters
		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		bool		getSigned() const;
		void		beSigned(Bureaucrat const &b);
        void        checkRequirements(int b_grade) const;
		virtual void execute(Bureaucrat const &executor) const = 0;
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

    class NotSignedException : public std::exception
    {
        public:
            const char *what() const throw();
    };

};
// << operator
std::ostream &operator<<(std::ostream &out, AForm const &f);
#endif // AFORM