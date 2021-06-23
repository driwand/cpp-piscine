#include "crapphy.class.hpp"

input_code hash_input (std::string const str) {
    if (str == "ADD") return add;
    if (str == "SEARCH") return search;
	if (str == "EXIT") return quit;
	return none;
};

std::string truncate(std::string str, int width)
{
    if (str.length() > width)
		return str.substr(0, width - 3) + std::string(3, '.');
    return str;
}

void	print_contacts(Crapphy contacts[], int index) {
	for (int i = 0; i < index; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << truncate(contacts[i].getFirstName(), 10) << "|";
		std::cout << std::right << std::setw(10) << truncate(contacts[i].getLastName(), 10) << "|";
		std::cout << std::right << std::setw(10) << truncate(contacts[i].getNickName(), 10) << std::endl;
	}
}

void	search_contacts(Crapphy contacts[], int index) {
	const char *const columns[] = { "index", "first name", "last name", "nickname"};
	std::string input;
	int user_id;

	for (int i = 0; i < 4; i++)
	{
		std::cout << std::right << std::setw(10) << columns[i];
		if (i < 3) std::cout << "|";
		else std::cout << std::endl;
	}
	print_contacts(contacts, index);
	std::cout << "\nSearch contact by id:\n";
	if(!std::getline(std::cin, input))
		exit(0);
	try {
		user_id = stoi(input);
		if (user_id > 8 || user_id < 1) {
			std::cerr << "Not a valid id range\n";
			return ;
		}
		contacts[user_id - 1].printContact();
	} catch (...) {
		std::cerr << "Not a valid index\n";
		return ;
	}
}

std::string prompt(std::string data)
{
	std::string tmp;
	std::cout << "Enter " << data << " :\n";
	if (!std::getline(std::cin, tmp))
		exit (0);
	return tmp;
}

int isNumber(std::string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i])) return 0;
	}
	return 1;
}


void	add_contact(Crapphy *contacts, int *index) {
	if (*index > 7) {
		std::cout << "You have already reached the max contacts." << std::endl;
		return ;
	}
	contacts[*index].setFirstName(prompt("first name"));
	contacts[*index].setLastName(prompt("last name"));
	contacts[*index].setNickName(prompt("nickname"));
	contacts[*index].setLogin(prompt("login"));
	contacts[*index].setEmail(prompt("email address"));
	contacts[*index].setAdress(prompt("postal address"));
	contacts[*index].setPhone(prompt("phone number"));
	contacts[*index].setBithday(prompt("birthday"));
	contacts[*index].setMeal(prompt("favorite meal"));
	contacts[*index].setUnderwear(prompt("underwaer color"));
	contacts[*index].setSecret(prompt("darkest secret"));
	*index = *index + 1;
	std::cout << "Contact has been inserted!\n";
}
