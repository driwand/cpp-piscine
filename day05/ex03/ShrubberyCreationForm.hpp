#ifndef SHRUBBERY_CLASS_HPP
# define SHRUBBERY_CLASS_HPP
# include <iostream>
# include "Form.hpp"
# define GRADE_TO_SIGN_SHRUB 145
# define GRADE_TO_EXECUTE_SHRUB 137

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cp);
		~ShrubberyCreationForm();

		void action() const;

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &cp);
	private:
		std::string target;
};

#endif
