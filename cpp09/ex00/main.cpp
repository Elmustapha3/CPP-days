#include "BitcoinExchange.hpp"

int main(int ac, char *argv[])
{
	try
	{
		if(ac != 2)
			throw std::runtime_error("Error: could not open file.");

		BitcoinExchange b;
		b.loopInInputFile(argv[1]);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
