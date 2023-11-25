#include "Zombie.hpp"

int main()
{
	Zombie *zn = zombieHorde(20, "thor");

	for (int i = 0; i < 20; i++)
		zn[i].announce();

	delete[] zn;
	return 0;
}
