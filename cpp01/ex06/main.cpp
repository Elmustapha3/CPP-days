#include "Harl.hpp"

int main(int ac, char *av[])
{
	if(ac != 2)
	{
		std::cout << "Must be two arguments\n";
		return 0;
	}
	Harl myHarl;

	myHarl.complain(av[1]);
	return 0;
}

