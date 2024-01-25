#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	std::ifstream file("data.csv");
	if(file.is_open()){
		this->fillMap(file);
	}else
		throw std::runtime_error("cannot open the databse");
}

// BitcoinExchange::BitcoinExchange(char**av){
// 	std::ifstream file(av[1]);
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
		this->m[key] = atof(value.c_str());
    }
}

void BitcoinExchange::loopInInputFile(char *file){
	std::ifstream inFile(file);
	if(inFile.is_open()){
		std::string line;
		std::getline(inFile, line);
		while (std::getline(inFile, line))
		{
			try
			{
				this->parser(line);
				this->checkValues(line);
				this->calculeResult(line);
				// std::cout << line << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				continue;
			}

		}
	}else
		throw std::runtime_error("Error: could not open file.");
}

void checkValue(unsigned int value){
	if(value > 1000)
		throw std::runtime_error("Error: too large a number.");
}

void checkKey(std::string& key){
	(void)key;
}

void BitcoinExchange::checkValues(std::string& line){
	std::string key;
	std::string value;
	key = line.substr(0, line.find('|'));
	value = line.substr(line.find('|') + 1, line.length());
	checkKey(key);
	checkValue(atof(value.c_str()));

	// std::cout << "key : " << key << std::endl;
	// std::cout << "value : " << value << std::endl;
}



void BitcoinExchange::parser(std::string line){
	int i;
	for (i = 0; i < 10; i++)
	{
		if(i == 4|| i == 7){
			if(line[i] != '-')
				throw std::runtime_error("invalid date format 1");
		}
		else if(!isdigit(line[i])){
			throw std::runtime_error("invalid date format 2");
		}
	}

	while (line[i]){
		if(line[i] != ' ')
			break;
		else
			i++;
	}

	if(line[i] != '|'){
		throw std::runtime_error("Error: bad input =>");
	}
	i++;

	while (line[i++])
		if(line[i] != ' ')
			break;
	if(line[i] == '-'){
		throw std::runtime_error("Error: not a positive number. 4");
	}

	size_t j;
	for (j = i; j < line.length(); j++)
	{
		if(line[i] == '.')
			throw std::runtime_error("invalid format 5");
		if(line[j] == '.')
			break;
		if(!isdigit(line[j]))
			throw std::runtime_error("invalid format 6");
	}
	i = j + 1;
	for (j = i; j < line.length(); j++)
	{
		if(!isdigit(line[j])){
			throw std::runtime_error("invalid format 7");
		}
	}

}

void BitcoinExchange::calculeResult(std::string line){
	std::string key;
	std::string value;
	key = line.substr(0, line.find('|'));
	value = line.substr(line.find('|') + 1, line.length());

	std::map<std::string, double>::iterator it, lower;
	it = this->m.find(key);
	if(it == this->m.end()){
		lower = this->m.lower_bound(key);
		std::cout << lower->first << " => " << lower->second << " = " << lower->second * atof(value.c_str()) << std::endl;
	}
	else{

		std::cout << it->first << " => " << it->second << " = " << it->second * atof(value.c_str()) << std::endl;
	}

}



