#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Default constructor of Dog called\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &cp) {
	std::cout << "Copy constructor of Dog called\n";
	*this = cp;
}

Dog::~Dog(void) {
	std::cout << "Destructor of Dog called\n";
	delete this->brain;
}

Dog& Dog::operator=(Dog const &cp) {
	if (this != &cp) {
		this->type = cp.type;
		this->brain = new Brain();
	}
	return *this;
}

std::string Dog::getType(void) const {
	return this->type;	
}

void Dog::makeSound(void) const {
	std::cout << "Bark Bark\n";
}
