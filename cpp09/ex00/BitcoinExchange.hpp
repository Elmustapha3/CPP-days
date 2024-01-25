#ifndef BIT
#define BIT

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>

class BitcoinExchange {
	std::map<std::string, double> m;
	public:
		BitcoinExchange();
		BitcoinExchange(int ac, char **av);
		BitcoinExchange(const BitcoinExchange& btc);
		BitcoinExchange& operator=(const BitcoinExchange& btc);
		~BitcoinExchange(){};
		void fillMap(std::ifstream& file);
		void loopInInputFile(char *file);
		void parser(std::string line);
		void checkValues(std::string& line);
		void calculeResult(std::string line);
};

#endif
