#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Default constructor of Animal called\n";
}

Animal::Animal(Animal const &cp) {
	std::cout << "Copy constructor of Animal called\n";
	*this = cp;
}

Animal::~Animal(void) {
	std::cout << "Destructor of Aminal called\n";
}

Animal& Animal::operator=(Animal const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}

std::string Animal::getType(void) const {
	return this->type;
}
