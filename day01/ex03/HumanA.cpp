#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
	this->name = name;
}

void HumanA::attack(void) {
	std::cout << this->name << " " << "attacks with his " << this->_weapon.getType() << std::endl;
}
