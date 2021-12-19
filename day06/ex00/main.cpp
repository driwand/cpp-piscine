#include "parser.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid arguments\n";
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
