#include "Zombie.hpp"
Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << this->name <<" is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce(){
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
