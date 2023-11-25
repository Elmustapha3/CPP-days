#include "Harl.hpp"


int check_if_is_a_level(std::string level)
{
	if(level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "the level that you enter is not a level\n";
		return 0;
	}
	return 1;
}

void Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchuprger. I really do!\n\n";
}

void Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put \
	enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\
	\nI’ve been coming for  years whereas you started working here since last month.\n\n";
}

void Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level){
	if(!check_if_is_a_level(level))
		return;
	void (Harl::*funcPtr[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			switch (i)
			{
				case 0:
					(this->*funcPtr[0])();
				case 1:
					(this->*funcPtr[1])();
				case 2:
					(this->*funcPtr[2])();
				case 3:
					(this->*funcPtr[3])();
				default:
					break;
			}
		}
	}
}
