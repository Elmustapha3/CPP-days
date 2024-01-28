#include "PmergeMe.hpp"


int main(int ac, char *av[])
{;
	try
	{
		if(ac < 2)
			throw std::runtime_error("bad arguments");
		PmergeMe p(ac, av);
		// PmergeMe d;
		// d.FordJohnsonAlgo(ac, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

