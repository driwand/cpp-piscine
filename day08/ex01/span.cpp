#include "span.hpp"

Span::Span()
{
	this->_size = 0;
}

Span::Span(unsigned int n)
{
	this->_size = n;
}

Span::Span(Span const &cp)
{
	*this = cp;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (_data.size() + 1 > _size)
		throw std::invalid_argument("Cannot add more elements.");
	_data.push_back(n);
}

int Span::shortestSpan()
{
	if (this->_data.size() <= 1)
		throw std::invalid_argument("No span found.");
	std::vector<int> cp = _data;
	std::sort(cp.begin(), cp.end());
	std::vector<int>::iterator it = cp.begin();
	int min_span = abs(*(it + 1) - *it);
	while (it != cp.end())
	{
		if (it + 1 != cp.end() && abs(*(it + 1) - *it) < min_span)
		{
			min_span = abs(*(it + 1) - *it);
		}
		it++;
	}
	return min_span;
}

int Span::longestSpan()
{
	if (this->_data.size() <= 1)
		throw std::invalid_argument("No span found.");
	int min = *std::min_element(_data.begin(), _data.end());
	int max = *std::max_element(_data.begin(), _data.end());
	return max - min;
}

Span &Span::operator=(Span const &cp)
{
	if (this != &cp)
	{
		this->_size = cp._size;
		this->_data = cp._data;
	}
	return *this;
}
