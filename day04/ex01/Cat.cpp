#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default constructor of Cat called\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &cp) {
	std::cout << "Copy constructor of Cat called\n";
	this->brain = NULL;
	*this = cp;
}

Cat::~Cat(void) {
	std::cout << "Destructor of Cat called\n";
	delete this->brain;
}

Cat& Cat::operator=(Cat const &cp) {
	if (this != &cp) {
		this->type = cp.type;
		delete this->brain;
		this->brain = new Brain();
		*this->brain = *cp.brain;
	}
	return *this;
}

std::string Cat::getType(void) const {
	return this->type;	
}

void Cat::makeSound(void) const {
	std::cout << "Miaowwww\n";
}

void Cat::printIdea(void) {
	std::cout << brain->getIdea() << std::endl;
}

void Cat::setIdea(std::string idea) {
	brain->setIdea(idea);
}
