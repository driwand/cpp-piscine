#include "crapphy.class.hpp"

int main() {
	std::string input;
	Crapphy contacts[8];
	int num_contacts;

	std::cout << "Pick your action (ADD/SEARCH/EXIT):\n";
	char test;
	num_contacts = 0;
	while (1) {
		if(!std::getline(std::cin, input))
			exit(0);
		switch (hash_input(input))
		{
			case add:
				add_contact(contacts, &num_contacts);
				break;
			case search:
				search_contacts(contacts, num_contacts);
				break;
			case quit:
				exit(0);
				break;
			default:
				return (0);
		}
	}
	return (0);
}
