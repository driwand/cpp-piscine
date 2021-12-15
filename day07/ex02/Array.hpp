#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP
# include <iostream>
# include <exception>

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &cp);
		~Array();

		Array &operator=(Array const &p);
		T &operator[](int index);

		int size();
	private:
		T *_elms;
		int _size;
};

template <typename T>
Array<T>::Array() : _size(0) {
	this->_elms = new T[0];
}

template <typename T>
Array<T>::Array(Array<T> const &cp) {
	*this = cp;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	this->_elms = new T[n];
	for (unsigned int i = 0; i < n; i++) {
		this->_elms[i] = i;
	}
}

template <typename T>
T &Array<T>::operator[](int index) {
	if (index > this->_size - 1) throw std::invalid_argument("Not a valid index");
	return this->_elms[index];
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &cp) {
	if (this == &cp) return *this;
	this->_size = cp._size;
	delete[] this->_elms;
	this->_elms = new T[this->_size];
	for (int i = 0; i < this->_size; i++) {
		this->_elms[i] = cp._elms[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_elms;
}

template <typename T>
int Array<T>::size() {
	return this->_size;
}

#endif
