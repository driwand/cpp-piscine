#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Default constructor of Brain called\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "idea";
	}
}

Brain::Brain(Brain const &cp) {
	std::cout << "Copy constructor of Brain called\n";
	*this = cp;
}

Brain::~Brain(void) {
	std::cout << "Destructor of Brain called\n";
}

Brain& Brain::operator=(Brain const &cp) {
	if (this != &cp) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = cp.ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdea(void) {
	return ideas[0];
}

void Brain::setIdea(std::string idea) {
	ideas[0] = idea;
}
