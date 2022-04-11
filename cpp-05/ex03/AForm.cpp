// #include "AForm.hpp"
#include "AForm.hpp"
// Default constructor
AForm::AForm() : _name(""), _signed(false), _grade_to_sign(0), _grade_to_exec(0)
{
	std::cout << "AForm default constructor called" << std::endl;
}

// Copy constructor
AForm::AForm(AForm const &f) : _name(f._name), _grade_to_sign(f._grade_to_sign), _grade_to_exec(f._grade_to_exec)
{
	this->_signed = f._signed;
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(std::string const &name, int const grade_to_sign, int const grade_to_execute) : _name(name),_grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_execute)
{
	this->_signed = false;
	if (grade_to_sign < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_sign > 150)
		throw AForm::GradeTooLowException();
	if (grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_execute > 150)
		throw AForm::GradeTooLowException();
	std::cout << "Parameter constructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &f)
{
	this->_signed = f._signed;
	return (*this);
}
// Destructor
AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}
// getter for grade
int AForm::getGradeToSign() const
{
	return this->_grade_to_sign;
}
int AForm::getGradeToExec() const
{
	return this->_grade_to_exec;
}
// getter for signed
bool AForm::getSigned() const
{
	return this->_signed;
}
// getter for name
std::string AForm::getName() const
{
	return this->_name;
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char * AForm::NotSignedException::what() const throw()
{
    return ("Form not signed");
}

void    AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_grade_to_sign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, AForm const &f)
{
	o << "_name: " << f.getName() << std::endl;
	o << "_signed: " << f.getSigned() << std::endl;
	o << "_grade_to_sign: " << f.getGradeToSign() << std::endl;
	o << "_grade_to_exec: " << f.getGradeToExec();
	return (o);
}

void    AForm::checkRequirements(int b_grade) const
{
    if (this->_signed == false)
        throw AForm::NotSignedException();
    if (b_grade > this->_grade_to_exec)
        throw AForm::GradeTooLowException();
}

