#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bur("bur1");

	try {
		bur.setGrade(4);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Form form1("form1");
	std::cout << form1;

	try {
		form1.beSigned(bur);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << form1;
	bur.signForm(form1);
	try {
		bur.decreaseGrade();
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
