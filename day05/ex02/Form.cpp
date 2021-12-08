#include "Form.hpp"

Form::Form() : _signed(false), _signGrade(GRADE_TO_SIGN), _executeGrade(GRADE_TO_EXECUTE) {
	if (GRADE_TO_SIGN > 150 || GRADE_TO_EXECUTE > 150) throw GradeTooLowException();
	if (GRADE_TO_SIGN < 1 || GRADE_TO_EXECUTE < 1) throw GradeTooHighException();
}

Form::Form(std::string name) : _name(name), _signed(false), _signGrade(GRADE_TO_SIGN), _executeGrade(GRADE_TO_EXECUTE) {
	if (GRADE_TO_SIGN > 150 || GRADE_TO_EXECUTE > 150) throw GradeTooLowException();
	if (GRADE_TO_SIGN < 1 || GRADE_TO_EXECUTE < 1) throw GradeTooHighException();
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _signGrade(gradeSign), _executeGrade(gradeExecute) {
	if (gradeSign < 1) {
		throw GradeTooHighException();
	} else if (gradeSign > 150) {
		throw GradeTooLowException();
	}
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
	return "Bureaucrat's grade is not enough to sign this form.";
}

const char *Form::GradeTooHighException::what() const throw () {
	return "Bureaucrat's grade too high to sign this form.";
}

const char *Form::FormNotSigned::what() const throw () {
	return "Form not signed.";
}

const char *Form::GradeExecuteLowException::what() const throw() {
	return "Grade too low to execute form.";
}

void Form::beSigned(Bureaucrat bur) {
	if (bur.getGrade() > this->getSignGrade()) throw GradeTooLowException();
	if (bur.getGrade() < 1) throw GradeTooHighException();
	_signed = true;
}

void Form::execute(Bureaucrat const &executor) const {
	if (!this->isSigned()) throw FormNotSigned();
	if (executor.getGrade() > this->getExecuteGrade()) throw GradeExecuteLowException();
	this->action();
}

std::ostream &operator<<(std::ostream &o, Form const &form) {
	std::string formStat = (form.isSigned()) ? "signed" : "not signed";
	return o << "The form " << form.getName() << " is " << formStat <<
		". The required grades to sign and execute a form are sequentially " << form.getSignGrade() << " and " << form.getExecuteGrade() << ".\n";
}
