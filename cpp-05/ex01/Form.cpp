// #include "Form.hpp"
#include "Form.hpp"
// Default constructor
Form::Form() : _name(""), _signed(false), _grade_to_sign(0), _grade_to_exec(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

// Copy constructor
Form::Form(Form const &f) : _name(f._name), _grade_to_sign(f._grade_to_sign), _grade_to_exec(f._grade_to_exec)
{
	this->_signed = f._signed;
	std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string const &name, int const grade_to_sign, int const grade_to_execute) : _name(name),_grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_execute)
{
	this->_signed = false;
	if (grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150)
		throw Form::GradeTooLowException();
	if (grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_execute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Parameter constructor called" << std::endl;
}

Form &Form::operator=(Form const &f)
{
	this->_signed = f._signed;
	return (*this);
}
// getter for grade
int Form::getGradeToSign() const
{
	return this->_grade_to_sign;
}
int Form::getGradeToExec() const
{
	return this->_grade_to_exec;
}
// getter for signed
bool Form::getSigned() const
{
	return this->_signed;
}
// getter for name
std::string Form::getName() const
{
	return this->_name;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void    Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() < this->_grade_to_sign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &f)
{
	o << "_name: " << f.getName() << std::endl;
	o << "_signed: " << f.getSigned() << std::endl;
	o << "_grade_to_sign: " << f.getGradeToSign() << std::endl;
	o << "_grade_to_exec: " << f.getGradeToExec();
	return (o);
}
