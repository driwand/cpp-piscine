#include "ClapTrap.hpp"

int main() {

	ClapTrap clap1("clppp");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	clap1.attack("woo");
	return 0;
}