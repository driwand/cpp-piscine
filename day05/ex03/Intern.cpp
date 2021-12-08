#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(Intern const &cp) {
	*this = cp;
}

Intern::~Intern() {

}

Form *makeShrub(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *makeRobot(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *makePresidential(std::string target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string target) {
	int index = 0;
	std::string	forms[3] = { "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm" };
	Form* (*ptrForms[3]) (std::string) = {
		&makeShrub,
		&makeRobot,
		&makePresidential
	};

	for (index = 0; index < 3; index++)
    {
        if (formName == forms[index]) break;
    }

	if (index > 2) {
		std::cout << "Unknown requested form.\n";
		return NULL;
	}
	std::cout << "Intern creates " << formName << std::endl;
	return ptrForms[index](target);
}

Intern &Intern::operator=(Intern const &cp) {
	(void)cp;
	return *this;
}
