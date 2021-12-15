#include "Array.hpp"
#include <iostream>

int main() {
	try {
		std::cout << "- - - - - Array of ints - - - - -\n";
		int size = 9;
		Array<int> arr(size);

		for (int i = 0; i < size; i++) {
			arr[i] = i + 1;
		}

		std::cout << "Array size: " << arr.size() << std::endl;
		for (int i = 0; i < size; i++) {
			std::cout << "arr[" << i << "] : " << arr[i] << std::endl;
		}

		std::cout << "- - - - - Copy of ints - - - - -\n";
		Array<int> arrCopy(arr);
		for (int i = 0; i < size; i++) {
			std::cout << "arrCopy[" << i << "] : " << arr[i] << std::endl;
		}

		std::cout << "\n- - - - - Array of strings - - - - -\n";
		Array<std::string> ee(1);
		ee[0] = "hello";
		std::cout << "Array size: " << ee.size() << std::endl;
		std::cout << "ee[0] : " << ee[0] << std::endl;

		std::cout << "\n- - - - - Array of strings with an error - - - - -\n";
		Array<std::string> strarr;
		strarr[0] = "hello";
		std::cout << "Array size: " << strarr[0] << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
