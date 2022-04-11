#if !defined(ROBOTMYREQUESTFORM_HPP)
#define ROBOTMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &);
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string);
        void execute(Bureaucrat const &) const;
    private:
        std::string _target;        
};

#endif // ROBOTMYREQUESTFORM_HPP