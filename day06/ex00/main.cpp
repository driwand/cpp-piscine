#include "parser.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid argumants\n";
		return 1;
	}

	try {
		Parser pr(argv[1]);;
		pr.convert();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
