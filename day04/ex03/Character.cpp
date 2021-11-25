#include "Character.hpp"

Character::~Character() {
	
}

std::string const &Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m) {
	if (!m) return;
	for (int i = 0; i < 4; i++) {
		if (!this->matria[i]) {
			matria[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	this->matria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (this->matria[idx]) {
		this->matria[idx]->use(target);
	}
}
