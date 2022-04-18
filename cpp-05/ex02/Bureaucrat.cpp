#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->_grade = 150;
    std::cout << "Bureaucrat default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const &b1)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = b1;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b1)
{
    std::cout << "Bureaucrat assignment operator called" << std::endl;
    this->_grade = b1._grade;
    return (*this);
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
    std::cout << "Bureaucrat " << this->_name << " constructed with grade " << this->_grade << std::endl;
}
void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}
void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->_name << " destructed" << std::endl;
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}
std::ostream &operator<<(std::ostream &out, Bureaucrat const &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (out);
}

void    Bureaucrat::signForm(AForm &f) const
{
    if (f.getSigned())
        std::cout << this->_name << " couldn't sign " << f.getName() << " because it is already signed" << std::endl;
    else if (this->_grade > f.getGradeToSign())
        std::cout << this->_name << " couldn't sign " << f.getName() << " because grade is too low" << std::endl;
    else
    {
        f.beSigned(*this);
        std::cout << this->_name << " signs " << f.getName() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const &f) const
{
    try
    {
        f.execute(*this);
        std::cout << this->getName() << " executed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}