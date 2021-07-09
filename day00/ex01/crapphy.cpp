#include "phonebook.hpp"

int main() {
	std::string input;
	Phonebook phone;
	int num_contacts;

	num_contacts = 0;
	while (1) {
		std::cout << "Pick a command (ADD/SEARCH/EXIT): ";
		if(!std::getline(std::cin, input))
			exit(0);
		switch (hash_input(input))
		{
			case add:
				phone.add_contact();
				break;
			case search:
				phone.search_contacts();
				break;
			case quit:
				exit(0);
				break;
			default:
				std::cout << "Not a valid input\n";
		}
	}
	return (0);
}
