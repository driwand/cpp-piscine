#include "Zombie.hpp"

int main() {
	Zombie *zombies;

	zombies = zombieHorde(9, "AAhA");
	for (int i = 0; i < 9; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}