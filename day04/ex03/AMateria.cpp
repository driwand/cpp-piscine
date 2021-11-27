#include "AMateria.hpp"

AMateria::AMateria(void) {

}

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

AMateria::AMateria(AMateria const &cp) {
	*this = cp;
}

AMateria::~AMateria() {

}

std::string const &AMateria::getType() const {
	return this->type;
}

AMateria &AMateria::operator=(AMateria const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}

void AMateria::use(ICharacter& target) {
	std::cout << "Materia use " << target.getName() << std::endl;
}
