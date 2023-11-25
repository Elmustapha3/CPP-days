#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
}

void HumanB::attack(){
    if(weapon)
        std::cout << this->name << " attacks with their "<< weapon->getType()<< std::endl;
    else
        std::cout <<  this->name << "has not weapon type" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

Weapon* HumanB::getWeapon(){
    return this->weapon;
}
