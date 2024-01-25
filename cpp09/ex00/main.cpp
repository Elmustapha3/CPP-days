#include "BitcoinExchange.hpp"

int main(int ac, char *argv[])
{
	if(ac != 2)
		throw std::runtime_error("arguments not equal two");

	BitcoinExchange b;
	b.loopInInputFile(argv[1]);
	return 0;
}
