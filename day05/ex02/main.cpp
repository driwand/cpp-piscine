#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	try {
		Bureaucrat bur("bur1");
		bur.setGrade(137);

		ShrubberyCreationForm shrub("home");
		bur.signForm(shrub);
		shrub.execute(bur);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
