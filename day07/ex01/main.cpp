#include "iter.hpp"
#include <cstring>

void printElm(int i) {
	std::cout << i << std::endl;
}

void printElmStr(std::string elm) {
	std::cout << elm << std::endl;
}

int main() {
	std::cout << "- - - - - - - int - - - - - - -\n";

	int arrInt[] = { 16, 2, 77, 40, 12071 };
	iter(arrInt, 5, printElm);

	std::cout << "- - - - - - - char - - - - - - -\n";

	std::string arrChar[] = { "abc", "def", "ghi" };
	iter(arrChar, 3, printElmStr);
	return 0;
}
