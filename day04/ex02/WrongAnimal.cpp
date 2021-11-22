#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default constructor of WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &cp) {
	std::cout << "Copy constructor of WrongAnimal called\n";
	*this = cp;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor of WrongAminal called\n";
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Sound of WrongAnimal\n";
}
