#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &scf);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &scf);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &executor) const;
    private:
        std::string _target;
};
#endif // SHRUBBERYCREATIONFORM_HPP