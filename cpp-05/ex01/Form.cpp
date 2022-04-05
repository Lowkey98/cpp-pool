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

// assignment operator
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
