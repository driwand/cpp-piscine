#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	Animal *pets[4];

	for (int i = 0; i < 2; i++) {
		pets[i] = new Cat();
	}
	for (int i = 2; i < 4; i++) {
		pets[i] = new Dog();
	}

	Cat ct;
	{
		Cat tmpct(ct);
		ct.printIdea();
        tmpct.printIdea();
        ct.setIdea("I need to eat");
        ct.printIdea();
        tmpct.printIdea();
	}
	return 0;
}
