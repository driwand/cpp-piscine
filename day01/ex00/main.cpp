#include "Zombie.hpp"

int main() {
	Zombie *zombie;

	zombie = newZombie("wwwew");
	zombie->announce();
	randomChump("oiiwe");
	randomChump("ahaa");
	delete zombie;
	return (0);
}