#include "Form.hpp"

Form::Form() : _signed(false), _signGrade(GRADE_TO_SIGN), _executeGrade(GRADE_TO_EXECUTE) {
	if (GRADE_TO_SIGN > 150 || GRADE_TO_EXECUTE > 150) throw GradeTooLowException();
	if (GRADE_TO_SIGN < 1 || GRADE_TO_EXECUTE < 1) throw GradeTooHighException();
}

Form::Form(std::string name) : _name(name), _signed(false), _signGrade(GRADE_TO_SIGN), _executeGrade(GRADE_TO_EXECUTE) {
	if (GRADE_TO_SIGN > 150 || GRADE_TO_EXECUTE > 150) throw GradeTooLowException();
	if (GRADE_TO_SIGN < 1 || GRADE_TO_EXECUTE < 1) throw GradeTooHighException();
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _signGrade(gradeSign), _executeGrade(gradeExec) {
	if (gradeSign > 150 || gradeExec > 150) throw GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1) throw GradeTooHighException();
}

Form::Form(Form const &cp) : _name(cp.getName()), _signed(cp.isSigned()), _signGrade(cp.getSignGrade()), _executeGrade(cp.getExecuteGrade()) {
	*this = cp;
}

Form::~Form() {

}

Form &Form::operator=(Form const &cp) {
	(void)cp;
	return *this;
}

std::string Form::getName() const {
	return this->_name;
}

int Form::getExecuteGrade() const {
	return this->_executeGrade;
}

int Form::getSignGrade() const {
	return this->_signGrade;
}

bool Form::isSigned() const {
	return (this->_signed) ? true : false;
}

const char *Form::GradeTooLowException::what() const throw () {
	return "Grade too low.";
}

const char *Form::GradeTooHighException::what() const throw () {
	return "Grade too high.";
}

void Form::beSigned(Bureaucrat bur) {
	if (bur.getGrade() > this->_signGrade) throw GradeTooLowException();
	if (bur.getGrade() < 1) throw GradeTooHighException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &form) {
	std::string formStat = (form.isSigned()) ? "signed" : "not signed";
	return o << "The form " << form.getName() << " is " << formStat <<
		". The required grades to sign and execute a form are sequentially " << form.getSignGrade() << " and " << form.getExecuteGrade() << ".\n";
}
