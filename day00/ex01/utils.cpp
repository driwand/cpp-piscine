#include "phonebook.hpp"

std::string prompt(std::string data) {
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

input_code hash_input(std::string str) {
	str = trim(str);
    if (str == "ADD") return add;
    if (str == "SEARCH") return search;
	if (str == "EXIT") return quit;
	return none;
};

std::string truncate(std::string str, int width) {
    if (str.length() > width)
		return str.substr(0, width - 1) + std::string(1, '.');
    return str;
}
