#include <iostream>

class Form
{
	public:
		// constructors
		Form();
		Form(std::string const &name, int const grade_to_sign, int const grade_to_execute);
		Form(Form const &f);
		// assignment operator
		Form &operator=(Form const &f);
		// getters
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getSigned() const;


	private:
		std::string const   _name;
		bool                _signed;
		const int			_grade_to_sign;
		const int			_grade_to_exec;
};
// << operator
std::ostream &operator<<(std::ostream &out, Form const &f);