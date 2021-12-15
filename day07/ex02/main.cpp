#include "Array.hpp"
#include <iostream>

int main() {
	try {
		Array<std::string> arr(1);
		arr[0] = 1;
		std::cout << arr[0] << std::endl;
		std::cout << "Array size: " << arr.size() << std::endl;

		// Array<std::string> ee;
		// ee = arr;
		// ee[0] = "hello";
		// std::cout << "Array size: " << ee[0] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
