#ifndef SPAN_CLASS_HPP
#define SPAN_CLASS_HPP
#include <vector>
#include <exception>
#include <iostream>
#include <algorithm>

class Span
{
public:
	Span();
	Span(Span const &cp);
	Span(unsigned int n);
	~Span();

	Span &operator=(Span const &cp);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

private:
	unsigned int _size;
	std::vector<int> _data;
};

#endif
