#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i <= 4; i++) {
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &cp) {
	*this = cp;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &cp) {
	if (this != &cp) {
		for (int i = 0; i < 4; i++) {
			delete this->materias[i];
			materias[i] = NULL;
		}
		for (int i = 0; i < 4; i++) {
			if (cp.materias[i]) {
				this->materias[i] = cp.materias[i]->clone();
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i]) {
			delete this->materias[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (!materia) return;
	for (int i = 0; i < 4; i++) {
		if (!this->materias[i]) {
			this->materias[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
        if (this->materias[i] != NULL && type == this->materias[i]->getType()) {
            return this->materias[i]->clone();
        }
    }
    return NULL;
}
