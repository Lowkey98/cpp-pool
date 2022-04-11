#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &executor) const;
    private:
        std::string _target;
};
#endif // SHRUBBERYCREATIONFORM_HPP