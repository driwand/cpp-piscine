#include <iostream>
#include <string>
#include <cctype>

std::string to_uppercase(std::string str) {
	for (int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}
	return str;
}

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; i++)
		std::cout << to_uppercase(argv[i]) << ((i + 1 != argc) ? "" : "\n");
	return (0);
}
