#include "span.hpp"

int main()
{
	Span sp = Span(5);

	try
	{
		sp.shortestSpan();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(1);
	sp.addNumber(9);
	sp.addNumber(2);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(100);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}