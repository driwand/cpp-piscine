#include "span.hpp"

int main()
{
	try
	{
		std::cout << "- - - - - - simple test - - - - - -\n";
		Span sp(5);
		sp.addNumber(8);
		sp.addNumber(-7);
		sp.addNumber(3);
		sp.addNumber(8);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n- - - - - - 10k test - - - - - -\n";
		Span sp(10000);
		for (int i = 0; i < 10000; i++)
		{
			sp.addNumber(i + 1);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n- - - - - - crash test - - - - - -\n";
		Span sp(10000);
		for (int i = 0; i < 10000; i++)
		{
			sp.addNumber(i + 1);
		}
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}