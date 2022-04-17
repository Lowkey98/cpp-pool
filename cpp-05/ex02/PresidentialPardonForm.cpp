#include "PresidentialPardonForm.hpp"
#include <iostream>

// default constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Default Contructor" << std::endl;
}

// copy constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ppf)  : AForm(ppf)
{
    *this = ppf;
    std::cout << "PresidentialPardonForm Copy Contructor" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &ppf)
{
    this->_target = ppf._target;
    std::cout << "PresidentialPardonForm Copy Assignment" << std::endl;
    return *this;
}
// destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor" << std::endl;
}
// parameter
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
    std::cout << "PresidentialPardonForm Parameter Contructor" << std::endl;
}
// execute
void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkRequirements(executor.getGrade());
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    (void) executor;
}