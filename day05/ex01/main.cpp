#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat bur("bur1");
		bur.setGrade(4);
		Form form1("form1");
		std::cout << form1;
		form1.beSigned(bur);
		std::cout << form1;
		bur.signForm(form1);
		bur.decreaseGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
