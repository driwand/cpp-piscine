#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robot", GRADE_TO_SIGN_ROBOT, GRADE_TO_EXECUTE_ROBOT) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robot", GRADE_TO_SIGN_ROBOT, GRADE_TO_EXECUTE_ROBOT) {
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cp) {
	*this = cp;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::action() const {
	srand(time(0));
	if (rand() % 2) {
		std::cout << "* drilling noise * " << this->target << " has been robotomized successfully!\n";
	} else {
		std::cout << "Failed to robotomize\n";
	}
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &cp) {
	this->target = cp.target;
	return *this;
}
