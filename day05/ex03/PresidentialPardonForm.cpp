#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", GRADE_TO_SIGN_PRESIDENTIAL_PARDON, GRADE_TO_EXECUTE_PRESIDENTIAL_PARDON) {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", GRADE_TO_SIGN_PRESIDENTIAL_PARDON, GRADE_TO_EXECUTE_PRESIDENTIAL_PARDON) {
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cp) {
	*this = cp;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::action() const {
	std::cout << this->target << "  has been pardoned by Zafod Beeblebrox !\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &cp) {
	this->target = cp.target;
	return *this;
}
