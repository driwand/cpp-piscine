#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Default constructor of Dog called\n";
}

Dog::Dog(std::string type) {
	std::cout << "Type constructor of Dog called\n";
}

Dog::Dog(Dog const &cp) {
	std::cout << "Copy constructor of Dog called\n";
	*this = cp;
}

Dog::~Dog(void) {
	std::cout << "Destructor of Aminal called\n";
}

Dog& Dog::operator=(Dog const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}
