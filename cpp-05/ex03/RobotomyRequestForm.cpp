#include "RobotomyRequestForm.hpp"
#include <iostream>

// default constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Default Contructor" << std::endl;
}

// copy constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rrf)  : AForm(rrf)
{
    *this = rrf;
    std::cout << "RobotomyRequestForm Copy Contructor" << std::endl;
}
// copy assignment
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rrf)
{
    this->_target = rrf._target;
    std::cout << "RobotomyRequestForm Copy Assignment" << std::endl;
    return *this;
}
// destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor" << std::endl;
}
// parameter
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45) ,_target(target)
{
    this->_target = target;
    std::cout << "RobotomyRequestForm Parameter Contructor" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    checkRequirements(executor.getGrade());
    std::cout << "* drilling noises *" << std::endl;
    if ((time(0) % 2) == 0)
       std::cout << "robotomy succeed" << std::endl;
    else
        std::cerr << "robotomy failed" << std::endl;
}