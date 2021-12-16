#include "easyfind.hpp"
#include <array>
#include <vector>

int main() {
	try {
		std::cout << "- - - - - - easyfind using vector<> - - - - - -\n";
		std::vector<int> vec;

		for (int i = 0; i < 10; i++) {
			vec.push_back(i + 1);
		}

		easyfind(vec, 1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "- - - - - - easyfind using array<> - - - - - -\n";
		std::array<int, 3> arr;

		for (int i = 0; i < arr.size(); i++) {
			arr[i] = (i + 1);
		}

		easyfind(arr, 99);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
