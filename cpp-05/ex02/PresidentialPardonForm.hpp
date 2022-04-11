#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &src);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        void execute(Bureaucrat const &executor) const;
    private:
        std::string _target;
};

#endif // PRESIDENTIALPARDONFORM_HPP