
#include <vector>
#include "Span.hpp"
int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// int tab[] = {6, 3, 17, 9, 11};
	// sp.addRangeOfElements(tab, 2);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "----------------" << std::endl;

	Span sp1 = Span(20000);
	int tab[20000];
	for (size_t i = 0; i < 20000; i++)
	{
		tab[i] = i + 1;
	}

	sp1.addRangeOfElements(tab, 20000);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	return 0;
}
