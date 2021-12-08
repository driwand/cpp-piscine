#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat bur("bur1", 149);
		Bureaucrat f = bur;
		std::cout << f.getName() << std::endl;
		bur.decreaseGrade();
		std::cout << bur;
		Bureaucrat bur2("bur2", 2);
		bur2.increaseGrade();
		std::cout << bur2;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
