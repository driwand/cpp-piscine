#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Default constructor of Brain called\n";
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
