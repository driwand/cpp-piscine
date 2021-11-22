#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "Default constructor of WrongCat called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cp) {
	std::cout << "Copy constructor of WrongCat called\n";
	*this = cp;
}

WrongCat::~WrongCat(void) {
	std::cout << "Destructor of WrongAminal called\n";
}

WrongCat& WrongCat::operator=(WrongCat const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}

std::string WrongCat::getType(void) const {
	return this->type;	
}

void WrongCat::makeSound(void) const {
	std::cout << "Miaowwww\n";
}
