#include "ScavTrap.hpp"

int main() {
	ScavTrap clap1("clppp");
	ScavTrap scav1(clap1);
	clap1.takeDamage(5);
	clap1.attack("woo");
	clap1.beRepaired(3);
	clap1.guardGate();
	scav1.attack("aha");
	scav1.guardGate();
	return 0;
}
