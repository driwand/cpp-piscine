#include "Cure.hpp"

Cure::Cure(void) {
	this->type = "cure";
}

Cure::Cure(Cure const &cp) {
	*this = cp;
}

Cure::~Cure() {

}

std::string const &Cure::getType() const {
	return this->type;
}

Cure &Cure::operator=(Cure const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}

AMateria *Cure::clone(void) const {
	AMateria *materia = new Cure();
	return materia;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
