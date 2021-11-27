#include "Character.hpp"

Character::Character() {
	
}

Character::Character(std::string name) {
	this->name = name;
}

Character::Character(Character const &cp) {
	*this = cp;
}

Character::~Character() {
	
}

Character &Character::operator=(Character const &cp) {
	if (this != &cp) {
		this->name = cp.name;
		for (int i = 0; i < 4; i++) {
			delete this->matria[i];
			this->matria[i] = NULL;
		}
		for (int i = 0; i < 4; i++) {
			if (cp.matria[i] != NULL) {
				this->matria[i] = cp.matria[i]->clone();
			}	
		}
	}
	return *this;
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
	if ((idx >= 0 && idx < 4) && this->matria[idx]) {
		this->matria[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if ((idx >= 0 && idx < 4) && this->matria[idx]) {
		this->matria[idx]->use(target);
	}
}
