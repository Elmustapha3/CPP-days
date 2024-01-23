#ifndef BIT
#define BIT

#include <iostream>

class BitcoinExchange {
	std::map<std::string, double> m;
	std::stack<double> result;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& btc);
		BitcoinExchange& operator=(const BitcoinExchange& btc);
		~BitcoinExchange();
		void fillMap(fstream& file);
		void calculeResult();
		void afficheResult()
}

#endif
