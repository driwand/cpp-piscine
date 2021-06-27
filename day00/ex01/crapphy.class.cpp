#include "crapphy.class.hpp"

input_code hash_input (std::string str) {
	str = trim(str);
    if (str == "ADD") return add;
    if (str == "SEARCH") return search;
	if (str == "EXIT") return quit;
	return none;
};

std::string truncate(std::string str, int width)
{
    if (str.length() > width)
		return str.substr(0, width - 1) + std::string(1, '.');
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
		if (!i) std::cout << std::endl;
		std::cout << std::right << std::setw(10) << columns[i];
		if (i < 3) std::cout << "|";
		else std::cout << std::endl;
	}
	print_contacts(contacts, index);
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

std::string prompt(std::string data)
{
	std::string line;
	std::cout << "Enter " << data << " : ";
	if (!std::getline(std::cin, line))
		exit (0);
	line = trim(line);
	line = remove_ws(line);
	return line;
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
	contacts[*index].setUnderwear(prompt("underwear color"));
	contacts[*index].setSecret(prompt("darkest secret"));
	*index = *index + 1;
	std::cout << "Contact has been inserted!\n";
}

std::string	trim(std::string str) {
	std::string spaces = " \t\n\r\f\v";
	str.erase(0, str.find_first_not_of(spaces));
	str.erase(str.find_last_not_of(spaces) + 1, str.length());
	return str;
}

std::string remove_ws(std::string str) {
	std::string res;
	for (size_t i = 0; i < str.length(); i++)
	{
		size_t j = i;
		while (isspace(str[j])) j++;
		if (j != i) {
			res += " ";
			res += str[j];
			i = j;
		}
		else
			res += str[i];
	}
	return res;
}
