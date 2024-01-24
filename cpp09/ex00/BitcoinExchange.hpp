#ifndef BIT
#define BIT

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange {
	std::map<std::string, double> m;
	public:
		BitcoinExchange();
		BitcoinExchange(int ac, char **av);
		BitcoinExchange(const BitcoinExchange& btc);
		BitcoinExchange& operator=(const BitcoinExchange& btc);
		~BitcoinExchange();
		void fillMap(std::ifstream& file);
		void loopInInputFile(std::ifstream& file);
		void parser(std::string line);
		void calculeResult(std::string line);
};

#endif
