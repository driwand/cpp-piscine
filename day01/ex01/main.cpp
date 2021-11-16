#include "Zombie.hpp"

int main() {
	Zombie *zombies;
	int	N = 9;

	zombies = zombieHorde(N, "AAhA");
	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}