#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor called\n";
	this->energyPoints = 50;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap name constructor called\n";
	this->name = name;
	this->energyPoints = 50;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cp) {
    std::cout << "DiamondTrap copy constructor called\n";
    *this = cp;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &cp) {
    std::cout << "DiamondTrap assignation operator called\n";
	if (this != &cp) {
		this->name = cp.name;
		this->hitPoints = cp.hitPoints;
		this->attackDamage = cp.attackDamage;
		this->energyPoints = cp.energyPoints;
	}
    return *this;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap: " << this->name << " ClapTrap name: " << ClapTrap::name << std::endl;
}
