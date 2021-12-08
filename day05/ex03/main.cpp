#include "Intern.hpp"

int main() {
	try {
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat bur("te", 1);
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
