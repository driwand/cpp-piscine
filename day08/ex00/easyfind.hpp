#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <exception>

template <typename T>
void easyfind(T cnt, int n) {
	if (std::find(cnt.begin(), cnt.end(), n) == cnt.end())
		throw std::invalid_argument("Could not find elenemt.");
	std::cout << "Element exists.\n";
}

#endif
