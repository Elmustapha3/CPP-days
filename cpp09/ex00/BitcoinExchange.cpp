#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	std::ifstream file("data.csv");
	if(file.is_open()){
		this->fillMap(file);
	}else
		throw std::runtime_error("cannot open the databse");
}

BitcoinExchange::BitcoinExchange(char *file){
	std::ifstream afile("data.csv");
	if(afile.is_open()){
		this->fillMap(afile);
	}else
		throw std::runtime_error("cannot open the databse");
	std::ifstream inFile(file);
	if(inFile.is_open()){
		std::string line, date, value;
		std::getline(inFile, line);
		date = line.substr(0, line.find('|'));
		date = trim(date);
		value = line.substr(line.find('|') + 1, line.length());
		value = trim(value);
		if(date != "date" || value != "value")
			throw std::runtime_error("invalid header");
		while (std::getline(inFile, line))
		{
			try
			{
				if(line.empty())
					continue;
				this->parser(line);
				this->checkValues(line);
				this->calculeResult(line);
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
		std::string line, date, value;
		std::getline(inFile, line);
		date = line.substr(0, line.find('|'));
		date = trim(date);
		value = line.substr(line.find('|') + 1, line.length());
		value = trim(value);
		if(date != "date" || value != "value")
			throw std::runtime_error("invalid header");
		while (std::getline(inFile, line))
		{
			try
			{
				if(line.empty())
					continue;
				this->parser(line);
				this->checkValues(line);
				this->calculeResult(line);
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
	size_t m[12] = {31, 29, 31,30,31,30,31, 31, 30, 31, 30, 31};
	size_t year, month, day;
	size_t a = key.find('-');
	size_t b = key.find('-', a + 1);
	year = atof(key.substr(0, a).c_str());
	month = atof(key.substr(a + 1, 2).c_str());
	day = atof(key.substr(b + 1).c_str());

	if(month > 12 || month < 1)
		throw std::runtime_error("Error : invalid month");
	if(year > 2022 || year < 2009)
		throw std::runtime_error("Error : invalid year");
	if((year % 4 == 0 || (year % 400 == 0 && year % 100 == 0)) && month == 2 && (day > 28 || day < 1)){
		throw std::runtime_error("Error : invalid day");
	}
	else if(day > m[month - 1] || day < 1)
		throw std::runtime_error("Error : invalid day");




	// std::cout << a << "---------" << key.find('-', a + 1) << std::endl;
	// std::cout << '|' << year << '|' << std::endl;
	// std::cout << '|' << month << '|' << std::endl;
	// std::cout << '|' << day << '|' << std::endl;
	// std::cout << month << std::endl;
	// std::cout << day << std::endl;
	// year = line.substr(0, line.find('-'));
}

void BitcoinExchange::checkValues(std::string& line){
	std::string key,value;
	key = line.substr(0, line.find('|'));
	key = trim(key);
	value = line.substr(line.find('|') + 1, line.length());
	value = trim(value);
	checkKey(key);
	checkValue(atof(value.c_str()));

	// std::cout << "key : " << key << std::endl;
	// std::cout << "value : " << value << std::endl;
}



void BitcoinExchange::parser(std::string &line){
	int i;
	line = trim(line);
	for (i = 0; i < 10; i++)
	{
		if(i == 4|| i == 7){
			if(line[i] != '-')
				throw std::runtime_error("invalid date format");
		}
		else if(!isdigit(line[i])){
			throw std::runtime_error("invalid date format");
		}
	}

	while (line[i]){
		if(line[i] != ' ')
			break;
		else
			i++;
	}

	if(line[i] != '|'){
		throw std::runtime_error("Error: bad input => " + line);
	}
	i++;

	if(!(line.c_str())[i])
		throw std::runtime_error("invalid format");


	while (line[i++])
		if(line[i] != ' ')
			break;
	// std::cout << "------------" << line[i] << std::endl;
	if(line[i] == '-'){
		throw std::runtime_error("Error: not a positive number.");
	}

	size_t j;
	for (j = i; j < line.length(); j++)
	{
		if(line[i] == '.')
			throw std::runtime_error("invalid format");
		if(line[j] == '.'){
			if(!(line.c_str())[j + 1])
				throw std::runtime_error("invalid format");
			break;
		}
		if(!isdigit(line[j]))
			throw std::runtime_error("invalid format");
	}
	i = j + 1;

	for (j = i; j < line.length(); j++)
	{
		if(!isdigit(line[j])){
			throw std::runtime_error("invalid format");
		}
	}

}

void BitcoinExchange::calculeResult(std::string line){
	std::string key, value;
	key = line.substr(0, line.find(' '));
	key = trim(key);
	value = line.substr(line.find('|') + 1, line.length());
	value = trim(value);

	std::map<std::string, double>::iterator it, lower;
	it = this->m.find(key);
	if(it == this->m.end()){
		lower = this->m.lower_bound(key);
		// lower--;
		std::cout << key << " => " << value << " = " << lower->second * atof(value.c_str()) << std::endl;
	}
	else{

		std::cout << key << " => " << value << " = " << it->second * atof(value.c_str()) << std::endl;
	}

}


std::string& trim(std::string& str){
	std::string::iterator it = str.begin();
    while (it != str.end() && std::isspace(*it)) {
        ++it;
    }
    str.erase(str.begin(), it);
	std::string::reverse_iterator rit = str.rbegin();
	while (rit != str.rend() && std::isspace(*rit)) {
        rit++;
    }
    str.erase(rit.base(), str.end());
	return str;
}
