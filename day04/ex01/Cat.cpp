#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default constructor of Cat called\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &cp) {
	std::cout << "Copy constructor of Cat called\n";
	*this = cp;
}

Cat::~Cat(void) {
	std::cout << "Destructor of Aminal called\n";
	delete this->brain;
}

Cat& Cat::operator=(Cat const &cp) {
	if (this != &cp) {
		
		this->type = cp.type;
	}
	return *this;
}

std::string Cat::getType(void) const {
	return this->type;	
}

void Cat::makeSound(void) const {
	std::cout << "Miaowwww\n";
}
