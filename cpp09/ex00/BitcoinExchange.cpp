#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	std::ifstream file("data.csv");
	if(file.is_open()){
		this->fillMap(file);
	}else
		throw std::runtime_error("cannot open the databse");
}

// BitcoinExchange::BitcoinExchange(int ac, char**av){
// 	std::ifstream file("data.csv");
// 	if(file.is_open()){
// 		this->fillMap(file);
// 	}else
// 		throw std::runtime_error("cannot open the databse");

// }

void BitcoinExchange::fillMap(std::ifstream& file){
	std::string key;
	std::string value;
	while (std::getline(file, key, ',') && std::getline(file, value))
	{
		this->m[key] = value;
    }
};

void BitcoinExchange::loopInInputFile(std::ifstream& inFile){
	if(inFile.is_open()){
		std::string line;
		while (std::getline(inFile, line))
		{
			this->parser(line);
			this->calculeResult(line);
		}
	}else
		throw std::runtime_error("Error: could not open file.");
}

void BitcoinExchange::parser(std::string line){
	int i;
	for (i = 0; i < 10; i++)
	{
		if(line[4] != '-' || line[7] != '-')
			throw std::runtime_error("invalid date format");
		else if(!isdigit([i])){
			throw std::runtime_error("invalid date format");
		}
	}

	while (line[i++] == ' ')
		;
	if(line[i++] != '|')
		throw std::runtime_error("invalid format");
	while (line[i++] == ' ')
		;
	if(line[i] == '-')
		throw std::runtime_error("Error: not a positive number.");

	while (line[i++]){
		if(!isdigit(line[i]))
			throw std::runtime_error("invalid format");
	}
	if(line[i] == '.')
		i++;
	while (isdigit(line[i++]))
		;

}

void BitcoinExchange::calculeResult(std::string line){

}



