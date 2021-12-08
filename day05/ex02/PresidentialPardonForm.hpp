#ifndef PRESIDENTIALPARDON_CLASS_HPP
# define PRESIDENTIALPARDON_CLASS_HPP
# include <iostream>
# include "Form.hpp"
# define GRADE_TO_SIGN_PRESIDENTIAL_PARDON 25
# define GRADE_TO_EXECUTE_PRESIDENTIAL_PARDON 5

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &cp);
		~PresidentialPardonForm();

		void action() const;

		PresidentialPardonForm &operator=(PresidentialPardonForm const &cp);
	private:
		std::string target;
};

#endif
