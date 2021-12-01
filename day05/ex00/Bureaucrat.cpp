#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name) {
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cp) : _name(cp.getName()) {
	*this = cp;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &cp) {
	if (this != &cp) {
		this->_grade = cp._grade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bur) {
	return o << bur.getName() << ", bureaucrat grade is " << bur.getGrade() << ".\n";
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::setGrade(int grade) {
	if (grade > 150) throw GradeTooLowException();
	if (grade < 1) throw GradeTooHighException();
	this->_grade = grade;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

void Bureaucrat::decreaseGrade() {
	if (_grade + 1 > 150) throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::increaseGrade() {
	if (_grade - 1 < 1) throw GradeTooHighException();
	this->_grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw () {
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
	return "grade too low";
}
