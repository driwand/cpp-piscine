#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bur("bur1");

	Bureaucrat f = bur;
	std::cout << f.getName() << std::endl;

	try {
		bur.setGrade(151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << bur;
	try {
		bur.decreaseGrade();
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat bur2("bur2");
	bur2.setGrade(1);
	std::cout << bur2;
	try {
		bur2.increaseGrade();
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
