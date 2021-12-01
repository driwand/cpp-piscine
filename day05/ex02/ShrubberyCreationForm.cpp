#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cp) {
	*this = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cp) {
	(void)cp;
	return *this;
}
