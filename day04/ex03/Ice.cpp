#include "Ice.hpp"

Ice::Ice(void) {
	this->type = "ice";
}

Ice::Ice(Ice const &cp) {
	*this = cp;
}

Ice::~Ice() {

}

std::string const &Ice::getType() const {
	return this->type;
}

Ice &Ice::operator=(Ice const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}

AMateria *Ice::clone(void) const {
	AMateria *materia = new Ice();
	return materia;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
