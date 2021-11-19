#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "Default constructor of FragTrap called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Name constructor of FragTrap called\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &cp) {
	std::cout << "Copy constructor of FragTrap called\n";
	*this = cp;
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructor of FragTrap called\n";
}

FragTrap& FragTrap::operator=(FragTrap const &cp) {
    std::cout << "Assignation operator of FragTrap called\n";
	if (this != &cp) {
		this->name = cp.name;
		this->hitPoints = cp.hitPoints;
		this->energyPoints = cp.energyPoints;
		this->attackDamage = cp.attackDamage;
	}
    return *this;
}

void FragTrap::attack(std::string const &target) {
	std::cout << "FragTrap " << name << " attack " << target;
	std::cout << ", causing " << attackDamage << " points of damage!\n";
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap High Five !!\n";
}
