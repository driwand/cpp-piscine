#include "iter.hpp"
#include <cstring>

int printElm(int i) {
	std::cout << i << std::endl;
	return i;
}

int incrementElms(int i) {
	return ++i;
}

char printElmChar(char elm) {
	std::cout << elm << std::endl;
	return elm;
}

char toUpper(char elm) {
	return ++elm;
}

int main() {
	std::cout << "- - - - - - - int - - - - - - -\n";

	int arrInt[] = { 16, 2, 77, 40, 12071 };
	iter(arrInt, 5, incrementElms);
	iter(arrInt, 5, printElm);

	std::cout << "- - - - - - - char - - - - - - -\n";

	char arrChar[] = { 'a', 'b', 'c' };
	iter(arrChar, 3, toUpper);
	iter(arrChar, 3, printElmChar);
	return 0;
}
