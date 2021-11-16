#include <iostream>
#include <fstream>
#include <sstream>

std::string to_uppercase(std::string str) {
	for (size_t i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}
	return str;
}

void replace(std::string filename, std::string toFind, std::string toReplace) {
	if (toFind.empty() || toReplace.empty()) {
		std::cout << "Empty arguments\n";
		return;
	}

	std::ifstream file(filename);
	if (!file) {
		std::cerr << "Could not open the file\n";
		return;
	}

	std::ofstream file2(to_uppercase(filename) + ".replace");

	std::stringstream fileStream;
	fileStream << file.rdbuf();
	std::string fileContent = fileStream.str();
	std::string res = "";
	int i = 0;

	size_t p = fileContent.find(toFind);
	while (p != std::string::npos) {
		res += fileContent.substr(0, p);
		res += toReplace;
		fileContent.erase(0, p + toFind.length());
		p = fileContent.find(toFind);
		i++;
	}
	res += fileContent;
	file2 << res;
	file.close();
	file2.close();
	std::cout << toFind << " has been replaced " << i << " time with " << toReplace << std::endl;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Not a valid arguments" << std::endl;
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}
