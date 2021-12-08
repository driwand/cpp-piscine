#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &cp);
		~Intern();

		Form *makeForm(std::string formName, std::string target);

		Intern &operator=(Intern const &cp);
};

#endif
