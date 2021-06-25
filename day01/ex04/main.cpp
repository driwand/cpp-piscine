#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Not a valid arguments" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::ifstream file(filename);
	std::ofstream file2(filename + ".replace");
	
	if (!file) {
		std::cerr << "Could not open the file\n";
		return (1);
	}

	std::string toFind = argv[2];
	std::string toReplace = argv[3];
	std::string line;
	std::string fileContent;
	std::string res;

	while (std::getline(file, line)) {
		if (!file.eof())
			fileContent += line.append("\n");
		else
			fileContent += line;
	}

	size_t p = fileContent.find(toFind);
	while (p != std::string::npos) {
		res += fileContent.substr(0, p);
		res += toReplace;
		fileContent.erase(0, p + toFind.length());
		p = fileContent.find(toFind);
	}
	res += fileContent;
	file2 << res;
	return (0);
}
