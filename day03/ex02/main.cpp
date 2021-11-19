#include "FragTrap.hpp"

int main() {
	FragTrap clap1("clppp");
	FragTrap scav1(clap1);
	clap1.takeDamage(5);
	clap1.attack("woo");
	clap1.beRepaired(3);
	clap1.highFivesGuys();
	scav1.attack("aha");
	scav1.highFivesGuys();
	return 0;
}
