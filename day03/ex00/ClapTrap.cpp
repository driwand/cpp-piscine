#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor called\n";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name constructor called\n";
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &cp) {
    std::cout << "Copy constructor called\n";
    *this = cp;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap const &cp) {
    std::cout << "Assignation operator called\n";
    return *this;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " is taking damage of " << amount << " points!\n";
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " is repaired by " << amount << " hit points!\n";
	hitPoints += amount;
}