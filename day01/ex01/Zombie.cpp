#include "Zombie.hpp"

void Zombie::announce(void) {
	std::cout << this->name << " BraiiiiiiinnnzzzZ\n";
}

void Zombie::setName(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " died\n";
}

Zombie::Zombie(void) {
	std::cout << "Zombie spawned\n";
}

Zombie::Zombie(std::string name) {
	this->setName(name);
}
