#include "AForm.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Default Contructor" << std::endl;
}

// copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &scf)  : AForm(scf)
{
    *this = scf;
    std::cout << "ShrubberyCreationForm Copy Contructor" << std::endl;
}
// copy assignment
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &scf)
{
    this->_target = scf._target;
    std::cout << "ShrubberyCreationForm Copy Assignment" << std::endl;
    return *this;
}
// destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}
// parameter
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
    std::cout << "ShrubberyCreationForm Parameter Contructor" << std::endl;
}

void drawTree(const std::string &target)
{
    std::ofstream file;
    file.open(((target) + "_shrubbery").c_str());
    file << "    /\\" << std::endl;
    file << "   /  \\" << std::endl;
    file << "  /    \\" << std::endl;
    file << " /------\\" << std::endl;
    file << "    ||   " << std::endl;

    file.close();
}



void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    checkRequirements(executor.getGrade());
    drawTree(this->_target);
}
