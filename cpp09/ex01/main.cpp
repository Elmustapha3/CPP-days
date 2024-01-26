#include "RPN.hpp"

int main(int ac, char **av)
{
	try
	{
		if(ac != 2)
			throw std::runtime_error("Error: bad arguments");
		Rpn r(av);


	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
