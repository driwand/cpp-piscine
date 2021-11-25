#include "MateriaSource.hpp"

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
		if (this->materias[i]) {
			this->materias[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
        if (this->materias[i] != NULL) continue;
        if (type == this->materias[i]->getType()) {
            return this->materias[i]->clone();
        }
    }
    return NULL;
}
