#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "Default constructor of ScavTrap called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Name constructor of ScavTrap called\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &cp) {
	std::cout << "Copy constructor of ScavTrap called\n";
	*this = cp;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructor of ScavTrap called\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap const &cp) {
    std::cout << "Assignation operator of ScavTrap called\n";
	if (this != &cp) {
		this->name = cp.name;
		this->hitPoints = cp.hitPoints;
		this->energyPoints = cp.energyPoints;
		this->attackDamage = cp.attackDamage;
	}
    return *this;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->name << " has entered the Gate keeper mode\n";
}
