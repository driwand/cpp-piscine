#include "Karen.hpp"

int main(int argc, char **argv) {
	if (argc < 2) return (0);

	std::string level = argv[1];
	Karen karen;
	karen.karenLevel(level);
	return (0);
}
