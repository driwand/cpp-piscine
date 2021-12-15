#ifndef ITER_CLASS_HPP
# define ITER_CLASS_HPP
# include <iostream>

template<typename T, typename U>
void iter(T *arr, U len, T itFun(T)) {
	for (U i = 0; i < len; i++) {
		arr[i] = itFun(arr[i]);
	}
}

#endif
