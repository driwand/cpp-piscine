#include "phonebook.hpp"

Phonebook::Phonebook(void) {
	this->index = 0;
	this->oldest_contact = 0;
}

void	Phonebook::add_contact(void) {
	int i = index;

	if (index > 7) {

		i = oldest_contact;
		oldest_contact = (oldest_contact + 1 > 7) ? 0 : oldest_contact + 1;
	}
	else {
		index = index + 1;
	}
	contacts[i].setFirstName(prompt("first name"));
	contacts[i].setLastName(prompt("last name"));
	contacts[i].setNickName(prompt("nickname"));
	contacts[i].setPhone(prompt("phone number"));
	contacts[i].setSecret(prompt("darkest secret"));
	std::cout << "Contact has been inserted!\n";
}

void	Phonebook::search_contacts(void) {
	const char *const columns[] = { "index", "first name", "last name", "nickname"};
	std::string input;
	int user_id;

	for (int i = 0; i < 4; i++)
	{
		if (!i) std::cout << std::endl;
		std::cout << std::right << std::setw(10) << columns[i];
		if (i < 3) std::cout << "|";
		else std::cout << std::endl;
	}
	print_contacts();
	std::cout << "\nSearch contact by id: ";
	if (!std::getline(std::cin, input))
		exit(0);
	try {
		user_id = stoi(input);
		if (user_id > 8 || user_id < 1) {
			std::cerr << "Not a valid id\n";
			return ;
		}
		if (user_id > index) {
			std::cerr << "Id not found\n";
			return ;
		}
		contacts[user_id - 1].printContact();
	} catch (...) {
		std::cerr << "Not a valid id\n";
		return ;
	}
}

void	Phonebook::print_contacts() {
	for (int i = 0; i < index; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << truncate(contacts[i].getFirstName(), 10) << "|";
		std::cout << std::right << std::setw(10) << truncate(contacts[i].getLastName(), 10) << "|";
		std::cout << std::right << std::setw(10) << truncate(contacts[i].getNickName(), 10) << std::endl;
	}
}
