#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
	try
	{
		if(ac != 2)
			throw std::runtime_error("Error: could not open file.");

		BitcoinExchange b(av[1]);
		// b.loopInInputFile(av[1]);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
