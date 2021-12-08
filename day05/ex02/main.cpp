#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		Bureaucrat bur("bur1", 5);

		ShrubberyCreationForm shrub("home");
		bur.signForm(shrub);
		bur.executeForm(shrub);

		RobotomyRequestForm robot("Rbot");
		bur.signForm(robot);
		robot.execute(bur);

		PresidentialPardonForm president("citizen");
		bur.signForm(president);
		president.execute(bur);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
